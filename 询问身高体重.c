#include<stdio.h>
int main()
{   
    char name[6];
    float height,weight;

    printf("����������������\n");
    scanf("%s",&name);

    printf("�������������(cm)��\n");
    scanf("%f",&height);

    printf("��������������(kg)��\n");
    scanf("%f",&weight);

    printf("========== ����Ϊ��ת�� ==========\n");

    height = height / 2.54; // ����ת��ΪӢ��
    weight = weight / 0.453; // ����ת��Ϊ��

    printf("%s������ǣ�%.2f�������ǣ�%.2f",name,height,weight);

    return 0;
}
