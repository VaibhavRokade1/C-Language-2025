#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int sid;
    char sName[100], s1[100], s2[100], s3[100];
    float m1, m2, m3, totalmarks, marksAvg;
    FILE *fp;

    printf("Enter a Student ID:\n");
    scanf("%d", &sid);

    getchar();
    printf("Enter a Student Name:\n");
    fgets(sName, sizeof(sName), stdin);
    sName[strcspn(sName, "\n")] = 0;

    printf("Enter Subject 1 Name:\n");
    scanf("%s", s1);
    printf("Enter Subject 2 Name:\n");
    scanf("%s", s2);
    printf("Enter Subject 3 Name:\n");
    scanf("%s", s3);

    printf("Enter Marks for %s:\n", s1);
    scanf("%f", &m1);
    printf("Enter Marks for %s:\n", s2);
    scanf("%f", &m2);
    printf("Enter Marks for %s:\n", s3);
    scanf("%f", &m3);

    totalmarks = m1 + m2 + m3;
    marksAvg = totalmarks / 3;

    char grade;
    if (marksAvg <= 100 && marksAvg >= 90)
        grade = 'A';
    else if (marksAvg >= 80)
        grade = 'B';
    else if (marksAvg >= 70)
        grade = 'C';
    else if (marksAvg >= 60)
        grade = 'D';
    else if (marksAvg >= 50)
        grade = 'E';
    else if (marksAvg >= 30)
        grade = 'F';
    else
        printf("Invalid Input");

    fp = fopen("StudentRecord.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "\n-----------------------------------------------------");
    fprintf(fp, "\n-                  Student Result                   -");
    fprintf(fp, "\n-----------------------------------------------------");
    fprintf(fp, "\n\t\tRoll No       : %d", sid);
    fprintf(fp, "\n\t\tStudent Name  : %s", sName);
    fprintf(fp, "\n\t\tSubject Name  : %s", s1);
    fprintf(fp, "\n\t\tSubject Marks : %0.2f", m1);
    fprintf(fp, "\n\t\tSubject Name  : %s", s2);
    fprintf(fp, "\n\t\tSubject Marks : %0.2f", m2);
    fprintf(fp, "\n\t\tSubject Name  : %s", s3);
    fprintf(fp, "\n\t\tSubject Marks : %0.2f", m3);
    fprintf(fp, "\n\t\tTotal Marks   : %0.2f", totalmarks);
    fprintf(fp, "\n\t\tAvg Marks     : %0.2f", marksAvg);
    fprintf(fp, "\n\t\tGrade         : '%c'", grade);
    fprintf(fp, "\n-----------------------------------------------------");

    fclose(fp);
    return 0;
}
