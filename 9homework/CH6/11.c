#include <stdio.h>

int main() {
    int score, i;
    int sum = 0;
    
    for (i = 0; i < 5; i++) {
        scanf("%d", &score);
        sum += score;
    }
    
    double avg = (double)sum / 5.0;
    
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);
    
    return 0;
}