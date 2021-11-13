/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
#define SIZE 5
void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max);
int main()
{
    int A[5][5];
    int i,j,min,max;

    printf("Enter the matrix data (%dx%d): \n", SIZE, SIZE);
    for (i=0; i<5; i++)
        for (j=0; j<5; j++)
            scanf("%d", &A[i][j]);
    findMinMax2D(A, &min, &max);
    printf("min = %d\nmax = %d", min, max);
    return 0;
}
void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max)
{
    /*edit*/
    /* Write your code here */

    int minn=ar[0][0];
    int maxn=ar[0][0];
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(minn>ar[i][j]){
                minn=ar[i][j];
            }
            if(maxn<ar[i][j]){
                maxn=ar[i][j];
            }
        }
    }
    *min=minn;
    *max=maxn;


    /*end_edit*/
}