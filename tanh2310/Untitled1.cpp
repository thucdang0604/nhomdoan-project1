#include<stdio.h>

int main()
{
    int a, b, c, max;
    printf("\nNhap a: ");
    scanf("%d", &a);
    printf("\nNhap b: ");
    scanf("%d", &b);
    printf("\nNhap c: ");
    scanf("%d", &c);

    max = a;
    if(max < b)
        max = b;
    if(max < c)
        max = c;
    printf("\nSo lon nhat: %d", max);

    return 0;
}
