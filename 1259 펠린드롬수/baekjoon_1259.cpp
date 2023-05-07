#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	while (1) {
		string arr;
		int count = 0;
		cin >> arr;
		if (arr == "0") break;
		for (int i = 0; i < arr.size(); i++) {
			if (arr[arr.size() - i - 1] == arr[i])
				count++;
		}
		if (count == arr.size())
			cout << "yes\n";
		else if (count != arr.size())
			cout << "no\n";

	}
	return 0;
}
