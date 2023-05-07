#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int coin[10];
	int coins = 0;
	int money = 0;
	int need_coins = 0;

	cin >> coins >> money;

	for (int asdf = 0; asdf < coins; asdf++) 
		cin >> coin[asdf];

	int result = 0;
	

	for (int i = coins - 1; i >= 0; i--) {
		if (coin[i] == 0)
			break;
		if (money / coin[i] != 0) {
			need_coins = money / coin[i];
			money -= need_coins * coin[i];
			result += need_coins;
		}
		
	}
	cout << result;
	return 0;
}