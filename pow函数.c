#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    double b;
    printf("请输入：");
    scanf("%d",&a);
    b = pow(a,5);
    printf("结果是：%.2f",b);

    return 0;
}