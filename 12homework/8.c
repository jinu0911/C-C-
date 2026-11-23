#include <stdio.h>

struct Person {
    char name[21];
    int height;
};

int main() {
    struct Person people[5];
    int min_idx = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s %d", people[i].name, &people[i].height);
    }

    for (int i = 1; i < 5; i++) {
        if (people[i].height < people[min_idx].height) {
            min_idx = i;
        }
    }

    printf("%s %d\n", people[min_idx].name, people[min_idx].height);

    return 0;
}