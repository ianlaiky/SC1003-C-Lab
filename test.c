#include <stdio.h>

void test(char *str){
    while(*str!='\0'){
        printf("%d\n",*str);
        str++;
    }

}

int main()
{
    char *ptr = "123";
    test(ptr);
    return 0;
}
