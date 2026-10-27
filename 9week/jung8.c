#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n>=90) {
        printf("Excellent");
    }
    else if(n>=80) {
        printf("Good");
    }
    else if(n>=70) {
        printf("Pass");
    }
    else {
        printf("Fail");
    }
    return 0;
}