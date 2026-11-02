#include <stdio.h>

int main() {
    int x = 50;
    scanf("%d", &x);
    
    if (x >= 80) {
        x += 10;
    } else {
        x -= 5;
    }
    x--;
    
    int A = 75;
    int B = 70;
    int C = 69;
    
    printf("%d %d %d\n", A, B, C);
    return 0;
}