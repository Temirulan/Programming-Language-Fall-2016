#include <iostream>

using namespace std;

int main () {

	int n, a[101];

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++) {
		if (a[i] % 2 == 0) {
			cout << a[i] << " ";
		}
	}
	cout << endl;

	return 0;
}