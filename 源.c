#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>//不要漏掉！


//int Add(int x,int y)//出错了一定要注意是否是中文打出的！
//{
//	int z = x+y;//不要总漏掉分号！
//return z;
//}
int main()
{

    ////int num1 = 100;
    ////int num2 = 200;
    //int sum = 0;//要定义这个sum(和的意思）
    ////	sum = Add(num1, num2);
    //sum = Add(2, 3);
    //sum = Add(56, 78);//注意，sum优先最后一个的sum
    //
    //printf("sum=%d\n", sum);//函数=数据的形式

    int pivotIndex(int* nums, int numsSize)//numsSize是总共的数的数量，i是当前检索时的数
    {
        int total = 0;
        for (int i = 0; i < numsSize; ++i)
        {
            total += nums[i];//把所有检索的数（i）给赋到total，这里只是把total表达出来
        }
        int sum = 0;
        for (int i = 0; i < numsSize; ++i)//这一个循环是让两边相等
        {
            if (2 * sum + nums[i] == total)//之所以这里有个nums[i]是因为如果当前还没赋值，那么自己也有
                //大小的
            {
                return i;//结束i循环，return表示结束。

            }
            sum += nums[i];//定义左边的值，这样有了上面的总值定义就不用定义右边的了。
            //注意，这里的循环跟上面的循环条件不同，所以自然看起来赋值一样，但因为条件不同所以
            //赋值的大小不同
        }
        return -1;//题目条件
    }//因为引用了一个外部函数，所以只能用官网的编译器才能完成，所以这里报错正常

    
    return 0;


}

int total = 0;
for (int i = 0; i < numsSize; ++i)
{
    total += nums[i];
}
int sum = 0;
for (int i = 0; i < numsSize; ++i)
{
    if (2 * sum + nums[i] == total)
    {
        return i;

    }
    return -1;//0和-1都可以
}

