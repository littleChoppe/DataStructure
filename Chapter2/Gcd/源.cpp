#include <iostream>
using namespace std;

int Gcd(int m, int n)
{
	int r;
	while (n > 0)
	{
		r = m % n;
		m = n;
		n = r;
	}

	return m;
}

int Gcd2(int m, int n)
{
	if (n <= 0)
		return m;
	else
	{
		return Gcd2(n, m % n);
	}
}

int main()
{
	int m, n;
	cin >> m;
	cin >> n;
	cout << "使用循环方法：" << Gcd(m, n) << endl;
	cout << "使用递归：" << Gcd2(m, n) << endl;
	return 0;
}