/*edit*/

/*custom header*/

/*end_edit*/
#include <stdio.h>
#include <math.h>

void inputXY(double *x1, double *y1, double *x2, double *y2);

void outputResult(double dist);

double calDistance1(double x1, double y1, double x2, double y2);

void calDistance2(double x1, double y1, double x2, double y2, double *dist);

int main() {
    double x1, y1, x2, y2, distance = -1;

    inputXY(&x1, &y1, &x2, &y2);                    // call by reference
    distance = calDistance1(x1, y1, x2, y2);        // call by value
    printf("calDistance1(): ");
    outputResult(distance);
    calDistance2(x1, y1, x2, y2, &distance);        // call by reference
    printf("calDistance2(): ");
    outputResult(distance);                  // call by value
    return 0;
}

void inputXY(double *x1, double *y1, double *x2, double *y2) {
    /*edit*/
    /* Write your code here */
    printf("Input x1 y1 x2 y2:\n");

    scanf("%lf", x1);
    scanf("%lf", y1);
    scanf("%lf", x2);
    scanf("%lf", y2);



    /*end_edit*/
}

void outputResult(double dist) {
    /*edit*/
    /* Write your code here */
    printf("%.2f\n", dist);


    /*end_edit*/
}

double calDistance1(double x1, double y1, double x2, double y2) {
    /*edit*/
    /* Write your code here */
    double a = pow((x2 - x1), 2);

    double b = pow((y2 - y1), 2);
//   printf("%f",x2);
    return sqrt(a + b);


    /*end_edit*/
}

void calDistance2(double x1, double y1, double x2, double y2, double *dist) {
    /*edit*/
    /* Write your code here */
    /* Write your code here */
    double a = pow((x2 - x1), 2);

    double b = pow((y2 - y1), 2);
//   printf("%f",x2);
    *dist = sqrt(a + b);


    /*end_edit*/
}