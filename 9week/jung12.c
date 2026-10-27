#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n>0) {
        if(n % 2 == 0) {
            printf("Even Number");
        }
        else {
            printf("Odd Number");
        }
    }
    else {
        printf("Non positive");
    }
    return 0;
}