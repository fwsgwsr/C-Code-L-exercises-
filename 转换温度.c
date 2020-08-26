#include<stdio.h>
int main()
{
        double a,b;
        printf("请输入华氏度：");
        scanf("%lf",&a);

        b = (a-32)*5/9;
        printf("转换为摄氏度：%.2f\n",b);


        return 0;
}