#include <iostream>

using namespace std;

int main () {

	int n;

	cin >> n;


// n=4
//   *
//  ***
// *****
//*******

	for (int i = 1, j = 1, space = n - 1; i <= n; i++, j += 2, space--) {
		// space
		for (int k = 1; k <= space; k++) {
			cout << " ";
		}
		for (int k = 1; k <= j; k++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
