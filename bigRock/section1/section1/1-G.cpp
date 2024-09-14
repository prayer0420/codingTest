#include <iostream>

using namespace std;
int n;

string s, ori_s, pre, suf;

int main()
{
	cin >> n; //파일의 개수
	cin >> ori_s; //패턴
	int pos = ori_s.find(*); //기준 위치
	pre = ori_s.substr(0, pos);
	suf = ori_s.substr(pos + 1);

	for (int i = 0; i < n; i++)
	{
		cin >> s;
		//s의 size는 최소한 pre+suf을 합한 size보단 커야함
		if (pre.size() + suf.size() > s.size()
		{
			cout << "NE" << endl;
		}
		else
		{
			if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size()))
				cout << "DA" << endl;
			else
				cout << "NE" << endl;
		}

		return 0;
	}