#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int up = 0;
    int down = 0;
    int day = 0;
    int high = 0;
    int n_high = 0;
    scanf("%d" "%d" "%d", &up, &down, &high);
    while (n_high <= high) {
        day++;
        n_high += up;
        if (n_high >= high)break;
        n_high -= down;
        
        
        
    }

    
    printf("%d", day);
    return 0;
}