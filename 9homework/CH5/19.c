#include <stdio.h>

int main() {
    double base, height;
    char ch;
    
    do {
        printf("Base = ");
        scanf("%lf", &base);
        printf("Height = ");
        scanf("%lf", &height);
        
        double area = (base * height) / 2.0;
        printf("Triangle area = %.1f\n", area);
        
        printf("Continue? ");
        scanf(" %c", &ch);
    } while (ch == 'Y' || ch == 'y');
    
    return 0;
}