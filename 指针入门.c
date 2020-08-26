#include <stdio.h>

int main()
{
    char a = 'F';
    int f = 123;

    char *pa = &a;
    int *pb = &f;

    printf("a = %c\n",*pa);
    printf("b = %d\n",*pb);

    *pa = 'C';
    *pb = 'L';

    printf("now, a = %c\n",*pa);
    printf("now, f = %c\n",*pb);

    printf("sizeof pa = %d\n",sizeof(pa));
    printf("sizeof pb = %d\n",sizeof(pb));


    return 0;
}