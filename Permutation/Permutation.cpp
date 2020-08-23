#include<stdio.h>
#include <stdlib.h> 
#include <time.h> 

#define MAX 50000

int fac(int);
int random_num(int, int);
char int_to_char(int);

int main()
{
    int N, k[8];
    char be, af[MAX], ready[MAX];
    int *n = k;
    int all, r_num;
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
    for (int f = 0; f < all; f++)
    {
        srand(time(0));
        for (int op = 0; op < N; op++)
        {
            r_num = random_num(0, N - 1);
            be = int_to_char(k[r_num]);
            af[op] += be;
        }
        printf("\n%c\n", af[f]);
        f = all - 1;
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

int random_num(int lower, int upper)
{
    int num = (rand() % (upper - lower + 1)) + lower;
    return num;
}

char int_to_char(int in)
{
    char ch;
    switch (in)
    {
    case 0: ch = '0'; break;
    case 1: ch = '1'; break;
    case 2: ch = '2'; break;
    case 3: ch = '3'; break;
    case 4: ch = '4'; break;
    case 5: ch = '5'; break;
    case 6: ch = '6'; break;
    case 7: ch = '7'; break;
    case 8: ch = '8'; break;
    case 9: ch = '9'; break;
    default: break;
    }
    return ch;
}