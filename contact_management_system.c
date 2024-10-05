#include<stdio.h>
#include<string.h>

#define MAX_CONTACTS 100

typedef struct {
    char name[50];
    char phone[15];
    char email[50];
} contact;

void addContact(contact contacts[], int *contactCount);
void viewContacts(contact contacts[], int contactCount);

int main() {
    contact contacts[MAX_CONTACTS];
    int contactCount = 0;
    int choice;

    while (1) {
        printf("\n1. Add a new contact\n");
        printf("2. View all contacts\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (contactCount < MAX_CONTACTS) {
                    addContact(contacts, &contactCount);
                } else {
                    printf("Contact list is full.\n");
                }
                break;
            case 2:
                viewContacts(contacts, contactCount);
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}

void addContact(contact contacts[], int *contactCount) {
    printf("Enter name: ");
    scanf("%s", contacts[*contactCount].name);
    printf("Enter phone number: ");
    scanf("%s", contacts[*contactCount].phone);
    printf("Enter Email: ");
    scanf("%s", contacts[*contactCount].email);
    (*contactCount)++;
    printf("Contact added successfully!\n");
}

void viewContacts(contact contacts[], int contactCount) {
    if (contactCount == 0) {
        printf("No contacts available.\n");
    } else {
        for (int i = 0; i < contactCount; i++) {
            printf("\nContact %d\n", i + 1);
            printf("Name: %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            printf("Email: %s\n", contacts[i].email);
        }
    }
}