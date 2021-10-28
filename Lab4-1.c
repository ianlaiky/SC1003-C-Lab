#include <stdio.h>
#include <string.h>

char *sweepSpace1(char *str) {


    int j = 0;

    int len = strlen(str);
    for (int k = 0; k < len; ++k) {

        if (str[k] != 32) {
            str[j] = str[k];
            j++;
        }

    }
    str[j] = '\0';

    return str;

}

char *sweepSpace2(char *str) {
    int i = 0;
    int j = 0;
    int len = strlen(str);

    for (int k = 0; k < len; ++k) {
        if (*(str+k) != 32) {
            *(str + i) = *(str + k);
            i++;
        }

    }
    *(str+i)='\0';
    return str;



}

int main() {
    char str[80], str2[80], *p;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n')) *p = '\0';
    strcpy(str2, str);


    printf("sweepSpace1(): %s\n", sweepSpace1(str));
    printf("sweepSpace2(): %s\n", sweepSpace2(str2));
    return 0;
}