#include<stdio.h>

int main()
{
    int ch,count = 0;
    printf("������һ��Ӣ����ĸ��");

    while ((ch = getchar())!='\n')
    {
        if('A'<=ch && ch<='Z')
        
            count = count + 1;
        
    }
    
            printf("��һ��������%d����д�ַ�\n",count);
    
    return 0;
}