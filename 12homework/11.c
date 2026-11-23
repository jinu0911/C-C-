#include <stdio.h>

struct Point {
    double x;
    double y;
};

int main() {
    struct Point p1, p2;

    scanf("%lf %lf", &p1.x, &p1.y);
    scanf("%lf %lf", &p2.x, &p2.y);

    double cx = (p1.x + p2.x) / 2.0;
    double cy = (p1.y + p2.y) / 2.0;

    printf("Center point = (%.1lf, %.1lf)\n", cx, cy);

    return 0;
}