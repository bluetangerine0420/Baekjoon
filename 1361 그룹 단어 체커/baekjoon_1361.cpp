#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string arr;
	int ok = 0;
	int test = 0;
	cin >> test;
	ok = test;
	for (int i = 0; i < test; i++) 
	{
		int check[26] = { 0 };
		for (int i = 0; i < 26; i++)check[i] = 0;
		cin >> arr;
		for (int j = 0; j < arr.size(); j++) 
		{
			if (check[arr[j] - 'a']==1 )
			{
				ok--;
				break;
			}
			if (arr[j] != arr[j + 1])
			{
				check[arr[j] - 'a'] = 1;
			}
		}
	}
	cout << ok;
	return 0;
}
//int check[26]