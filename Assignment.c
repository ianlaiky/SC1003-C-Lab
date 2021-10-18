#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define ARR_SIZE 5

typedef struct {
    int nameCardID;
    char personName[20];
    char companyName[20];
} NameCard;


NameCard record_array[ARR_SIZE];

void to_lower(char *str) {
    while (*str != '\0') {
        if (isupper(*str))
            *str = tolower(*str);
        str++;
    }
}

int num_elements() {
    int count = 0;
    while (record_array[count].nameCardID != 0)
        count++;
    return count;
}

void reorder_array() {
    int count = num_elements();
//    printf("numm: %d\n",count);

    for (int i = 0; i < count; ++i) {
        for (int j = i + 1; j < count; ++j) {
            if (record_array[i].nameCardID > record_array[j].nameCardID) {
                NameCard temp = record_array[i];
                record_array[i] = record_array[j];
                record_array[j] = temp;
            }
        }
    }
}

void listNameCards() {

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
    reorder_array();

    printf("addNameCard():\n");

    int usr_id;
    char usr_name[20];
    char usr_comName[20];
    printf("Enter nameCardID:\n");
    scanf("%d", &usr_id);
    while ((getchar()) != '\n');
    printf("Enter personName:\n");
//    scanf("%s", usr_name);
    fgets(usr_name, 20, stdin);
    printf("Enter companyName:\n");
//    scanf("%s", usr_comName);
    fgets(usr_comName, 20, stdin);

    //remove \n
    usr_name[strcspn(usr_name, "\n")] = 0;
    usr_comName[strcspn(usr_comName, "\n")] = 0;


    int num_element = num_elements();

    if (num_element == 5) {
        printf("The name card holder is full\n");
    } else {


        int count = 0;
        bool exists = false;
        while (record_array[count].nameCardID != 0) {
            if (record_array[count].nameCardID == usr_id) {
                exists = true;
            }
            count++;
        }
        if (exists) {
            printf("The nameCardID has already existed\n");
        } else {

            NameCard inserting;
            inserting.nameCardID = usr_id;
            strcpy(inserting.personName, usr_name);
            strcpy(inserting.companyName, usr_comName);

            record_array[num_element] = inserting;

            printf("The name card has been added successfully\n");
            reorder_array();
        }
    }
}

void removeNameCard() {
    reorder_array();
    char usr_in[20];
    printf("removeNameCard():\n");
    printf("Enter personName:\n");
    while ((getchar()) != '\n');
    fgets(usr_in, 20, stdin);
    usr_in[strcspn(usr_in, "\n")] = 0; //remove \n
    to_lower(usr_in);
//    printf("%s\n",usr_in);

    int num_element = num_elements();
    if (num_element == 0) {
        printf("The name card holder is empty\n");
    } else {
        int count = 0;
        int position = -1;
        while (record_array[count].nameCardID != 0) {
            char from_record[20];
            strcpy(from_record, record_array[count].personName);
            to_lower(from_record);
            if (strcmp(from_record, usr_in) == 0) {
                position = count;
                break;
            }
            count++;
        }
//        printf("POS:%d\n",position);
        if (position == -1) {
            printf("The target person name is not in the name card holder\n");


        } else {
            printf("The name card is removed\n");
            printf("nameCardID: %d\n", record_array[position].nameCardID);
            printf("personName: %s\n", record_array[position].personName);
            printf("companyName: %s\n", record_array[position].companyName);

            int times_to_shift = ARR_SIZE - 1 - position;
            for (int i = position; i <= times_to_shift; ++i) {
                record_array[i] = record_array[i + 1];
            }

            NameCard temp;
            temp.nameCardID = 0;
            strcpy(temp.personName, "");
            strcpy(temp.companyName, "");
            record_array[ARR_SIZE - 1] = temp;


        }
    }
    reorder_array();
}

void getNameCard() {


    int num_element = num_elements();
    char usr_in[20];

    printf("getNameCard():\n");
    printf("Enter personName:\n");

    while ((getchar()) != '\n');
    fgets(usr_in, 20, stdin);
    usr_in[strcspn(usr_in, "\n")] = 0;
    to_lower(usr_in);

    int pos = -1;
    for (int i = 0; i < num_element; ++i) {
        char from_record[20];
        strcpy(from_record, record_array[i].personName);
        to_lower(from_record);
        if (strcmp(from_record, usr_in) == 0) {
            pos = i;
            break;
        }

    }
    if (pos == -1) {
        printf("The target person name is not found\n");
    } else {
        printf("The target person name is found\n");
        printf("nameCardID: %d\n", record_array[pos].nameCardID);
        printf("personName: %s\n", record_array[pos].personName);
        printf("companyName: %s\n", record_array[pos].companyName);
    }


}

int main() {

    int usr_sel;


    printf("NTU NAME CARD HOLDER MANAGEMENT PROGRAM:\n");
    printf("1: listNameCards()\n");
    printf("2: addNameCard()\n");
    printf("3: removeNameCard()\n");
    printf("4: getNameCard()\n");
    printf("5: quit\n");
    printf("Enter your choice:\n");

    scanf("%d", &usr_sel);



    while (usr_sel != 5) {

        if (usr_sel == 1) {
            listNameCards(record_array);
        } else if (usr_sel == 2) {
            addNameCard();
        } else if (usr_sel == 3) {
            removeNameCard();
        } else if (usr_sel == 4) {
            getNameCard();
        } else {
            return 0;
        }
        printf("Enter your choice:\n");

        if(scanf("%d", &usr_sel)!=1){
            fflush(stdin);
            usr_sel=5;

        }

    }


    return 0;
}

