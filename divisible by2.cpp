#include <stdio.h>
#include <math.h>
#define N 100
int ktra(long n)
{
    float a;
    a = sqrt(n);
    int i, dem = 0;
    for (i = 1; i <= a; i++)
    {
        if ((n % i == 0 && i % 2 == 0 && (n / i) % 2 != 0) ||
		 (n % i == 0 && (n / i) == i && i % 2 == 0)
		 || (n % i == 0 && i % 2 != 0 && (n / i) % 2 == 0))
        {
            ++dem;
        }
        else if (n % i == 0 && (n / i) % 2 == 0 && i % 2 == 0)
        {
            dem += 2;
        }
    }
    printf("%d\n", dem);
}
int main()
{
    long a[N];
    int test;
    int i, z;
    scanf("%d", &test);
    for (i = 0; i < test; i++)
    {
        scanf("%ld", &a[i]);
    }
    for (z = 0; z < test; z++)
    {
        if (a[z] % 2 == 1)
        {
            printf("0\n");
        }
        else
        {
            ktra(a[z]);
        }
    }
    return 0;
}	
