#pragma once
#include <iostream>

//���丮��

//���
int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	return factorial(n * (n - 1));
}


//�ݺ���
int fact1(int n)
{
	int ret = 1;
	for (int i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}


//�Ǻ���ġ ����
int fibo(int n)
{
	if (n == 0 || n == 1)
		return n;
	return fibo(n - 1) + fibo(n - 2);
}
