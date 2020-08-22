#include<stdio.h>

int fac(int);
int loopN2(int, int);

int main()
{
    int N, k[8];
    int *n = k;
    int all;
    printf("INPUT N: ");
    if (scanf_s("%d", &N) != 1) {
        printf("ERROR\n");
        return 1;
    }
    else if (N < 2 || N > 8) {
        printf("ERROR \n2 <= N <= 8\n");
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
    for (int f = 0; f < N; f++)
    {
        if (N >= 2)
        {
            loopN2(f, N);
        }
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

int loopN2(int re, int rN)
{
    int tu = 0;
    if (rN >= 3)
    {
       // loopN3(re, rN);
    }
    else
    {
        for (int i = 0; i < fac(rN); i++)
        {
            printf("%d ", re);
        }
    }
    return 0;
}