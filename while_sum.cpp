#include <iostream>

using namespace std;

int main () {
	
	int n;

	cin >> n;

	int res = 0;

	int i = 1;

	while (i <= n) {
		res += i;
		i++;
	}

	cout << res << endl;

	return 0;
}