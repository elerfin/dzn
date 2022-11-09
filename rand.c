#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int x;
    srand(time(NULL));
    for(x = 0; x < 11; x++) {
        printf("%d ", rand()% 1000 +100);
    }
    
}