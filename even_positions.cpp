#include <iostream>

using namespace std;

int main() {

	int n;

	cin >> n;

	int a[n];
	// 0 , 1 , ... , n-1

	for (int i = 0; i < n; i++) {
	 	cin >> a[i];
	}
	// a[1] a[2] ... a[n]
	// a[n] a[n-1] ... a[1]

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			cout << a[i] << " ";
		}
	}
	cout << endl;
	
	return 0;
}
