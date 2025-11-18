#include <stdio.h>

int main() {
    char students[5][20] = {"Alice", "Bob", "Charlie", "Diana", "Eve"};
    int marks[5] = {85, 92, 78, 96, 88};
    int highestIndex = 0;
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += marks[i]; 
        if (marks[i] > marks[highestIndex]) {
            highestIndex = i;
        }
    }
    float average = sum / 5.0;
    printf("Student Marks:\n");
    printf("Name     Marks\n");
    printf("------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%-8s %d\n", students[i], marks[i]);
    }

    printf("\nHighest Scorer: %s with %d marks\n", students[highestIndex], marks[highestIndex]);
    printf("Average Marks: %.2f\n", average);

    return 0;
}

