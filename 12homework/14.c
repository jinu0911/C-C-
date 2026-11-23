#include <stdio.h>
#include <string.h>

struct Contact {
    char name[101];
    char tel[101];
    char addr[101];
};

int main() {
    struct Contact c[3];
    int min_idx = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%s %s %s", c[i].name, c[i].tel, c[i].addr);
    }

    for (int i = 1; i < 3; i++) {
        if (strcmp(c[i].name, c[min_idx].name) < 0) {
            min_idx = i;
        }
    }

    printf("name : %s\n", c[min_idx].name);
    printf("tel : %s\n", c[min_idx].tel);
    printf("addr : %s\n", c[min_idx].addr);

    return 0;
}