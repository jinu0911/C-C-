#include <stdio.h>

int main() {
    int n, i;
    int c3 = 0, c5 = 0;
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n % 3 == 0) {
            c3++;
        }
        if (n % 5 == 0) {
            c5++;
        }
    }
    
    printf("Multiples of 3 : %d\n", c3);
    printf("Multiples of 5 : %d\n", c5);
    
    return 0;
}