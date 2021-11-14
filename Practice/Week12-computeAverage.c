/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
#include <string.h>

struct student {
    char name[20]; /* student name */
    double testScore; /* test score */
    double examScore; /* exam score */
    double total;  /* total = (testScore+examScore)/2 */
};

double average();

int main() {
    printf("average(): %.2f\n", average());
    return 0;
}

double average() {
    /*edit*/
    /* Write your program code here */

    /*edit*/
    /* Write your program code here */

    struct student s[50];

    int i = 0;
    char *p;


    while (1) {


        printf("Enter student name:\n");
        fgets(s[i].name, 80, stdin);

        if (p = strchr(s[i].name, '\n')) *p = '\0';
        if (strcmp(s[i].name, "END") == 0) {
            break;
        }

        printf("Enter test score:\n");
        scanf("%lf", &s[i].testScore);
        printf("Enter exam score:\n");
        scanf("%lf", &s[i].examScore);
        s[i].total = (s[i].testScore + s[i].examScore) / 2.0;


        printf("Student %s total = %.2f\n", s[i].name, s[i].total);

        scanf("\n");


        i++;
    }

    double ad = 0;
    for (int x = 0; x < i; x++) {
        ad = s[x].total + ad;

    }
    if (i == 0)
        return 0.00;
    return ad / i;

    /*end_edit*/
}