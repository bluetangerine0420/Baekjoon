#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> arr;
int search(int key) 
{
	int lo = -1;
	int hi = arr.size();
	while (lo + 1 < hi) 
	{
		int mid = (lo + hi) / 2;
		if (arr[mid] < key)
			lo = mid;
		else if (arr[mid] > key)
			hi = mid;
		else  if (arr[mid] == key)
			return 1;
	}
	return 0;
}

int main() 
{	ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
	int n = 0;
	int d = 0;
	int k = 0;
	cin >> n;

	for (int i = 0; i < n; i++) 
	{
		int a;
		cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());
	
	cin >> d;
	for (int i = 0; i < d; i++) {
		cin >> k;
		cout << search(k)<<"\n";

		
	}
	return 0;


}




