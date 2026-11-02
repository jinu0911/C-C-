#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int cnt = 0;
    
    while (1) {
        scanf("%d", &n);
        if (n < 0 || n > 100) {
            break;
        }
        sum += n;
        cnt++;
    }
    
    double avg = (cnt > 0) ? (double)sum / cnt : 0.0;
    
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);
    
    return 0;
}