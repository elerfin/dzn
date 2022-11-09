#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    int arr[8];
    srand(time(NULL));
    int f;
    for (f = 0; f < 8; f++) {
        arr[f] = rand()% 1000 + 10;
        printf("%d ", arr[f]);
    }
    printf("\n");
    for (f= 0; f <8; f++) {
        arr[f] = arr[f] / 2;
        printf("%d ", arr[f]);
    }
}