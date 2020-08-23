#include<stdio.h>

int fac(int);

int main()
{
    int N, k[8];
    int *n = k;
    int all, y = 0, g = 0;
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
    while (g < all)
    {
        for (int ui = 0; ui < N; ui++)
        {
            printf("%d ", *n);
            n++;
        }
        printf("\n");
        for (int uj = 0; uj < N; uj++)
        {
            n--;
        }
        //////เลือกว่าทำทั้งหมด หรือลูป โดยสลับลำดับกัน
        y++;
        g++;
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

