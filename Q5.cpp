#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    char students[n][50];  
    int marks[n];          
    int sum = 0;
    int highestIndex = 0;
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i]);
        printf("Enter marks of %s: ", students[i]);
        scanf("%d", &marks[i]);
        sum += marks[i];
        if (marks[i] > marks[highestIndex]) {
            highestIndex = i;
        }
    }
    float average = sum / (float)n;
    printf("\nStudent Marks:\n");
    printf("Name     Marks\n");
    printf("------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-8s %d\n", students[i], marks[i]);
    }
    printf("\nHighest Scorer: %s with %d marks\n", students[highestIndex], marks[highestIndex]);
    printf("Average Marks: %.2f\n", average);
    return 0;
}

