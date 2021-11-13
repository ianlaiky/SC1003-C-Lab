/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>

int main() {
    /*edit*/
    /* Write your code here */



    int std_id;
    int mark;

    while (1) {
        printf("Enter Student ID:\n");
        scanf("%d", &std_id);


        if (std_id == -1) {
            break;
        }

        printf("Enter Mark:\n");
        scanf("%d", &mark);

        if (mark <= 100 && mark >= 75) {
            printf("Grade = A\n");
        } else if (mark <= 74 && mark >= 65) {
            printf("Grade = B\n");
        } else if (mark <= 64 && mark >= 55) {
            printf("Grade = C\n");
        } else if (mark <= 54 && mark >= 45) {
            printf("Grade = D\n");
        } else if (mark <= 44 && mark >= 0) {
            printf("Grade = F\n");
        }


    }




    /*end_edit*/

    return 0;
}