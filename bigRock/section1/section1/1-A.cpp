//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
////순열, do-while 9P7
//
////int a[9];
////int main()
////{
////	for (int i = 0; i < 9; i++)
////	{
////		cin >> a[i];
////	}
////
////	sort(a, a + 9);
////
////	do
////	{
////		int sum = 0;
////		for (int i = 0; i < 7; i++)
////		{
////			sum += a[i];
////		}
////
////		if (sum == 100)
////			break;
////
////	} while (next_permutation(a, a + 9));
////
////	for (int i = 0; i < 7; i++)
////	{
////		cout << a[i] << endl;
////	}
////	return 0;
////
////}
//
//
////순열 재귀함수로 풀기 9P7
//int a[9];
//int n = 9, r = 7;
//void solve()
//{
//	int sum = 0;
//	for (int i = 0; i < r; i++)
//	{
//		sum += a[i];
//	}
//	if (sum == 100)  
//	{
//		sort(a, a + 7);
//		for (int i = 0; i < r; i++)
//		{
//			cout << a[i] << endl;
//			exit(0);
//		}
//	}
//}
//
//void print()
//{
//	for (int i = 0; i < r; i++)
//	{
//		cout << a[i] << " ";
//		cout << endl;
//	}
//}
//void makePermutation(int n, int r, int depth)
//{
//	if (r == depth)
//	{
//		solve();
//		return;
//	}
//
//	for (int i = depth; i < n; i++)
//	{
//		swap(a[i], a[depth]);
//		makePermutation(n, r, depth + 1);
//		swap(a[i], a[depth]);
//	}
//
//	return;
//}
//
//int main()
//{
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//
//	makePermutation(n, r, 0);
//
//	return 0;
//}
//
//
////이중 for문, 9C2로 
//int a[9], sum;
//vector<int> v;
//pair<int, int> ret; 
//void solve()
//{
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (sum - a[i] - a[j] == 100)
//			{
//				ret = { i,j };
//				return;
//			}
//		}
//	}
//}
//
//int main()
//{
//	for (int i = 0; i < 9; i++)
//	{
//		cin >> a[i];
//		sum += a[i];
//	}
//	solve();
//
//	for (int i = 0; i < 9; i++)
//	{
//		if (ret.first == i || ret.second == i)
//			continue;
//		v.push_back(a[i]);
//	}
//	sort(v.begin(), v.end());
//	for (int i : v)
//		cout << i << " ";
//	
//	return 0;
//}
