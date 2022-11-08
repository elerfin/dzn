#include <stdio.h>

int main () {
    int n;
    int y;
    int f=1;
    printf("Enter number ");
    scanf("%d", &n);
    for(y=1; y <= n; y++)
        f=f*y;
    printf("%d!=%d", n, f);
}
