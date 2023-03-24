#include<stdio.h>
#include <stdlib.h>
int main()
{
    char asdf[1000001];
    int j = 0;
    scanf("%s", asdf);
    for (int k = 0; k < 50; k++)
    {
        if (asdf[k] == 32) {
            j++;
        }

    }
    printf("%d", j);

    return 0;
}