#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int main()
{
    /**
   int count = sizeof(ages) / sizeof(int) ;  //����ĳ�������еİ������ݸ���
   */
    //����
    int ages [ ]  =  { 1,2,3,4,5 };
    // get
    printf("%d\n",ages[0]);

    // set
    ages [0] = 3;

    printf("%d\n",ages[0]);


    printf("\n");
    printf("Hello, World!\n");









    int people[7] = {};
    for (int i = 0; i < 7 ; ++i) {
        people[i] = i + 1;
        printf("%d ", people[i]);
    }
    printf("\n");

    for (int i = 0; i < 7 ; ++i) {
        people[i] = people[i] + 1;
        printf("%d ",people[i]);
    }
    printf("\n");
    for (int i = 6; i >= 0 ; --i) {
        people[i] = people[i] - 1;
        printf("%d ",people[i]);
    }
    printf("\n");
//��������˳��
    for (int i = 0; i < (6-i) ; ++i) {
        //����i ��6-i��ֵ
        //ʹ����ʱ��������һ����
        int temp = people[i];
        //��һ����д����һ��������
        people[i] = people[6 - i];
        //����ʱ������ֵ����ڶ���������
        people[6-i] = temp;
    }
    for (int i = 0; i < 7 ; ++i) {
        printf("%d ",people[i]);
    }


    return 0;
}
