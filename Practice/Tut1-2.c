/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>

int main() {
    /*edit*/
    /* Write your code here */


    int line;
    printf("Enter number of lines:\n");
    scanf("%d", &line);


    for (int i = 0; i < line; i++) {

        double avg = 0;
        double total = 0;
        int usr_in;
        printf("Enter line %d (end with -1):\n", i + 1);
        int count = 0;
        while (1) {

            scanf("%d", &usr_in);

            if (usr_in == -1) {
                avg = total / count;

                printf("Average = %.2f\n", avg);
                break;
            }
            total = total + usr_in;
            count++;
        }


    }

    /*end_edit*/

    return 0;
}