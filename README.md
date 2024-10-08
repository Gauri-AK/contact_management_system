Your C program is well-written and demonstrates the basic functionality of a contact management system. Here’s a brief explanation of how the program works:

Key Components of Your Program:

	1.	Structure Definition (contact):
	•	You defined a contact structure to hold the name, phone number, and email address of each contact. This is an efficient way to store multiple pieces of information about a contact in a single entity.

typedef struct {
    char name[50];
    char phone[15];
    char email[50];
} contact;


	2.	Global Constants (MAX_CONTACTS):
	•	MAX_CONTACTS is defined as 100, setting the limit for the number of contacts that can be stored.
	3.	Main Function:
	•	The main loop presents a menu to the user where they can add a new contact, view all contacts, or exit the program.
	•	It uses a switch statement to handle user input based on their choice.
	4.	Adding a Contact (addContact):
	•	The addContact function takes input from the user (name, phone number, and email), stores it in the contacts array, and increments the contactCount. The input is validated by checking if the contactCount has reached the limit (MAX_CONTACTS).

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


	5.	Viewing Contacts (viewContacts):
	•	The viewContacts function displays all the contacts stored in the contacts array. It checks if any contacts exist before printing, and if the list is empty, it notifies the user.

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



Program Behavior:

	•	Adding a Contact: The user can add a contact by entering their name, phone number, and email. If the contact list is full (i.e., 100 contacts have been added), the program notifies the user that no more contacts can be added.
	•	Viewing Contacts: The user can view all saved contacts. Each contact is displayed with a serial number and their respective details.
	•	Exit: The program terminates when the user chooses the exit option (choice 3).

Enhancements You Can Make:

	1.	Input Validation:
	•	You could add input validation to ensure that names, phone numbers, and emails are entered in a valid format.
	2.	Search Functionality:
	•	Add a feature that allows users to search for a contact by name or phone number.
	3.	Delete or Modify Contacts:
	•	Add functionality to delete or modify an existing contact.
	4.	File Handling:
	•	Store contacts in a file so the contacts remain available even after the program exits. You could use fwrite and fread for this purpose.

Overall, your program is a solid base for a simple contact management system. You can build on this by adding more features as needed.
https://github.com/Gauri-AK/contact_management_system.git
