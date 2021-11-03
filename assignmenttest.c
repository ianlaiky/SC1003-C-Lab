#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 5

/* function prototypes */
typedef struct {
    int nameCardID;
    char personName[20];
    char companyName[20];
} NameCard;

//NameCard target;
NameCard inputRecord[MAX];
char *p, target[20];
int count = 0;

void listnamecards();

void addnamecard();

void removenamecard();

void getnamecard();

void sort();

void swap(int *xp, int *yp);


int main() {
    NameCard newholder[MAX];
    int choice, numcards = 0;
    do {
        printf("\nNTU NAME CARD HOLDER MANAGEMENT PROGRAM:\n");
        printf("1:listNameCards()\n");
        printf("2:addNameCard()\n");
        printf("3:removeNameCard()\n");
        printf("4:getNameCard()\n");
        printf("5:quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                listnamecards();
                break;
            case 2:

                addnamecard();

                break;
            case 3:
                sort();
                removenamecard();
                sort();
                break;
            case 4:
//            getnamecard();
                break;
            case 5:

                break;

            default:
                printf("Program terminating .....\n");
                break;
        }
    } while (choice < 6);
    return 0;
}

void listnamecards() {
    sort();
    printf("\nlistNameCards()");
    if (count != 0) {
        for (int i = 0; i < count; ++i) {
            printf("\nnameCardID: %d", inputRecord[i].nameCardID);
            printf("\npersonName: %s", inputRecord[i].personName);
            printf("\ncompanyName: %s", inputRecord[i].companyName);

        }
    } else {
        printf("\nThe ncHolder is empty");

    }
    return;

}

void addnamecard() {
    NameCard newcard;
    if (count < 5) {
        printf("\naddNameCard()\n");
        printf("Enter nameCardID: \n");
        scanf("%d", &newcard.nameCardID);
        while ((getchar()) != '\n');
        printf("Enter personName: ");
        fgets(newcard.personName, 20, stdin);
        if (p = strchr(newcard.personName, '\n'))
            *p = '\0';
        printf("\nEnter CompanyName: ");
        fgets(newcard.companyName, 20, stdin);
        if (p = strchr(newcard.companyName, '\n'))
            *p = '\0';
        printf("%d, %s, %s\n", newcard.nameCardID, newcard.personName, newcard.companyName);
        inputRecord[count] = newcard;
        count++;
        sort();

        printf("\nThe name card has been added successfully");

        return;
    } else {
        printf("The name card holder is full");
        return;
    }
}

void removenamecard() {
    int i;

    printf("Enter target name: \n");
    scanf("\n");
    fgets(target, 20, stdin);
    if (p=strchr(target,'\n'))
        *p = '\0';
    printf("target: %s\n", target);

    int index = -1;
    for (i=0; i < count  ; i++) {
        if (strcasecmp(inputRecord[i].personName, target) == 0) {
            index = i;
            break;
        }
    }
    for (int j = index; j < count; ++j) {
        inputRecord[j] = inputRecord[j + 1];
    }

    count--;

}

void sort() {
    NameCard temp;
    if (count != 0) {
        for (int j = 0; j < count - 1; j++) {
            for (int i = j + 1; i < count; i++) {
                if (inputRecord[i].nameCardID < inputRecord[j].nameCardID) {
                    temp = inputRecord[j];
                    inputRecord[j] = inputRecord[i];
                    inputRecord[i] = temp;
                }
            }
        }
    }

}