#include <stdio.h>

int main () {
    int x, y, z=1;
    printf("Enter number");
    scanf("%d", &x);
    for(y=1; y <= x; y++)
        z=z*y;
    printf("%d!=%d", x, z);
}
