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


//next_permutation을 활용한 순열 
void makePermutation1()
{
	int a[] = { 1,2,3 };
	
	vector<int> b = { 1,2,3 };
	
	vector<int> c = { 2,1,3 };
	sort(c.begin(), c.end()); //오름차순 정렬이 안되어있으면 해줘야함
	
	do
	{
		for (int i : a)
			cout << i << " ";
		cout << '\n';
	} while (next_permutation(&a[0], &a[0] + 3)); 
	//while (next_permutation(b, b + 3)); //b부터 b+3이전까지의 순열! b+3은 해당되지 않음
	//while (next_permutation(b.begin(), b.end()));
}


//2개만 뽑아라
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




//재귀함수버전(n개중에 r개를 뽑는다)
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
		swap(v[i], v[depth]); //원상 복
	}
	return;
}