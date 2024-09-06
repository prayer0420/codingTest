#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> split(const string& S, string delimiter)
{
	vector<string> result;

	auto start = 0;
	auto end = S.find(delimiter); //delimiter = ±¸ºĞÀÚ
	
	while (end != string::npos)
	{
		result.push_back(S.substr(start, end - start));
		start = end + delimiter.size();
		end = S.find(delimiter, start);
	}

	result.push_back(S.substr(start));
	return result;

}