#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d",&n, &m);
    printf("%d\n", m+100-n);
    if(m+100-n>0) {
        printf("Obesity\n");
        printf("Need control");
    }
    return 0;
}