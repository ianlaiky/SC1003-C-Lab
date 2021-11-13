/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>

int digitPos1(int num, int digit);

void digitPos2(int num, int digit, int *result);

int main() {
    int number, digit, result = 0;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("Enter the digit: \n");
    scanf("%d", &digit);
    printf("digitPos1(): %d\n", digitPos1(number, digit));
    digitPos2(number, digit, &result);
    printf("digitPos2(): %d\n", result);
    return 0;
}

int digitPos1(int num, int digit) {
    /*edit*/
    /* Write your code here */

    int temp = num;
    int count = 0;
    while (1) {
        count++;
        int dig = temp % 10;
        if (dig == digit) {
            return count;
        }
        temp = temp / 10;
        if (temp == 0) {
            break;
        }


    }

    return 0;

    /*end_edit*/
}

void digitPos2(int num, int digit, int *result) {
    /*edit*/
    /* Write your code here */

    int temp = num;
    int found = 0;
    int count = 0;
    while (1) {
        count++;
        int dig = temp % 10;
        if (dig == digit) {
            *result = count;
            found = 1;
            break;
        }
        temp = temp / 10;
        if (temp == 0) {
            break;
        }


    }
    if (!found)
        *result = 0;


    /*end_edit*/
}