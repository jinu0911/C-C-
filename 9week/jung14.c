#include <stdio.h>

int main() {
    char n;
    scanf("%c", &n);
    if(n == 'A') {
        printf("Excellent");
    }
    else if(n == 'B') {
        printf("Good");
    }
    else if(n == 'C') {
        printf("Usually");
    }
    else {
        printf("error");
    }
;    return 0;
}