/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>

int main() {
    /*edit*/
    /* Write your code here */

    int height = 0;
    printf("Enter the height:\n");
    scanf("%d", &height);
    printf("Pattern:\n");
    int temp = 1;
    for (int i = 0; i < height; i++) {


        for (int j = 0; j < i + 1; j++) {
            printf("%d", temp);
        }
        temp++;
        printf("\n");
        if (temp == 4) {
            temp = 1;
        }


    }



    /*end_edit*/

    return 0;
}