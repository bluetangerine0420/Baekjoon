#include <iostream>
#include <vector>
using namespace std;
int field[100][100];
int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int count = 0;
	
	int num = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int x = 0;
		int y = 0;
		cin >> x;
		cin >> y;
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				field[j + x][k + y] = 1;
			}
		}
	}
	for (int j = 0; j < 100; j++) {
		for (int k = 0; k < 100; k++) {
			if (field[j][k] == 1)
				count++;
		}
	}
	cout << count;
	return 0;
}