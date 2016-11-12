#include <iostream>

using namespace std;

int Pow(int x, int n);

int main()
{
	int x, n;
	cin >> x;
	cin >> n;

	cout << Pow(x, n) << endl;
	return 0;
}

int Pow(int x, int n)
{
	if (n <= 0)
		return 1;
	else if (n % 2 == 0)
	{
		return Pow(x * x, n / 2);
	}
	else
	{
		return Pow(x, n - 1) * x;
	}
}