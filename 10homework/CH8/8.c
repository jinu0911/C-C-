#include <stdio.h>

int main() {
    double scores[] = {0, 85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    double sum = scores[a] + scores[b];
    printf("%.1f\n", sum);
    
    return 0;
}