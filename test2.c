/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
#include <string.h>

int main(){



    char a[100];
    int b;
    char *c=a;
    int *d=&b;

    scanf("%s %d", a, &b);

    printf("%s %d\n", a, b);
    printf("%s\n", c);
    printf("%d\n", *d);



}