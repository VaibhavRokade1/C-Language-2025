#include <stdio.h>

struct Student
{
    int id;
    float marks;
    char fav_Char;
};

int main()
{
    struct Student vaibhav;

    vaibhav.id = 784;
    vaibhav.marks = 87.34;
    vaibhav.fav_Char = 'V';

    printf("\n%d", vaibhav.id);
    printf("\n%c", vaibhav.fav_Char);
    printf("\n%0.2f", vaibhav.marks);
    return 0;
}
