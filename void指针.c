#include <stdio.h>
int mian()
{
    int num = 1024;
    int *pi = &num;
    char *ps = "FishC";
    void *pv;

    pv = pi;
    printf("pi£º%p,pv£º%p\n",pi,pv);
    printf("*pv£º%d\n",*(int *)pv);

    pv = ps;
    printf("ps£º%p,pv£º%p\n",ps,pv);
    printf("*pv£º%s\n",(char *)pv);

    return 0;
}