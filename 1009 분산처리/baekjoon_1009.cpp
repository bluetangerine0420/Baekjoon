#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int test = 0;
    int a = 0;
    int b = 0;
    int answer = 0;
    scanf("%d", &test);
    for (int i = 0; i < test; i++) {
        a = 0;
        b = 0;
        answer = 0;
        scanf("%d" "%d", &a, &b);
        answer = a;
        for (int j = 0; j < b; j++){
            answer = answer * a;
        printf("%d\n", answer);
    }
        answer = answer % 10;
        printf("%d\n", answer);
    }
    return 0;
}