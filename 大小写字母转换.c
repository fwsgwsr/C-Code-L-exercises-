#include <stdio.h>

int main()
{
        int ch;

        printf("请输入一行英文句子：");

        while ((ch = getchar()) != '\n')
        {
                if (ch >= 'A' && ch <= 'Z')
                {
                        ch = ch + 32;
                }
                else if (ch >= 'a' && ch <= 'z')
                {
                        ch = ch - 32;
                }

                putchar(ch);
        }
        putchar('\n');
        return 0;
}