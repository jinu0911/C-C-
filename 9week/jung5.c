#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n % 2 == 0) {
        printf("Happy.");
    }
    else {
        printf("Lonely.");
    }
    return 0;
}