#include <stdio.h>
#include <stdlib.h>

// typedef, struct, union, enum
typedef struct {
    int id;
    char name[50];
} User;

union Data {
    int i;
    float f;
    char str[20];
};

enum Status { OFF, ON };

extern int ext_var; // extern keyword

void keyword_demo(void) {
    auto int auto_var = 1;
    register int reg_var = 2;
    static int stat_var = 3;
    volatile int vol_var = 4;
    const int const_var = 5;
    ext_var = 6;
}

int ext_var = 0;

int main(void) {
    char a[100];
    int b;
    unsigned int u = 0;
    signed int s = -1;
    short int sh = 2;
    long int l = 100000;
    float f = 3.14;
    double d = 2.71828;
    void *ptr = NULL;
    User user;
    union Data data;
    enum Status status = ON;

    printf("Hello World!!\nWrite your name:\n");
    fgets(user.name, sizeof(user.name), stdin);

    printf("Enter your ID (number):\n");
    scanf("%d", &user.id);

    printf("Enter a number:\n");
    scanf("%d", &b);

    printf("Enter a float:\n");
    scanf("%f", &f);

    printf("Enter a double:\n");
    scanf("%lf", &d);

    printf("Enter a string (max 19 chars):\n");
    scanf("%s", data.str);

    printf("Choose status (0 for OFF, 1 for ON):\n");
    scanf("%d", (int*)&status);

    printf("User name: %s", user.name);
    printf("User ID: %d\n", user.id);
    printf("Number: %d\n", b);
    printf("Float: %.2f\n", f);
    printf("Double: %.5lf\n", d);
    printf("Union string: %s\n", data.str);
    printf("Status: %s\n", status == ON ? "ON" : "OFF");

    int i;
    for (i = 0; i < 2; i++) {
        if (i == 1) continue;
        printf("for loop: i=%d\n", i);
    }

    i = 0;
    while (i < 2) {
        printf("while loop: i=%d\n", i);
        i++;
    }

    i = 0;
    do {
        printf("do-while loop: i=%d\n", i);
        i++;
    } while (i < 2);

    switch (status) {
        case OFF:
            printf("Switch: Status is OFF\n");
            break;
        case ON:
            printf("Switch: Status is ON\n");
            break;
        default:
            printf("Switch: Unknown status\n");
    }

    goto label;
    printf("This will not print\n");
label:
    printf("goto: jumped here\n");

    keyword_demo();

    return 0;
}