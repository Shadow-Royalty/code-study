#include<stdio.h>
#include<stdlib.h>
//二分查找记住一定要有序！！！数组的排序必须是有序的，不然就不行
//但是，折半查找要求线性表必须采用顺序存储结构，而且表中元素按关键字有序排列，注意必须要是有序排列，
//但有一种特殊情况可以不必须有序排列，即前一节介绍的商品选取，从一堆标准重量为10的商品中查找出唯一的次品，这种特殊的数据情况也可以使用二分查找。
int binary_search(int* list,int len,int target)
{
	int low =0;
	int hight=len-1;
	int middle;
	
	while(low<=hight)
	//这是防止循环溢出，因为无论是左边还是右边，这个都框定了上限
	{ 
	     middle=(low+hight)/2;//先拿一半和目标比较，然后看看是在左边还是右边(效率问题)
	     if(list[middle]==target)
	     {
		 	printf("找到了，位置是%d",middle);
		 	
		 	return list[middle];//把数据返回就行了
		 }
		
		else if(list[middle]>target)//目标比实际小，说明在左边，所以把属于右边的hight变为左边最大的那个再找，至于最大是因为防止遗漏数据。
		{
			hight=middle-1;
		}
		
		else if(list[middle]<target)//同理
				{
					low=middle+1;
				}
	}
	printf("找不到");
	return -1;
}

int main()
{
	int a[]={3,4,5,8,9,36,44};
	int b=binary_search(a,sizeof(a)/4,4);

	
	
	return 0;
}
