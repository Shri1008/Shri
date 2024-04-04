#include <stdio.h>
#include <stdlib.h>

void displayMenu(char *menuType, char *menu[]) {
    printf("\n%s Menu:\n", menuType);
    for (int i = 0; i < 5; ++i) {
        printf("%d. %s\n", i + 1, menu[i]);
    }
}

int main() {
    char *vegMenu[] = {"Vegetable Curry", "Paneer Tikka", "Dal Tadka", "Aloo Gobi", "Mix Veg"};
    char *nonVegMenu[] = {"Chicken Curry", "Mutton Rogan Josh", "Fish Fry", "Butter Chicken", "Egg Curry"};

    int choice;
    int quantity;

    printf("Welcome to the Restaurant!\n");
    printf("1. Veg\n2. Non-Veg\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            displayMenu("Veg", vegMenu);
            break;
        case 2:
            displayMenu("Non-Veg", nonVegMenu);
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    printf("Enter the number of the dish you want to order: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 5) {
        printf("Invalid choice!\n");
        return 1;
    }

    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    if (quantity < 1) {
        printf("Invalid quantity!\n");
        return 1;
    }

    printf("You have ordered %d quantity of %s.\n", quantity, (choice <= 5) ? vegMenu[choice - 1] : nonVegMenu[choice - 1]);

    return 0;
}