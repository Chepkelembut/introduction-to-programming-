#include<stdio.h>

int main()
{
    int n = 15;
    while (n>0) {
    printf("%d\t", n);
    n =n-1;
    }
    printf("loop body finished");
    return 0;
}