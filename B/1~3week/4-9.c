#include <stdio.h>

int main()
{
    int maxV, minV;
    int a=900, b=800;

    maxV = (a>b)?a:b;
    minV = (a<b)?a:b;

    printf("900과 800중에 더 큰 수 : %d\n", maxV);
    printf("900과 800중에 더 작은 수 : %d\n", minV);

    return 0;
}