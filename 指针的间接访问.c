#include <stdio.h>

int main()
{
    int a;
    int *p = &a;

    printf("请输入一个整数：");
    scanf("%d",&a);
    printf("a = %d\n",a);

    printf("请再成输入一个整数：");
    scanf("%d",p);   //通过指针p ,间接访问变量 a
    printf("a = %d\n",a);

    return 0;
}