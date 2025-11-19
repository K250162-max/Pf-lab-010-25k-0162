#include <stdio.h>

int main() {
    int n = 5;
    char names[5][50] = {"Ali", "Sara", "John", "Ahmed", "Zara"};
    int marks[5] = {88, 92, 76, 91, 85};

    int sum = 0;
    int highestIndex = 0;
    printf("---- Student Marks Table ----\n");
    printf("Name\t\tMarks\n");
    printf("----------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-10s\t%d\n", names[i], marks[i]); 
        sum += marks[i];   
        if (marks[i] > marks[highestIndex]) {
            highestIndex = i;    
        }
    }
    float average = (float)sum / n;
    printf("\nTop Student: %s with %d marks\n", names[highestIndex], marks[highestIndex]);
    printf("Class Average: %.2f\n", average);

    return 0;
}

