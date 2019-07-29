#include <stdio.h>

int main()
{
    int base, exponent;
    long long power = 1;
    int i;
    scanf("%d", &base);
    scanf("%d", &exponent);
    for(i=1; i<=exponent; i++)
    {
        power = power * base;
    }
    printf("%lld",power);
    return 0;
}
