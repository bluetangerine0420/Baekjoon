#include<iostream>
using namespace std;
int tree[100000];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int test = 0;
	int most_high = 0;
	int check = 1;


	cin >> test;	
	for (int i = 0; i < test; i++) {
		cin >> tree[i];
	}
	most_high = tree[test-1];
	for (int i = test; i > 1; i--) {
		if (tree[i-2] > most_high) {
			most_high = tree[i-2];
			check++;
		}
	}
	cout << check;
	return 0;
}