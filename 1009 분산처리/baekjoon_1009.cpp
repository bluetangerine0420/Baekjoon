#include<iostream>
using namespace std;
int main() {
    int test = 0;
    cin >> test;
    for (int i = 0; i < test; i++) {
        int num1 = 0;
        int num2 = 0;
        long long sum = 1;
        cin >> num1 >> num2;

        for (int j = 0; j < num2; j++){
            sum *= num1;
            if (sum % 10 == 0)
                sum = 10;
            else sum %= 10;
        }
        
        cout<< sum << '\n';
    }
    return 0;
}