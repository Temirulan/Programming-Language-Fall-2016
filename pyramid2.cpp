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
// *****
//  ***
//   *

	for (int i = 1; i <= n; i++) {
		int space = n - i;
		int j = 2 * i - 1;
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
