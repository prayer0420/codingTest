#pragma once
#include <algorithm>
#include <iostream>

void printV(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << "\n";
}


//next_permutation�� Ȱ���� ���� 
void makePermutation1()
{
	int a[] = { 1,2,3 };
	
	vector<int> b = { 1,2,3 };
	
	vector<int> c = { 2,1,3 };
	sort(c.begin(), c.end()); //�������� ������ �ȵǾ������� �������
	
	do
	{
		for (int i : a)
			cout << i << " ";
		cout << '\n';
	} while (next_permutation(&a[0], &a[0] + 3)); 
	//while (next_permutation(b, b + 3)); //b���� b+3���������� ����! b+3�� �ش���� ����
	//while (next_permutation(b.begin(), b.end()));
}


//2���� �̾ƶ�
void makePermutation2(vector<int> a)
{
	do
	{
		for (int i = 0; i < 2; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	} while (next_permutation(a.begin(), a.end()));
}




//����Լ�����(n���߿� r���� �̴´�)
void makePermutation3(int n, int r, int depth, vector<int>& v)
{
	cout << n << " : " << r << " : " << depth << '\n';

	if (r == depth)
	{
		printV(v);
		return;
	}
	for (int i = depth; i < n; i++)
	{
		swap(v[i], v[depth]);
		makePermutation3(n, r, depth + 1, v);
		swap(v[i], v[depth]); //���� ��
	}
	return;
}