#include<stdio.h>

int main()
{
    int ch,count = 0;
    printf("请输入一串英文字母：");

    while ((ch = getchar())!='\n')
    {
        if('A'<=ch && ch<='Z')
        
            count = count + 1;
        
    }
    
            printf("你一共输入了%d个大写字符\n",count);
    
    return 0;
}