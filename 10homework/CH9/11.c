#include <stdio.h>

int main() {
    int scores[3][3];
    int student_sum[3] = {0};
    int subject_sum[3] = {0};
    int total_sum = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &scores[i][j]);
            student_sum[i] += scores[i][j];
            subject_sum[j] += scores[i][j];
            total_sum += scores[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("%d\n", student_sum[i]);
    }
    
    for (int j = 0; j < 3; j++) {
        printf("%d ", subject_sum[j]);
    }
    printf("%d\n", total_sum);
    
    return 0;
}