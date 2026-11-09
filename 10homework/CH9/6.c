#include <stdio.h>

int main() {
    int arr[100];
    
    scanf("%d", &arr[0]);
    
    arr[1] = 100;
    arr[2] = arr[0];
    
    int i = 2;
    while (1) {
        int next = arr[i - 1] - arr[i];
        arr[i + 1] = next;
        i++;
        if (arr[i] < 0) {
            break;
        }
    }
    
    arr[1] = 100;
    arr[2] = arr[0];
    
    printf("100 %d ", arr[2]);
    
    int idx = 2;
    while (1) {
        int next = arr[idx - 1] - arr[idx];
        printf("%d ", next);
        arr[idx + 1] = next;
        idx++;
        if (next < 0) {
            break;
        }
    }
    printf("\n");
    
    return 0;
}