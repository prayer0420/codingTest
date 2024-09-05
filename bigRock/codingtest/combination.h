#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//5���߿� 3�� �̱�
int  n = 5, k = 3, a[5] = { 1,2,3,4,5 };

void print(vector<int> b)
{
	for (int i : b)  cout << i << " ";
	cout << endl;
}

//����Լ� ����(4�� �̻��϶�)
void combi(int start, vector<int> b)
{
	//�������
	if (b.size() == k)
	{
		print(b);
		return;
	}
	for (int i = start; i < n; i++)
	{
		b.push_back(i);
		combi(i, b);
		b.pop_back();
	}
}

//��ø for�� ����(3�� �����϶�)
void combi2(vector<int> b)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1 ; j <n; j++)
		{
			for (int k = j+1; k < n; k++)
			{
				cout << i << " : " << j << " : " << k << " : " << endl;
			}
		}
	}
}

