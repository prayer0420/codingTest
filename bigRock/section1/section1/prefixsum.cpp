////�ð����⵵ O(N*M)
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
////�ð����⵵ O(1)
//#include <iostream>
//using namespace std;
//
//int a[100004], b, c, psum[100004], n, m;
//
//int main()
//{
//	cin >> n >> m;  //���� 8���� ī���, ������ ���ϴ� Ƚ��3�� ����
//
//	//1���� 8���� ���ڸ� ä��
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		psum[i] = psum[i - 1] + a[i];
//	}
//
//	//�� 3�� ã������
//	for (int i = 0; i < m; i++)
//	{
//		//ù��° 1~4���� , �ι�° 1~5����, ����° 3~5����
//		cin >> b >> c;
//		cout << psum[c] - psum[b - 1] << endl;
//	}
//
//	return 0;
//}