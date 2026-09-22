#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    int x = m/100;
    int y = (m/10)%10;
    int z = m%10;

    printf("%d\n", n*z);
    printf("%d\n", n*y);
    printf("%d\n", n*x);
    printf("%d\n", n*m);
}