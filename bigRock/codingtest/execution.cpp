#include <iostream>
#include <vector>
#include "combination.h"
#include "permutation.h"
#include "recursive.h"

using namespace std;


int main()
{
	////combi
	//vector<int> b;
	//combi(0, b);


	///permu
	//vector<int> a;
	//makePermutation(3, 3, 0, a);

	vector<int> v = { 1,2,3,4 };
	makePermutation2(v);

	return 0;
}