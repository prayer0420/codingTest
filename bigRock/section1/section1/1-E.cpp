#include <iostream>

using namespace std;
int m, cnt[26];

string s, ret;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		cnt[s[0] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (cnt[i] >= 5)
		{
			ret += i + 'a';
		}
		if (ret.size()
			cout << ret << endl;
		else
			cout << "PREDAJA" << endl;
	}