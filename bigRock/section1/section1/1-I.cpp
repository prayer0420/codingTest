#include <iostream>
#include <map>
using namespace std;


//N과 M은 1보다 크거나 같고, 100,000보다 작거나 같다
//포킷몬 이름의 최대길이는 20, 최소는 2

int N = 26;
int M = 5;
string s;
map<string, int> map1;
map<int, string> map2;

int main()
{
	for (int i = 0; i < N; i++)
	{
		cin >> s;
		map1[s] = i + 1; //키: string, 값: int
		map2[i + 1] = s;//키: int, 값: string
	}

	for (int i = 0; i < M; i++)
	{
		cin >> s;
		//s가 문자형이라면
		if (atoi(s.c_str()) == 0)
		{
			//map에서 s(문자)에 맞는 value값(숫자) 반환
			cout << map1[s] << endl;
		}
		//s가 숫자형이었다면
		else
		{
			//map2에서 s(숫자)에 맞는 value값(문자) 반환
			cout << map2[atoi(s.c_str())] << endl;
		}
	}
}