#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n==1) {
        printf("1. ADD \n2. EXIT\n3. DEL\nYou selected ADD.");
    }
    else if(n==2) {
        printf("1. ADD \n2. EXIT\n3. DEL\nYou selected EDIT.");
    }
    else if(n==3) {
        printf("1. ADD \n2. EXIT\n3. DEL\nYou selected DEL.");
    }
    else {
        printf("1. ADD \n2. EXIT\n3. DEL\nNope.");
    }
    return 0;
}