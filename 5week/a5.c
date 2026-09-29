#include<stdio.h>

int main()
{
    int a[5] = {10, 20,30,40,50};
    int *p = a;

    printf("%d", sizeof(a));
    printf("%d", sizeof(a[0]));
    printf("%d", sizeof(p));
    printf("%d", sizeof(*p));
}