#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int main()
{
    /**
   int count = sizeof(ages) / sizeof(int) ;  //计算某个数组中的包含数据个数
   */
    //数组
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
    return 0;
}
