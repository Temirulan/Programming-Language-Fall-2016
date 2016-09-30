#include <iostream>

using namespace std;

int main () {

	int n, a[30];

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	// a[1] a[2] ... a[n]

	for (int i = n; i >= 1; i--) {
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}