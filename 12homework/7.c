#include <stdio.h>

struct Student {
    char name[21];
    int score;
};

int main() {
    struct Student students[5];
    int max_idx = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s %d", students[i].name, &students[i].score);
    }

    for (int i = 1; i < 5; i++) {
        if (students[i].score > students[max_idx].score) {
            max_idx = i;
        }
    }

    printf("%s %d\n", students[max_idx].name, students[max_idx].score);

    return 0;
}