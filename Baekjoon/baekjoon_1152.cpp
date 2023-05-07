#include <iostream>
#include <vector>
#include <string>

using namespace std;
string arr;
int main(){
	int count = 1;
	getline(cin, arr);
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == ' ')
			count++;
	}
	if (arr[0] == ' ')
		count--;
	if (arr[arr.size()-1] == ' ')
		count--;
	cout << count;
	return 0;
}zz