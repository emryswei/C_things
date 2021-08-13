#include <stdio.h>


int my_strlen(char *s);
int main()
{
    printf("length is: %d\n", my_strlen("123456789")); 
    return 0;
}


int my_strlen(char *s){
    
    char *p = s;
    while(*p!='\0'){
        p++;
    }
    return p-s;
}
