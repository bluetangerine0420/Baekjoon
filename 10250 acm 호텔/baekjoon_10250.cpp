#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
    int high = 0;
    int far = 0;
    int visiter = 0;
    int test_case = 0;
    int room_high = 0;
    int room_far = 0;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++) {
        scanf("%d" "%d" "%d", &high, &far, &visiter);
        if (0 != visiter % high)
            room_high = visiter % high;
        else room_high = high;

        if (0 != visiter % high)
            room_far = visiter / high + 1;
        else room_far = visiter / high;

        if (room_far < 10)
            printf("%d""0%d\n", room_high, room_far);
        else printf("%d""%d\n", room_high, room_far);

    }

    return 0;
}