#include <stdio.h>

int main()
{
    int roll;
    char name[100], s1[100], s2[100], s3[100], collegeName[100], email[100], dob[100], mob[100];
    float m1, m2, m3, total, avg;

    printf("Enter Student Details:\n");

    printf("Enter Student ID: ");
    scanf("%d", &roll);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Student College Name: ");
    scanf(" %[^\n]", collegeName);

    printf("Enter Student Email: ");
    scanf(" %[^\n]", email);

    printf("Enter Student DOB (dd/mm/yyyy): ");
    scanf(" %[^\n]", dob);

    printf("Enter Student Mobile Number: ");
    scanf(" %[^\n]", mob);

    // Subject names
    printf("Enter Subject 1 Name: ");
    scanf(" %[^\n]", s1);

    printf("Enter Marks for %s: ", s1);
    scanf("%f", &m1);

    printf("Enter Subject 2 Name: ");
    scanf(" %[^\n]", s2);

    printf("Enter Marks for %s: ", s2);
    scanf("%f", &m2);

    printf("Enter Subject 3 Name: ");
    scanf(" %[^\n]", s3);

    printf("Enter Marks for %s: ", s3);
    scanf("%f", &m3);

    // Calculation
    total = m1 + m2 + m3;
    avg = total / 3;

    // Output
    printf("\n--- Student Report ---\n");
    printf("Student ID       : %d\n", roll);
    printf("Name             : %s\n", name);
    printf("College Name     : %s\n", collegeName);
    printf("Email            : %s\n", email);
    printf("Date of Birth    : %s\n", dob);
    printf("Mobile Number    : %s\n", mob);

    printf("\nSubjects and Marks:\n");
    printf("%s : %.2f\n", s1, m1);
    printf("%s : %.2f\n", s2, m2);
    printf("%s : %.2f\n", s3, m3);

    printf("\nTotal Marks      : %.2f\n", total);
    printf("Average Marks    : %.2f\n", avg);

    return 0;
}
