#include <stdio.h>

int main() {
    int choice;
    printf("1. ADD\n");
    printf("2. EDIT\n");
    printf("3. DEL\n");
    printf("Select: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("You selected ADD.\n");
            break;
        case 2:
            printf("You selected EDIT.\n");
            break;
        case 3:
            printf("You selected DEL.\n");
            break;
    }
    
    return 0;
}