#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    printf("n = ");
    scanf("%d", &n);

    char names[n][15];

    for (int count = 0; count < n; count++)
    {
        scanf("%s", names[count]);
    }

    for (int count = 1; count < n; count++)
    {
        if (strcmp(names[count], names[count - 1]) > 0)
        {
            continue;
        }
        int pos = count;
        char temp[15];
        strcpy(temp, names[count]);
        while (pos > 0 || strcmp(names[pos - 1], temp) > 0)
        {
            strcpy(names[pos], names[pos - 1]);
            pos--;
        }
        strcpy(names[pos], temp);
    }

    printf("\nNames in alphabetical order\n\n");
    for (int count = 0; count < n; count++)
    {
        printf("%s\n", names[count]);
    }

    return 0;
}