/*      int *p1[5];    指向整型变量的指针（数组的5个元素都为 int*）   指针数组是一个数组，每个元素存放一个指针变量     
        int (*p2)[5];   先定义成指针，再指向一个数组（数组的5个元素都为 int）   数组指针是一个指针，它指向的是一个数组    */
    
/*===========指针数组例一===========*/

#include <stdio.h> 
int main()
{
    int a=1;
    int b=2;
    int c=3;
    int d=4;
    int e=5;
    int *p[5]={&a,&b,&c,&d,&e};
    int i;

    for (i=0;i<5;i++)
    {
        printf("%d\n",*p[i]);
    }
    return 0;
}
/*===========指针数组例二===========*/

#include <stdio.h>
int main()
{
    char *p[5] = {
        "第一句话",
        "第二句话",
        "第三句话",
        "第四句话"
    };
    int i;
    for (i=0;i<5;i++)
    {
        printf("%s\n", *p[i]);    //%s需要取地址
    }
    return 0;
}
/*===========数组指针例一===========*/
#include <stdio.h>
int main()
{
    int temp[5]={1,2,3,4,5};
    int (*p1)[5]=&temp;   //temp表示数组的第一个元素的地址，&temp表示的是整个数组的地址，而（*p1）[5]表示指向数组的指针
    int i;

    for (i=0;i<5;i++)
    {
        printf("%d\n",*(*p1+i));    //*p1表示该数组的地址，&p1是temp第1个元素的地址，想最后取走5个元素就要地址+i再*
    }
    return 0;
}