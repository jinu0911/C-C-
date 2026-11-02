#include <stdio.h>

int main() {
    int choice;
    
    while (1) {
        printf("1. Input\n");
        printf("2. Output\n");
        printf("3. Delete\n");
        printf("4. Finish\n");
        printf("Enter number: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("You selected Input.\n");
        } else if (choice == 2) {
            printf("You selected Output.\n");
        } else if (choice == 3) {
            printf("You selected Delete.\n");
        } else if (choice == 4) {
            printf("You selected Finish.\n");
            break;
        } else {
            printf("Wrong input.\n");
        }
    }
    
    return 0;
}