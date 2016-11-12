#include <iostream>

using namespace std;

//枚举法
int MaxSubSequenceSum1(const int * a, int n)
{
	int thisSum, maxSum, i, j;

	maxSum = 0;
	for (size_t i = 0; i < n; i++)
	{
		thisSum = 0;
		for (size_t j = i; j < n; j++)
		{
			thisSum += a[j];
			if (thisSum > maxSum)
				maxSum = thisSum;
		}
	}
	return maxSum;
}

//分治法
int Max3(int a, int b, int c)
{
	return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

int MaxSubSum(const int * a, int left, int right)
{
	int maxLeftSum, maxRightSum;
	int maxLeftBorderSum, maxRightBorderSum;
	int leftBorderSum, rightBorderSum;
	int center;

	if (left == right)
	if (a[left] > 0)
		return a[left];
	else
		return 0;

	center = (left + right) / 2;
	maxLeftSum = MaxSubSum(a, left, center);
	maxRightSum = MaxSubSum(a, center + 1, right);

	maxLeftBorderSum = 0; leftBorderSum = 0;
	for (size_t i = center; i >= left; i--)
	{
		leftBorderSum += a[i];
		if (leftBorderSum > maxLeftBorderSum)
			maxLeftBorderSum = leftBorderSum;
	}

	maxRightBorderSum = 0; rightBorderSum = 0;
	for (size_t i = center + 1; i <= right; i++)
	{
		rightBorderSum += a[i];
		if (rightBorderSum > maxRightBorderSum)
			maxRightBorderSum = rightBorderSum;
	}

	return Max3(maxLeftSum, maxRightSum, maxLeftBorderSum + maxRightBorderSum);
}

int MaxSubSequenceSum2(const int * a, int n)
{
	return MaxSubSum(a, 0, n - 1);
}

//O（N）解法，最优
int MaxSubsequenceSum3(const int * a, int n)
{
	int thisSum, maxSum;

	thisSum = maxSum = 0;
	for (size_t i = 0; i < n; i++)
	{
		thisSum += a[i];
		if (thisSum < 0)
			thisSum = 0;
		else if (thisSum > maxSum)
			maxSum = thisSum;
	}

	return maxSum;
}