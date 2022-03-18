#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	int x;
	cin >> x;
	while (0 < x) {
		if (0 == x % n) {
			cout << x << " is a multiple of " << n << ".\n";
		}
		else {
			cout << x << " is NOT a multiple of " << n << ".\n";
		}

		cin >> x;
	}

	return 0;
}