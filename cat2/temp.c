#include <stdio.h>

void main()
{
    // char name[] = "harsh";
    // char *temp = name;
    // // temp += 1;
    // printf("%c\n", *temp);

    printf("-%s-\n", "harsh");
    printf("-%15s-\n", "harsh");
    printf("-%.10s-\n", "harsh");
    printf("-%-10s-\n", "harsh");
    printf("-%-15s-\n", "harsh");
    printf("-%.15s-\n", "harsh");
    printf("-%15.10s-\n", "harsh");
    printf("-%-15.10s-\n", "harsh");
}

// you may specify stdin and stdout by - ./a.out in.dat out.dat (stderr - by default monitor)
// atoi and atof in stdlib.h
//

// TODO
// input in character arrays OR string
// what is getchar and putchar, and thus, EOF
// conversion specifiers in string
