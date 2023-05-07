#include <iostream>
#include <vector>
using namespace std;
string num1;
string num2;
string num3;
string num[10] = {
	"black",
	"brown",
	"red",
	"orange",
	"yellow",
	"green",
	"blue",
	"violet",
	"grey",
	"white"
};
int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long sum = 0;
	int plus[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int mult[10] = { 1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000 };

	cin >> num1;
	cin >> num2;
	cin >> num3;
	for (int i = 0; i < 10; i++) {
		if (num1 == num[i]) {
			sum = i*10;
		}
	}
	for (int i = 0; i < 10; i++) {
		if (num2 == num[i]) {
			sum += plus[i];
		}
	}
	for (int i = 0; i < 10; i++) {
		if (num3 == num[i]) {
			sum *= mult[i];
		}
	}
	cout << sum;
	return 0;
}