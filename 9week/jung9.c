#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    if(n>=4 && m>=4) {
        printf("WIN.");
    }
    else if(n>=4 || m>=4) {
        printf("DRAW.");
    }
    else {
        printf("LOSE.");
    }
    return 0;
}