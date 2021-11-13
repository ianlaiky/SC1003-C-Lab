/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
int numDigits1(int num);
void numDigits2(int num, int *result);
int main()
{
    int number, result=0;

    printf("Enter the number: \n");
    scanf("%d", &number);
    printf("numDigits1(): %d\n", numDigits1(number));
    numDigits2(number, &result);
    printf("numDigits2(): %d\n", result);
    return 0;
}
int numDigits1(int num)
{
    /*edit*/
    /* Write your code here */

    int temp = num;
    int count=1;
    while(1){
        temp = temp/10;

        if(temp==0){
            break;
        }
        count++;
    }


    return count;

    /*end_edit*/
}
void numDigits2(int num, int *result)
{
    /*edit*/
    /* Write your code here */


    int temp = num;
    int count=1;
    while(1){
        temp = temp/10;

        if(temp==0){
            break;
        }
        count++;
    }

    *result=count;


    /*end_edit*/
}