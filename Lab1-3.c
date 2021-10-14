#include <stdio.h>


int main() {

    char one = '1';
    char two = '2';
    char three = '3';

    int user_in;

    printf("Enter the height:");
    scanf("%d", &user_in);

    int current_count = 1;
    int character_set = 0;
    for (int i = 0; i < user_in; ++i) {

        if (character_set == 0) {

            for (int j = 0; j < current_count; ++j) {

                printf("%c", one);
            }

        } else if (character_set == 1) {

            for (int j = 0; j < current_count; ++j) {
                printf("%c", two);
            }
        } else {

            for (int j = 0; j < current_count; ++j) {
                printf("%c", three);
            }
            character_set = -1;

        }

        printf("\n");
        current_count++;
        character_set++;
    }

    return 0;

}