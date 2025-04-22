#include <stdio.h>

// Function to calculate total
float calculateTotal(float marks[], int size) {
    float total = 0;
    for (int i = 0; i < size; i++) {
        total += marks[i];
    }
    return total;
}

// Function to cal avg
float calculateAverage(float total, int size) {
    return total / size;
}

// Function to determine grade
char getGrade(float avg) {
    if (avg >= 90)
        return 'A';
    else if (avg >= 75)
        return 'B';
    else if (avg >= 60)
        return 'C';
    else if (avg >= 40)
        return 'D';
    else
        return 'F';
}

int main() {
    float marks[5];
    int i;
    float total, average;
    char grade;

    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
    }

    total = calculateTotal(marks, 5);
    average = calculateAverage(total, 5);
    grade = getGrade(average);

    printf("\n--- Result ---\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: %.2f\n", i + 1, marks[i]);
    }
    printf("Total   : %.2f / 500\n", total);
    printf("Average : %.2f\n", average);
    printf("Grade   : %c\n", grade);

    return 0;
}
