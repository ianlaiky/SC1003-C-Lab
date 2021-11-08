#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *sweepSpace1(char *str);
char *sweepSpace2(char *str);

int main()
{
    char str[80],str2[80], *p;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str,'\n')) *p = '\0';

    strcpy(str2,str);
    char *temp = sweepSpace1(str);
    printf("sweepSpace1(): %s\n", temp);
    printf("sweepSpace2(): %s\n", sweepSpace2(str2));
    return 0;
}

char *sweepSpace1(char *str)
{

    char *return_str = malloc( sizeof(char) * (80+1) );
//    char return_str[80];
    int i = 0, count = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ' '){i++;
        }
        return_str[count] = str[i];
        i++;
        count++;
    }
    return_str[count]= '\0';
    printf("return string = %s\n", return_str);
    return return_str;
}

char* sweepSpace2(char *str)
{
    char *return_str = malloc( sizeof(char) * (80+1) );
//    char return_str[80];
    int i = 0, count = 0;

    while (*(str+i) != '\0')
    {
        if (*(str+i) == ' '){i++;
        }
        return_str[count] = *(str+i);
        i++;
        count++;
    }
    return_str[count]= '\0';
    printf("return string 2 = %s\n", return_str);
    return return_str;
}