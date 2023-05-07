#include <iostream>
#include <vector>//¤Ð
using namespace std;

	int num[26];
int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	char name;
	string arr;
	int max = 0;
	int maxcount = 0;
	cin >> arr;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] >= 'A' && arr[i] <= 'Z')
			num[arr[i] - 'A']++;
		else if (arr[i] >= 'a' && arr[i] <= 'z')
			num[arr[i] - 'a']++;
	}
	int maxIndex = 0;
	for (int i = 0; i < 26; i++) {
		if (num[i] > max)
		{
			max = num[i];
			maxIndex = i;
		}
	}

	for (int J = 0; J < 26; J++) {
		if (num[J] == max)
		{
			maxcount++;
		}
	}
	if (maxcount == 1)
		cout << (char)(maxIndex + 'A');
	else if(maxcount>1)
		cout << "?";
	return 0;
}