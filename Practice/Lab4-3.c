/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
#include <string.h>

#define INIT_VALUE -1000

int palindrome(char *str);

int main() {
    char str[80], *p;
    int result = INIT_VALUE;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n')) *p = '\0';
    result = palindrome(str);
    if (result == 1)
        printf("palindrome(): A palindrome\n");
    else if (result == 0)
        printf("palindrome(): Not a palindrome\n");
    else
        printf("An error\n");
    return 0;
}

int palindrome(char *str) {
    /*edit*/
    /* Write your code here */
    int le = 0;
    while (1) {

        if (str[le] == '\0') {
            break;
        }
        le++;

    }
    int j = 0;
    int pa = 1;
    for (int i = le - 1; i >= 0; i--) {
        if (str[i] != str[j])
            pa = 0;
        j++;
    }

    return pa;







    /*end_edit*/
}