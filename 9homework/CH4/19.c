#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int diff = (a > b) ? (a - b) : (b - a);
    printf("%d\n", diff);
    
    return 0;
}