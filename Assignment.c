#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define ARR_SIZE 5

typedef struct {
    int nameCardID;
    char personName[20];
    char companyName[20];
} NameCard;


NameCard record_array[ARR_SIZE];


void reorder_array() {
    int count = 0;
    while (record_array[count].nameCardID != 0)
        count++;

    for (int i = 0; i < count; ++i) {
        for (int j = 1; j < count; ++j) {
            printf("%d\n",j);


        }
    }


}

void listNameCards() {
    reorder_array();
    printf("listNameCards():\n");
    int i = 0;
    int count = 0;
    while (record_array[i].nameCardID != 0) {
        count++;
        printf("nameCardID: %d\n", record_array[i].nameCardID);
        printf("personName: %s\n", record_array[i].personName);
        printf("companyName: %s\n", record_array[i].companyName);
        i++;
    }
    if (count == 0) {
        printf("The name card holder is empty\n");
    }

}

void addNameCard() {
    printf("addNameCard():\n");


}

int main() {

    int usr_sel;


    printf("NTU NAME CARD HOLDER MANAGEMENT PROGRAM:\n");
    printf("1: listNameCards()\n");
    printf("2: addNameCard()\n");
    printf("3: removeNameCard()\n");
    printf("4: getNameCard()\n");
    printf("5: quit\n");

    scanf("%d", &usr_sel);

//test data
    NameCard test1;
    strcpy(test1.companyName, "abcd");
    test1.nameCardID = 3;
    strcpy(test1.personName, "av");

    NameCard test2;
    strcpy(test2.companyName, "abcd");
    test2.nameCardID = 1;
    strcpy(test2.personName, "av");

    NameCard test3;
    strcpy(test3.companyName, "abcd");
    test3.nameCardID = 2;
    strcpy(test3.personName, "av");

    record_array[0] = test1;
    record_array[1] = test2;
    record_array[2] = test3;

//end test data


    while (usr_sel != 5) {
        if (usr_sel == 1) {
            listNameCards(record_array);
        }
        scanf("%d", &usr_sel);
    }


    return 0;
}

