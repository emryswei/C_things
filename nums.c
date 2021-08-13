#include <stdio.h>


void addone(int a);
int main()
{

    int a = 19;
    printf("%d\n", a);
    addone(a);
    printf("%d\n", a);
    return 0;
}

void addone(int a)
{
    a = a + 1;
    
}
