/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
#include <string.h>

#define INIT_VALUE 999

int stringcmp(char *s1, char *s2);

int main() {
    char source[80], target[80], *p;
    int result = INIT_VALUE;

    printf("Enter a source string: \n");
    fgets(source, 80, stdin);
    if (p = strchr(source, '\n')) *p = '\0';
    printf("Enter a target string: \n");
    fgets(target, 80, stdin);
    if (p = strchr(target, '\n')) *p = '\0';
    result = stringcmp(source, target);
    if (result == 1)
        printf("stringcmp(): greater than");
    else if (result == 0)
        printf("stringcmp(): equal");
    else if (result == -1)
        printf("stringcmp(): less than");
    else
        printf("stringcmp(): error");
    return 0;
}

int stringcmp(char *s1, char *s2) {
    /*edit*/
/* Write your code here */
    int c1 = 0;
    while (1) {

        if (s1[c1] == '\0')
            break;
        c1++;
    }

    int c2 = 0;
    while (1) {

        if (s2[c2] == '\0')
            break;
        c2++;
    }

    int max = c1;
    if (max < c2) {
        max = c2;
    }
    for (int i = 0; i < max; i++) {

        if (s1[i] > s2[i]) {
            return 1;
        } else if (s1[i] < s2[i]) {
            return -1;

        }


    }
    return 0;


    /*end_edit*/
}