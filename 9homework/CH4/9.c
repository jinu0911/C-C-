#include <stdio.h>

int main() {
    int dice1, dice2;
    
    scanf("%d %d", &dice1, &dice2);
    if (dice1 >= 4 && dice2 >= 4) {
        printf("WIN.\n");
    } else if (dice1 >= 4 || dice2 >= 4) {
        printf("DRAW.\n");
    } else {
        printf("LOSE.\n");
    }
    
    return 0;
}