#include <iostream>
#include "MaxSubSum.h";
using namespace std;

int main()
{
	int a[8] = {4, -3, 5, -2, -1, 2, 6, -2};
	cout << "ö�ٷ���" << MaxSubSequenceSum1(a, 8) << endl;

	//���������ջ���
	//cout << "���η���" << MaxSubSequenceSum2(a, 8) << endl;

	cout << "���Ž⣺" << MaxSubsequenceSum3(a, 8) << endl;
	return 0;
}