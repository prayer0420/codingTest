#include <iostream>
#include <map>
using namespace std;


//N�� M�� 1���� ũ�ų� ����, 100,000���� �۰ų� ����
//��Ŷ�� �̸��� �ִ���̴� 20, �ּҴ� 2

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
		map1[s] = i + 1; //Ű: string, ��: int
		map2[i + 1] = s;//Ű: int, ��: string
	}

	for (int i = 0; i < M; i++)
	{
		cin >> s;
		//s�� �������̶��
		if (atoi(s.c_str()) == 0)
		{
			//map���� s(����)�� �´� value��(����) ��ȯ
			cout << map1[s] << endl;
		}
		//s�� �������̾��ٸ�
		else
		{
			//map2���� s(����)�� �´� value��(����) ��ȯ
			cout << map2[atoi(s.c_str())] << endl;
		}
	}
}