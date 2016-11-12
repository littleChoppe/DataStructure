#include <iostream>
#include "MaxSubSum.h";
using namespace std;

int main()
{
	int a[8] = {4, -3, 5, -2, -1, 2, 6, -2};
	cout << "枚举法：" << MaxSubSequenceSum1(a, 8) << endl;

	//这个方法会栈溢出
	//cout << "分治法：" << MaxSubSequenceSum2(a, 8) << endl;

	cout << "最优解：" << MaxSubsequenceSum3(a, 8) << endl;
	return 0;
}