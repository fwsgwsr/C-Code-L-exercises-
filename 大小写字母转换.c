#include <stdio.h>

int main()
{
        int ch;

        printf("������һ��Ӣ�ľ��ӣ�");

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