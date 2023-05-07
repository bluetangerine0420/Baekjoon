#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int rest_day = 0;
	int camping_day = 0;
	int all_camping_day = 0;
	int count = 1;
	int check = 0;
	while (1) {
		cin >> camping_day >> all_camping_day >> rest_day;
		if (camping_day == 0)return 0;
		check = rest_day / all_camping_day * camping_day;
		rest_day -= rest_day / all_camping_day * all_camping_day;
		if (rest_day / camping_day != 0) {
			check += camping_day;
		}
		else if (rest_day / camping_day == 0) {
			check += rest_day;
		}
		cout << "Case" << ' ' << count << ": " << check << '\n';
		
		count++;
	}
	return 0;
}