#include <stdio.h>
#include <stdlib.h>


int main() {

    int n;

    int histogram[10];


    printf("Enter N integer:\n");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        int random = rand() % 100;
//        printf("%d\n",rand()%100);

        if (random > 0 && random <= 9) {
            histogram[0] = histogram[0] + 1;
        } else if (random > 10 && random <= 19) {
            histogram[1] = histogram[1] + 1;
        } else if (random > 20 && random <= 29) {
            histogram[2] = histogram[2] + 1;
        } else if (random > 30 && random <= 39) {
            histogram[3] = histogram[3] + 1;
        } else if (random > 40 && random <= 49) {
            histogram[4] = histogram[4] + 1;
        } else if (random > 50 && random <= 59) {
            histogram[5] = histogram[5] + 1;
        } else if (random > 60 && random <= 69) {
            histogram[6] = histogram[6] + 1;
        } else if (random > 70 && random <= 79) {
            histogram[7] = histogram[7] + 1;
        } else if (random > 80 && random <= 89) {
            histogram[8] = histogram[8] + 1;
        } else if (random > 90 && random <= 99) {
            histogram[9] = histogram[9] + 1;
        }

    }

    for (int i = 0; i < 10; ++i) {
        printf("%d - %d\t|",i,i+9);
        for (int j = 0; j < histogram[i];++j) {
            printf("*");
        }
        printf("\n");
    }


}
