//#include <string>
//#include <iostream>
//using namespace std;
//
//string dopa = "abcde";
//void print(string txt)
//{
//	cout << txt << endl;
//}
//
//
//int main()
//{
//	//Q1. 앞에서부터 3개의 문자열을 출력하라
//	string dopa2 = dopa.substr(0, 3);
//	print(dopa2);
//
//	//Q2. 해당 문자열을 거꾸로 해서 출력하라
//	reverse(dopa2.begin(), dopa2.end());
//	print(dopa2);
//
//	//Q3. 거꾸로된 해당 문자열 끝에 "umzunsik"이란 문자열을 추가하라
//	dopa2 += "umzunsik";
//	print(dopa2);
//
//}

#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int n, temp;
vector<int> v;
int main()
{
	cin >> n;
	double b = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		b += temp;
		v.push_back(temp);
	}
	//오름차순 정렬
	sort(v.begin(), v.end());
	for (int i : v)
	{
		cout << i << " ";
	}
	cout << endl;

	//평균값(소수점 2째 자리)
	cout << fixed << setprecision(2) << (b / n) << endl;
	printf("%.2lf\n", (b / n));


	return 0;



}