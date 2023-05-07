#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	long long int num = 0;
	long long int num_check = 0;
	int plus = 1;
	int count = 0;
	cin >> num;
	while (num_check <= num){
		num_check += plus;
		plus++;
		count++;
	}
	cout << count-1;
	
	
	
	return 0;
}