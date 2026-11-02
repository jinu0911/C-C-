#include <stdio.h>

int main() {
    double score;
    scanf("%lf", &score);
    
    if (score >= 4.0) {
        printf("scholarship\n");
    } else if (score >= 3.0) {
        printf("next semester\n");
    } else if (score >= 2.0) {
        printf("seasonal semester\n");
    } else {
        printf("retake\n");
    }
    
    return 0;
}