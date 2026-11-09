#include <stdio.h>

int main() {
    int arr[100];
    int count = 0;
    int val;
    
    while (1) {
        scanf("%d", &val);
        if (val == 0) {
            break;
        }
        arr[count] = val;
        count++;
    }
    
    printf("%d\n", count);
    
    for (int i = 0; i < count; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i] * 2);
        } else {
            printf("%d ", arr[i] / 2);
        }
    }
    printf("\n");
    
    return 0;
}