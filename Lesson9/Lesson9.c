#include <stdio.h>
#include <stdlib.h>

int main() {
    // Calculates the average and letter grade of a student with 3 exam scores.
    // Average < 50 -> FF
    // 50 <= Average < 60 -> DD
    // 60 <= Average < 70 -> CC
    // 70 <= Average < 85 -> BB
    // 85 <= Average -> AA

    int exam1,exam2,exam3,average;

    printf("Enter the score for the 1st exam: ");
    scanf("%d",&exam1);

    printf("Enter the score for the 2nd exam: ");
    scanf("%d",&exam2);

    printf("Enter the score for the 3rd exam: ");
    scanf("%d",&exam3);

    average = (exam1+exam2+exam3)/3;

    if (average < 50) {
        printf("Average: %d\n", average);
        printf("Letter grade: FF");
    }
    if (50 <= average && average < 60) {
        printf("Average: %d\n", average);
        printf("Letter grade: DD");
    }
    if (60 <= average && average < 70) {
        printf("Average: %d\n", average);
        printf("Letter grade: CC");
    }
    if (70 <= average && average < 85) {
        printf("Average: %d\n", average);
        printf("Letter grade: BB");
    }
    if (85 <= average) {
        printf("Average: %d\n", average);
        printf("Letter grade: AA");
    }

    return 0;
}

