#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4,5};
    int *p = a;

    for(int i=0;i<5;i++){
        printf("%d", a[i]);      // array notation with a
    }
    for(int i=0;i<5;i++){
        printf("%d", p[i]);      // array notation with p
    }

    for(int i=0;i<5;i++)
        printf("%d", *(p+i));    // pointer notation with p
    for(int i=0;i<5;i++)
        printf("%d", *(a+i));    // pointer notation with p
    for(int i=0;i<5;i++)
        printf("%d", *(p++));

    return 0;
}
