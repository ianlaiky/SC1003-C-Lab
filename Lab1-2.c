#include <stdio.h>

int main() {
    int times_to_loop;
    int user_in;

    printf("Enter number of lines:");
    scanf("%d", &times_to_loop);

    for (int i = 1; i <= times_to_loop; ++i) {
        printf("%s %d", "Enter line", i);
        scanf("%d", &user_in);

        double sum, count = 0;
        double avg;

        while (user_in != -1) {
            sum = sum + user_in;
            count++;
            scanf("%d", &user_in);
        }


        avg = sum / count;
        printf("Average = %.2f\n", avg);

    }
}