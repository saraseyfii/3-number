#include<iostream>
using namespace std;

{
	int a, va;
	cin >> a;
	int d1 = a % 10;
	int d2 = ((a / 10) % 10);
	int d3 = ((a / 100));
	va = (d1 * 100) + (d2 * 10) + d3;
	cout << va;
	return 0;
}