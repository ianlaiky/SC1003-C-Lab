/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
#include <math.h>

int main() {
    /*edit*/
    /* Write your code here */
    /*edit*/
    /* Write your code here */


    printf("Enter x:\n");
    double uin;

    scanf("%lf", &uin);
    double total = 0;

    for (int i = 0; i < 11; i++) {
        int fact = 1;
        for (int j = 1; j < i + 1; j++) {
            fact = fact * j;

        }


        double pp = pow(uin, i);

        // printf("%d",total)
        total = total + (pp / fact);
    }


    printf("Result = %.2f", total);

    /*end_edit*/


    /*end_edit*/

    return 0;
}