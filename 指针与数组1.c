#include <stdio.h>

int main()
{
    char str[120];
    printf("��������C������");
    scanf("%s",str);

    // printf("��C�����ҵ������ǣ�%s\n",str);
    printf("str �ĵ�ַ�ǣ�%p\n",str);  // %p ��������ӡ��ַ��
    printf("str �ĵ�ַ�ǣ�%p\n",&str[0]);   //str[0]��һ��Ԫ�أ�����Ҫ��&

    return 0;
}

// ��������ʵ�������һ��Ԫ�صĵ�ַ