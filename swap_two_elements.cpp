#include <iostream>

using namespace std;

int main() {

	int x, y;

	cin >> x >> y;

	int z;

	z = x;
	x = y;
	y = z;

	cout << x << " " << y << endl;

	return 0;
}
