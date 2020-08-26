#include <stdio.h>

int main()
{
    char str[] = "I love FishC .com!";
    char *target = str;
    int count = 0;

    while (*target++ !='\0')     //这里注意左值必须是可变的，所以不能直接*str++ !='\0'
                                //且注意++运算符优先于*，但是++要在下一次计算中生效 。先取值再判断，再取再判
                                //指针变量是一个左值，而字符串名字是一个地址常量，是不可改变的
                                //数组名是一个地址，而指针是一个左值
    {
        count++;
    }
    printf("总共有%d个字符！\n",count);

    return 0;
}