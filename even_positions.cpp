#include <iostream>

using namespace std;

int main () {

	int n, a[101];

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			cout << a[i] << " ";
		}
	}
	cout << endl;

	return 0;
}