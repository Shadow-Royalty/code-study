#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
    char sign;
    int x, y;

    printf("Input x op y: ");
    scanf("%d\n%c\n%d", &x, &sign, &y);
    //为何需要\n?
    /*C程序执行scanf时，会从缓冲区读数据，如果缓冲区是空的，就阻塞住，等待你从键盘输入。
        输入结束后按回车会执行scanf函数，程序会逐个读取缓冲区的数据，注意，
        这时会将\n留在缓冲区（缓冲区只剩下\n）。如果后面输入整型即%d，并不会造成影响，
        @@因为缓冲区中的\n是“字符”，并不会被当作%d读入，会被忽略而读取后面的整型数据，
        而如果后面输入字符型即% c，这时就需要特别注意，因为缓冲区的\n会被当作% c读入，
        这样就会存在问题。为了解决这一问题，可以用到scanf末尾加\n的方法。*/
        /*(我们输入字符按下的Enter键就已经输入了\n了)*/

    if (sign == '*')//这个不是赋值，而是判断相等，所以用==
        printf("%d * %d = %d\n", x, y, x * y);//printf是打印，所以不用==
    else if (sign == '/')
        printf("%d / %d = %d\n", x, y, x / y);
    else if (sign == '%')
        printf("%d Mod %d = %d\n", x, y, x % y);
    else
        printf("Error\n");
    return 0;
}