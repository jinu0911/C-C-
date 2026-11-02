#include <stdio.h>

int main() {
    int n;
    int max = 0;
    int min = 101;
    
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        if (n >= 1 && n <= 100) {
            if (n > max) {
                max = n;
            }
            if (n < min) {
                min = n;
            }
        }
    }
    
    printf("MAX = %d\n", max);
    printf("MIN = %d\n", min);
    
    return 0;
}