#include <iostream>

using namespace std;

int main() {

	int n, a[40];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// a[0] a[1] a[2] a[3] a[4]

	// 1-yi variant
	/*	
	for (int i = 0; i < n - i - 1; i++) {
		// 0 - n-1
		// 1 - n-2
		// 2 - n-3
		// i - n-i-1
		int j = n - i - 1;
		// a[i] a[j]
		int z = a[i];
		a[i] = a[j];
		a[j] = z;
	}
	*/

	// 2-oi variant
	for (int i = 0, j = n - 1; i < j; i++, j--) {
		int z = a[i];
		a[i] = a[j];
		a[j] = z;
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
