#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

    int main()
    {
        float x, y;

        printf("Enter x: ");
        scanf("%f", &x);
        /*if (x = 10)*/
        if (fabs(x - 10) <= 0.0000001)//在对于等号来说，像x=10这样赋值是不准确的，
            //if判断x大小时要做差计算机赋值必须要用到fabs作差绝对值小于很小的数才行

            y = 1 / x;

        //else if (x != 10)//直接else即可
        else
            y = x;

        printf("f(%.1f) = %.1f", x, y);//逗号不要漏了
        return 0;
    }