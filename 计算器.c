#include <stdio.h>

int main()
{
        int op1, op2;
        char ch;
        float result;

        printf("������ʽ�ӣ�");
        scanf("%d %c %d", &op1, &ch, &op2);

        switch (ch)
        {
                case '-': op2 = -op2; // no break
                case '+': result = (float)op1 + op2; break;
                case '*': result = (float)op1 * op2; break;
                case '/': 
                        if (op2 != 0)
                        {
                                result = (float)op1 / op2;
                                break;
                        }
                        else
                        {
                                printf("��������Ϊ�㣡\n");
                                break;
                        }
        }
        printf("����ǣ�%.2f\n", result);

        return 0;
}