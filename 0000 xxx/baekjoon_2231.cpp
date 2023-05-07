#include<iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp= i;
		int sum = temp;
		
		while (temp > 0) {
			sum = +temp % 10;
			temp /= 10;
		}
		if (sum == 0) 
		{
			cout << i;
			return 0;
		}

	}
	cout << "0";
}