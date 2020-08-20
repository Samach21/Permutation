#include<stdio.h>
#include <stdlib.h>

#define MAX_VALUE 1000

int fac(int);

int main()
{
    int N, k[MAX_VALUE];
    char be[MAX_VALUE], af[MAX_VALUE]; ///////////////////////////////////////////
    int *n = k;
    int all;
    int Nr;
    printf("INPUT N: ");
    if (scanf_s("%d", &N) != 1) {
        printf("ERROR\n");
        return 1;
    }
    else if (N < 2 || N > 1000) {
        printf("ERROR \n2 <= N <= 1000\n");
        return 1;
    }
    printf("INPUT ALL N: ");
    for (int i = 0; i < N; i++)
    {
        if (scanf_s("%d", &k[i]) != 1) {
            printf("ERROR\n");
            return 1;
        }
        else if (k[i] < 0 || k[i] > 9) {
            printf("ERROR \n0 <= k <= 9\n");
            return 1;
        }
    }
    all = fac(N);
    printf("ALL POSSIBLES: %d Event\n", all);
    for (int f = 0; f < all; f++)
    {
        for (int m = 0; m < N; m++)
        {
            
            *n = rand() % N;
            printf("%d ", *n);
        }
        for (int i = 0; i < N; i++)
        {
            if (scanf_s("%d", &k[i]) != 1) {
                printf("ERROR\n");
                return 1;
            }
            else if (k[i] < 0 || k[i] > 9) {
                printf("ERROR \n0 <= k <= 9\n");
                return 1;
            }
        }
        for (int l = 0; l < all; l++)
        {

        }
        printf("\n");
    }
	return 0;
}

int fac(int a)
{
    int result = 1;
    for (int i = 0; i < a; i++)
    {
        result = result * (a - i);
    }
    return result;
}