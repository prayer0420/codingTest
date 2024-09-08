////시간복잡도 O(N*M)
////#include <iostream>
////using namespace std;
////
////
////int a[100004], b, c, psum[100004], n, m;
////
////int main()
////{
////	cin >> n >> m;
////	for (int i = 1; i <=n ; i++)
////	{
////		cin >> a[i];
////	}
////
////	for (int i = 0; i < m; i++)
////	{
////		cin >> b >> c;
////		int sum = 0;
////		for (int j = b; j <= c; j++)
////		{
////			sum += a[j];
////			cout << sum << endl;
////		}
////	}
////
////	return 0;
////}
//
////시간복잡도 O(1)
//#include <iostream>
//using namespace std;
//
//int a[100004], b, c, psum[100004], n, m;
//
//int main()
//{
//	cin >> n >> m;  //각각 8개의 카드와, 구간합 구하는 횟수3을 기입
//
//	//1부터 8까지 숫자를 채움
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		psum[i] = psum[i - 1] + a[i];
//	}
//
//	//총 3번 찾을것임
//	for (int i = 0; i < m; i++)
//	{
//		//첫번째 1~4까지 , 두번째 1~5까지, 세번째 3~5까지
//		cin >> b >> c;
//		cout << psum[c] - psum[b - 1] << endl;
//	}
//
//	return 0;
//}