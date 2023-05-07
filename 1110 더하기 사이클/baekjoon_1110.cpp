#include <iostream>
#include <vector>//¤Ğ
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int num1 = 0;
	int num2=0;
	int count = 0;
	cin >> num1;
	num2 = num1;
	while (1) {
		
		num2 = (num2 % 10) * 10 + ((num2 / 10 + num2 % 10) % 10);
		count++;
	
		
		if (num1 == num2) break;
	}
	cout << count;
	return 0;
}