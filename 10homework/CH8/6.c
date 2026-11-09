#include <stdio.h>

int main() {
    int arr[100];
    int count = 0;
    int i, val;
    
    while (1) {
        scanf("%d", &val);
        if (val == 0) {
            break;
        }
        arr[count] = val;
        count++;
    }
    
    for (i = count - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}