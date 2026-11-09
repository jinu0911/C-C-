#include <stdio.h>

int main() {
    int scores[4][3];
    int class_sum[4] = {0};
    int total_sum = 0;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &scores[i][j]);
            class_sum[i] += scores[i][j];
        }
        total_sum += class_sum[i];
    }
    
    for (int i = 0; i < 4; i++) {
        printf("%d\n", class_sum[i]);
    }
    printf("%d\n", total_sum);
    
    return 0;
}