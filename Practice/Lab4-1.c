/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
#include <string.h>

char *sweepSpace(char *str);

int main() {
    char str[80], *p;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n')) *p = '\0';
    printf("sweepSpace(): %s\n", sweepSpace(str));
    return 0;
}

char *sweepSpace(char *str) {
    /*edit*/
    /* Write your code here */

    char *tmp = str;

    char t[80];

    int c = 0;
    while (*str != '\0') {
        if (*str != ' ') {
            t[c] = *str;
            c++;
        }

        *str++;
    }

    str[c] = '\0';
    str = t;
    return str;









    /*end_edit*/
}