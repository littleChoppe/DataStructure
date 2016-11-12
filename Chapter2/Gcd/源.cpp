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
	cout << "ʹ��ѭ��������" << Gcd(m, n) << endl;
	cout << "ʹ�õݹ飺" << Gcd2(m, n) << endl;
	return 0;
}