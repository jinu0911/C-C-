#include <stdio.h>

int main() {
    int n;
    int cnt = 0;
    int sum = 0;
    
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        sum += n;
        cnt++;
    }
    
    double avg = (cnt > 0) ? (double)sum / cnt : 0.0;
    
    printf("cnt = %d\n", cnt);
    printf("sum = %d\n", sum);
    printf("avg = %.2f\n", avg);
    
    return 0;
}