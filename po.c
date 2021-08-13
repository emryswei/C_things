#include <stdio.h>


int main()
{

    int a[] = {1,2,3};
    
    int *p1, *p2;
    p1 = a;
    p2 = p1 + 2;

    printf("%d,%d\n", *p1,*p2);

    printf("%p\n", p1);
    printf("%p\n", p2);
    p1++;
    p2--;
    
    printf("%p\n", p1);
    printf("%p\n", p2);
    return 0;
}
