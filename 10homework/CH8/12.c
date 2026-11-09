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
    
    int max = arr[0];
    int min = arr[0];
    
    for (int i = 1; i < count; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("%d\n", max - min);
    
    return 0;
}