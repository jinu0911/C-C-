#include <stdio.h>

int main() {
    int count[11] = {0};
    int val;
    
    while (1) {
        scanf("%d", &val);
        if (val < 1 || val > 10) {
            break;
        }
        count[val]++;
    }
    
    for (int i = 1; i <= 10; i++) {
        if (count[i] > 0) {
            printf("%d : %d\n", i, count[i]);
        }
    }
    
    return 0;
}