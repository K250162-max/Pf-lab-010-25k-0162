#include <stdio.h>

#define CATEGORIES 3
#define ITEMS 3
#define MAX_LEN 50

int main() {
    char categories[CATEGORIES][MAX_LEN] = {
        "Appetizers",
        "Main Course",
        "Desserts"
    };

    char items[CATEGORIES][ITEMS][MAX_LEN] = {
        {"Spring Rolls", "Garlic Bread", "Soup"},
        {"Grilled Chicken", "Pasta Alfredo", "Beef Burger"},
        {"Ice Cream", "Brownie", "Fruit Salad"}
    };
    float prices[CATEGORIES][ITEMS] = {
        {5.99, 4.49, 6.75},
        {12.99, 14.50, 9.99},
        {3.99, 6.49, 8.25}
    };
    printf("========== RESTAURANT MENU ==========\n\n");
    for (int i = 0; i < CATEGORIES; i++) {
        printf("----- %s -----\n", categories[i]);
        for (int j = 0; j < ITEMS; j++) {
            printf("%-20s  $%.2f\n", items[i][j], prices[i][j]);
        }
        printf("\n");
    }
    printf("========= BUDGET-FRIENDLY ITEMS (Under $10) =========\n\n");
    for (int i = 0; i < CATEGORIES; i++) {
        for (int j = 0; j < ITEMS; j++) {
            if (prices[i][j] < 10.0) {
                printf("%-20s  $%.2f  (%s)\n",
                       items[i][j], prices[i][j], categories[i]);
            }
        }
    }
    return 0;
}

