//Source.cpp
#include <iostream>
#include "Fraction.h"
#include "LongLong.h"

using namespace std;
int main()
{
	LongLong k, k1;
	Fraction l, l1;
	cin >> k;
	cin >> k1;
	cout << "great than:  " << (k > k1) << endl;
	cout << "great than or equal:  " << (k >= k1) << endl;
	cout << "less than: " << (k < k1) << endl;
	cout << "less than or equal: " << (k <= k1) << endl;
	cout << "equal: " << (k == k1) << endl;
	cout << "not equal: " << (k != k1) << endl;

	cin >> l;
	cin >> l1;
	cout << "great than:  " << (l > l1) << endl;
	cout << "great than or equal:  " << (l >= l1) << endl;
	cout << "less than: " << (l > l1) << endl;
	cout << "less than or equal: " << (l <= l1) << endl;
	cout << "equal: " << (l == l1) << endl;
	cout << "not equal: " << (l != l1) << endl;

	cout << '\n';
	cout << '\n';

	cout << "++k1: " << ++k1 << endl;
	cout << "--k1: " << --k1 << endl;
	cout << "k1++: " << k1++ << endl;
	cout << "k1--: " << k1-- << endl << endl;

	cout << "++l1: " << ++l1 << endl;
	cout << "--l1: " << --l1 << endl;
	cout << "l1++: " << l1++ << endl;
	cout << "l1--: " << l1-- << endl << endl;

}