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
    
    int mul_count = 0;
    int sum = 0;
    
    for (int i = 0; i < count; i++) {
        if (arr[i] % 5 == 0) {
            mul_count++;
            sum += arr[i];
        }
    }
    
    double avg = 0.0;
    if (mul_count > 0) {
        avg = (double)sum / mul_count;
    }
    
    printf("Multiples of 5 : %d\n", mul_count);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);
    
    return 0;
}