//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//
//
//	//10 * n^2 +n   => O(n^2)
//	//for (int i = 0; i < 10; i++)   //10번
//	//{
//	//	for (int j = 0; j < n; j++) //n번
//	//	{
//	//		for (int k = 0; k < n; k++) //n번
//	//		{
//	//			if (true) cout << i << endl;  //단순로직
//	//		}
//	//	}
//	//}
//
//
//	//Q1.
//	int n;
//	cin >> n;
//	int a = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			a += i + j;
//		}
//	}
//	cout << a << endl;
//
//	//Q2.
//	//cin >> n;
//	//for(int i = 0; i <=n; i++)
//	//{
//	//	a[i - 1] = i;
//	//}
//	//int sum = go(0, n - 1);
//
//	//Q3
//	//cin >> N;
//	//solve(N);
//	//return 0;
//
//}
////Q2
////int n;
////int a[1004];
////int cnt;
////int go(int l, int r)
////{
////	cnt++;
////	if (l == r)
////		return a[l];
////
////	int mid = (l + r) / 2;
////	int sum = go(l, mid) + go(mid + 1, r);
////	return sum;
////}
//
////Q3
//int N;
//void solve(int N)
//{
//	int a = 0;
//	int i = N;
//	while (i > 0)
//	{
//		a += i;
//		i /= 2;
//	}
//}