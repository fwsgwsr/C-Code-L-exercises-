#include <stdio.h>

int main()
{
    int a;
    int *p = &a;

    printf("������һ��������");
    scanf("%d",&a);
    printf("a = %d\n",a);

    printf("���ٳ�����һ��������");
    scanf("%d",p);   //ͨ��ָ��p ,��ӷ��ʱ��� a
    printf("a = %d\n",a);

    return 0;
}