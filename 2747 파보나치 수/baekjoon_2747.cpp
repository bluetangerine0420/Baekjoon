#include <iostream>
#include <vector>
using namespace std;

int main(){

ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0); 

int sum = 1;
int num1 = 0;
int num2 = 1;
int test = 0;

cin >> test;

for (int i = 1; i < test; i++) {
	sum = num1 + num2;
	if (i % 2 == 1) {
		num1 = sum;
	}
	if (i % 2 == 0) {
		num2 = sum;
	}
}
cout << sum;
return 0;
}