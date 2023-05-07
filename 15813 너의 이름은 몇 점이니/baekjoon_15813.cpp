#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	char ch;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> ch;
		sum += ch - 64;
	}
	cout << sum;

}