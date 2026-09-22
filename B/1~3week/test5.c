#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    switch (n)
    {
    case 2:
        print("28");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30");
        break;
    default:
        printf("31");
    }
}