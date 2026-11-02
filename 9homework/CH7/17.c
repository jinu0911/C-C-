#include <stdio.h>

int main() {
    int n, i, j;
    char ch = 'A';
    int num = 0;
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n + 1 - i; j++) {
            printf("%c ", ch++);
        }
        for (j = 1; j < i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    
    return 0;
}