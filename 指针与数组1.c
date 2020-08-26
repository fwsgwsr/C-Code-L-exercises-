#include <stdio.h>

int main()
{
    char str[120];
    printf("请输入鱼C的域名");
    scanf("%s",str);

    // printf("鱼C工作室的域名是：%s\n",str);
    printf("str 的地址是：%p\n",str);  // %p 是用来打印地址的
    printf("str 的地址是：%p\n",&str[0]);   //str[0]是一个元素，所以要加&

    return 0;
}

// 数组名其实是数组第一个元素的地址