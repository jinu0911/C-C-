#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n>=80) {
        printf("Passed.");
    }
    else {
        printf("Failed.");
    }
    return 0;
}