#include <stdio.h>

int main()
{
    int array[4][5] = {0};
    int i,j,k = 0;

    for (i=0;i<4;i++)
    {
        for (j=0;j<5;j++)
        {
            array[i][j] = k++;
        }
    } 
    printf("*(array+1): %p\n",*(array+1));
    printf("array[1]：%p\n",array[1]);
    printf("&array[1][0]：%p\n",&array[1][0]);
    printf("**(array+1)：%d\n",*(*(array+1)+3));    /* array ：指向包含五个元素的数组的指针，也就是第一行的首地址；
                                                    array +1：同样是指向包含五个元素的数组的指针，是第二行的首地址；*/
    printf("array[1][3]：%d\n",array[1][3]);
    return 0;
}