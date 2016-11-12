#include <iostream>
#include <string>

using namespace std;

int BinarySearch(const int * a, int n, int x)
{
	int NotFound = -1;
	int low = 0, high = n - 1;
	int mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (x > a[mid])
			low = mid + 1;
		else if (x < a[mid])
		{
			high = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return NotFound;
}

int main()
{
	int a[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int x = 7;
	cout << "²éÕÒ7£º" << BinarySearch(a, 8, x) << endl;
	x = 0;
	cout << "²éÕÒ0£º" << BinarySearch(a, 8, x) << endl;

	return 0;
}