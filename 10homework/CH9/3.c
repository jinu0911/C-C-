#include <stdio.h>

int main() {
    int count[10] = {0};
    int val;
    
    while (1) {
        scanf("%d", &val);
        if (val == 0) {
            break;
        }
        count[val % 10]++;
    }
    
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("%d : %d\n", i, count[i]);
        }
    }
    
    return 0;
}