#include <stdio.h>
#include <stdlib.h>

int main() {
    // Exam score calculation

    // 1 correct answer in Literature: 1.999 points
    // 1 correct answer in Mathematics: 3.998 points
    // 1 correct answer in Social Sciences: 1 point
    // 1 correct answer in Science: 2.999 points
    // Base score: 100.160 points

    float Literature,mathematics,socialsciences,science,score;

    printf("Enter your Turkish correct answers:");
    scanf("%f", &Literature);

    printf("Enter your Mathematics correct answers:");
    scanf("%f", &mathematics);

    printf("Enter your Social Sciences correct answers:");
    scanf("%f", &socialsciences);

    printf("Enter your Natural Sciences correct answers:");
    scanf("%f", &science);

    score = Literature * 1.999 + mathematics * 3.998 + socialsciences * 1 + science * 2.999 + 100.160;

    printf("Your total score:%f", score);
    return 0;
}

