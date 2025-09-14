#include <stdio.h>

int main() {
    char name[50];
    int roleno;
    int age;
    char phone[15];
    char id[20];
    char address[100];
    int pincode;
    char dob[15];
    char bloodgroup[5];
    float height;
    float weight;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your roll number: ");
    scanf("%d", &roleno);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your phone number: ");
    scanf("%s", phone);

    printf("Enter your ID: ");
    scanf("%s", id);

    printf("Enter your address: ");
    scanf(" %[^\n]", address);  

    printf("Enter your pincode: ");
    scanf("%d", &pincode);

    printf("Enter your date of birth (dd/mm/yyyy): ");
    scanf("%s", dob);

    printf("Enter your blood group: ");
    scanf("%s", bloodgroup);

    printf("Enter your height (in cm): ");
    scanf("%f", &height);

    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);

    printf("\n--- Student Info ---\n");
    printf("Name: %s", name);
    printf("Roll No: %d\n", roleno);
    printf("Age: %d\n", age);
    printf("Phone: %s\n", phone);
    printf("ID: %s\n", id);
    printf("Address: %s\n", address);
    printf("Pincode: %d\n", pincode);
    printf("DOB: %s\n", dob);
    printf("Blood Group: %s\n", bloodgroup);
    printf("Height: %.2f cm\n", height);
    printf("Weight: %.2f kg\n", weight);

    return 0;
}
