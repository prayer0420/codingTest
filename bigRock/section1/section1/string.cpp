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
//	//Q1. �տ������� 3���� ���ڿ��� ����϶�
//	string dopa2 = dopa.substr(0, 3);
//	print(dopa2);
//
//	//Q2. �ش� ���ڿ��� �Ųٷ� �ؼ� ����϶�
//	reverse(dopa2.begin(), dopa2.end());
//	print(dopa2);
//
//	//Q3. �Ųٷε� �ش� ���ڿ� ���� "umzunsik"�̶� ���ڿ��� �߰��϶�
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
	//�������� ����
	sort(v.begin(), v.end());
	for (int i : v)
	{
		cout << i << " ";
	}
	cout << endl;

	//��հ�(�Ҽ��� 2° �ڸ�)
	cout << fixed << setprecision(2) << (b / n) << endl;
	printf("%.2lf\n", (b / n));


	return 0;



}