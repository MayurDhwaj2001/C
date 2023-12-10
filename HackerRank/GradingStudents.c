#include <stdio.h>
#include <stdlib.h>

int gradingStudents(int count, int grades[])
{
    for (int i = 0; i < count; i++)
    {
        if (grades[i] > 37)
        {
            int lastdigit = grades[i] % 10;
            if (lastdigit == 3 || lastdigit == 4)
            {
                grades[i] = grades[i] / 10;
                lastdigit = 5;
                grades[i] = grades[i] * 10 + lastdigit;
            }
            else if (lastdigit == 8 || lastdigit == 9)
            {
                grades[i] = grades[i] / 10;
                grades[i] = grades[i] + 1;
                grades[i] = grades[i] * 10;
            }
        }
        printf("%d\n", grades[i]);
    }
    return 1;
}

int main()
{
    int count;
    printf("Enter no of elements\n");
    scanf("%d", &count);
    int grades[count];
    printf("Enter Elements\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &grades[i]);
    }
    gradingStudents(count, grades);
    return 0;
}