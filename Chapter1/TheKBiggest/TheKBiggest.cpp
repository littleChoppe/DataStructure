// TheKBiggest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int Compare(const void * a, const void * b)
{
	return *(int *)b - *(int *)a;
}

int FindTheKBiggest(int* intArray, int length, int k)
{
	int * a = new int[k];
	for (size_t i = 0; i < k; i++)
	{
		a[i] = intArray[i];
	}
	qsort(a, k, sizeof(int), Compare);

	for (size_t i = k; i < length; i++)
	{
		if (intArray[i] > a[k - 1])
		{
			a[k - 1] = intArray[i];
			qsort(a, k, sizeof(int), Compare);
		}
	}
	return a[k - 1];
}

int _tmain(int argc, _TCHAR* argv[])
{
	int intArray[10] = {2, 4, 6, 3, 9, 1, 7, 8, 0, 5};
	int k;
	cin >> k;
	if (k > 10)
		cout << "应输入比数组小的数";
	cout << FindTheKBiggest(intArray, 10,k) << endl;
}

