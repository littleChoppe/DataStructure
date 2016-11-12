#include <iostream>
#include <string>
using namespace std;

void PrintDigit(unsigned int n)
{
	cout << n;
}

void PrintOut(unsigned int n)
{
	if (n >= 10)
		PrintOut(n / 10);
	PrintDigit(n % 10);
}

int main()
{
	unsigned int n;
	cin >> n;
	PrintOut(n);
	return 0;
}