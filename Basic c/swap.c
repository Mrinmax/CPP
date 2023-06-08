#include<stdio.h>

int main() {
    int x = 5, y = 10, temp;
    printf("\nBefore swapping : x = %d, y = %d", x,y);

    temp = x;
    x = y;
    y =temp;

    printf("\nAfter swapping : x = %d, y = %d", x,y);
    return 0;
}