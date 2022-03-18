#include <stdio.h>

// struct something
// {
//     int count : 5;
//     int num : 3;
// };

// void main()
// {
//     typedef struct something n;
//     n name;
//     printf("count = ");
//     scanf("%d", name.count);
//     printf("num = ");
//     scanf("%d", name.num);

//     printf("count = %d\n", name.count);
//     printf("num = %d\n", name.num);
// }

union test
{
    unsigned int x : 3;
    unsigned int y : 3;
    int z;
};

int main()
{
    union test t;
    t.x = 1;
    while (t.x == 1)
    {
        t.x = 5;
        t.y = 4;
        t.z = 1;
    };
    printf("%d", t.x);
    return 0;
}