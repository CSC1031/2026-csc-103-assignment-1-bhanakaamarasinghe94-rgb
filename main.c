#include <stdio.h>
#include <stdlib.h>

int main() {
    float mark1, mark2, mark3;
    float total, average;
    char grade;

    printf("Enter marks for Subject 1: ");
    scanf("%f", &mark1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &mark2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &mark3);

    total = mark1 + mark2 + mark3;
    average = total / 3;

    // Determine grade
    if (average >= 80)
        grade = 'A';
    else if (average >= 70)
        grade = 'B';
    else if (average >= 60)
        grade = 'C';
    else if (average >= 50)
        grade = 'S';
    else
        grade = 'F';

    if (mark1<40 or mark2<40 or mark3<40)
        printf("\nExam is Failed");
    else
        printf("Exam is Passed");
    printf("\n----- Student Result -----\n");
    printf("Total Marks : %.2f\n", total);
    printf("Average     : %.2f\n", average);
    printf("Grade       : %c\n", grade);

    if (average >= 35)
        printf("Status      : PASS\n");
    else
        printf("Status      : FAIL\n");

    return 0;
}
