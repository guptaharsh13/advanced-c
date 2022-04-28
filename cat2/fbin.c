// #include <stdio.h>
// struct rec
// {
//     int x, y, z;
// };
// int main()
// {
//     int c;
//     FILE *fp;
//     struct rec r;
//     // fp = fopen("binaryfile.bin", "wb");
//     // if (!fp)
//     // {
//     //     printf("Unable to open file!");
//     //     return 1;
//     // }
//     // for (c = 1; c <= 10; c++)
//     // {
//     //     r.x = c;
//     //     fwrite(&r, sizeof(struct rec), 1, fp);
//     // }

//     fp = fopen("binaryfile.bin", "rb");
//     if (!fp)
//     {
//         printf("Unable to open file!");
//         return 1;
//     }
//     for (c = 1; c <= 10; c++)
//     {
//         fread(&r, sizeof(struct rec), 1, fp);
//         printf("%d\n", r.x);
//     }

//     fclose(fp);
//     return 0;
// }

#include <stdio.h>
void main()
{
    FILE *fp;
    char ch;
    int n;
    fp = fopen("harsh.txt", "r");
    if (fp == NULL)
        printf("file cannot be opened");
    else
    {
        printf("Enter value of n to read last ‘n’ characters");
        scanf("%d", &n);
        fseek(fp, n, 1);
        while ((ch = fgetc(fp)) != EOF)
        {
            printf("%c", ch);
        }
    }
    fclose(fp);
}