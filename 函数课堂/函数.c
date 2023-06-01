
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<string.h>
#include<math.h>

//int isprime(int n)
//{
//	int i = 0;
//	int flag = 1;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			flag = 0;
//		}
//	}
//	printf("%d", flag);
//}
//
//
//
//
//
//
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	isprime(n);
//
//
//
//	return 0;
//}

double fact(int n)
{
	int sum = 1;
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		sum *= i;
		printf("%d!=%d\n", i, sum);
	}


}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("Enter n: ");
	fact(n);




	return 0;
}

//int reverse(int number)
//{
//	int count = 0;
//	while (number != 0)
//	{ 
//		/*if (number < 0)
//		{
//			
//			count++;
//	}
//		if (count == 1)
//	{number = -number;
//		printf("-");
//	}*/
//		int i = number % 10;
//		if (i < 0)//直接锁定分离的一个数判断，因为-号是属于每一个数的，所以都要转换
//		{
//			count++;
//			i = -i;
//		if (count == 1)//计数器限制只打印一个，因为只用最开始分离的前面打印所以放在printf“i”的前面
//		{
//			printf("-");
//		}
//		}
//			printf("%d", i);
//
//		
//		
//		
//		number =number / 10;
//
//	}
//	
//}
//int main()
//{
//
//	int number = 0;
//	scanf("%d", &number);
//	reverse(number);
//
//
//
//	return 0;
//}

//int fun(int m1,int m2)
//{
//	int count = 0;
//printf("%d's reverse is: ", m1);
//	while (m1 != 0)
//	{
//		
//
//		int i = m1 % 10;
//		m1 = m1 / 10;
//
//
//		printf("%d", i);
//
//	}
//	printf("\n");
//	
//	
//	
//	
//	printf("%d's reverse is: ", m2);
//	while (m2 != 0)
//	{ 
//		
//		int i = m2 % 10;
//		if (i < 0)//直接锁定分离的一个数判断，因为-号是属于每一个数的，所以都要转换
//		{
//			count++;
//			i = -i;
//		if (count == 1)//计数器限制只打印一个，因为只用最开始分离的前面打印所以放在printf“i”的前面
//		{
//			printf("-");
//		}
//
//		}
//	m2 =m2 / 10;
//	if(i!=0)
//	printf("%d", i);
//
//
//		
//		
//		
//		
//
//	}
//	
//}
//int main()
//{
//
//	int m1, m2;
//	printf("Input m1: ");
//	printf("Input m2: ");
//	scanf("%d%d", &m1,&m2);
//	fun(m1,m2);
//
//
//
//	return 0;
//}

//long fact(int x)
//{
//	int m = 0;
//	int i = 0;
//	int n = 0;
//	int sum1 = 1;
//	int sum2 = 1;
//	int sum3 = 1;
//	
//
//	if (x == 2)
//	{
//		printf("Enter m: ");
//		printf("Enter n: ");
//		scanf("%d%d", &m, &n);
//		for (i = 1; i <= n; i++)
//			sum1 *= i;
//		for (i = 1; i <= (n - m); i++)
//			sum3 *= i;
//
//		printf("A(%d,%d)=%d", n, m, sum1/sum3);
//	}
//
//	if (x == 1)
//	{
//		printf("Enter m: ");
//		printf("Enter n: ");
//		scanf("%d%d", &m, &n);
//		for (i = 1; i <= n; i++)
//			sum1 *= i;
//		for (i = 1; i <= m; i++)
//			sum2 *= i;
//		for (i = 1; i <= (n - m); i++)
//			sum3 *= i;
//
//		printf("C(%d,%d)=%d", n, m, sum1 / (sum2 * sum3));
//
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("  1-Combination\n  2-Permutation\n====================\n");
//		
//		
//	printf(" Please Select(1,2): ");
//   scanf("%d", &n);
//	fact(n);
//
//
//
//	return 0;
//}
//int fac(int n)
//{
//	
//	/*i++;
//	
//	sum *= i;
//	if (i == n)
//	{
//			printf("%d", sum);
//	}
//	fac(n,i,sum);*/
//	//这样嵌套递归运行时间过长，不行的，所以在主函数里调用函数递归更好
//	//算法太low,像递归最好就是要找出n与表达式的规律，这样就能很好的解决问题
//	if (n >= 1)
//	{
//		return n * fac(n - 1);
//	}
//	else
//		return 1;
//	//利用return 来赋值，同时利用了n的性质，通过n-1来达到类似循环的效果
//	//0时，return 1,值为1
//	//1时,1*fac(0)=1*1=1
//	//2,2*1 =2
//	//3*2 =6
//	//4*3*2
//	//5*4*3*2
//	//...
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	fac(n);
//	printf("%d", fac(n));
//
//
//
//
//	return 0;
//}
//

//int sum(int x)
//{
//	int i = 0;
//int sum = 0;
//	while(x != 0)
//	{
//		i = x % 10;
//		sum += i;
//		x = x / 10;
//	}
//	printf("%d", sum);
//}
//int main()
//{
//
//int n = 0;
//scanf("%d", &n);
//sum(n);
//	
//
//
//
//
//	return 0;
//}
//double fact(int m,int n)//传输的顺序不能反，因为传给函数的都是一一对应位置的！
//{
//	
//	int i = 0;
//	int sum1 = 1;
//	int sum2 = 1;
//	int sum3 = 1;
//
//
//	for (i = 1; i <= n; i++)
//		sum1 *= i;
//	for (i = 1; i <= m; i++)
//		sum2 *= i;
//	for (i = 1; i <= (n - m); i++)
//		sum3 *= i;
//
//	printf("result=%d", sum1 / (sum2 * sum3));
//}
//	
//	
//			
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("Enter m: Enter n: ");
//	scanf("%d%d", &m, &n);
//	fact(m,n);
//	
//
//
//
//	return 0;
//}
//

//void  printArray(int  a[], int  n) {
//    int i = 0;
//    for (int i = 0; i < n; i++)
//        printf("%2d", a[i]);
//    printf("\n");
//}
//void  setArray(int  a[], int  n) {
//    int i = 0;
//    printf("Input %d integers:",n);
//    for (int i = 0; i < n; i++)
//        
//        scanf("%d", &a[i]);
//}
//int search(int list[], int n, int x) {
//    int mark = -1, j;
//    for (j = 0; j < n; j++)
//        if (list[j] == x)
//            mark = j;
//    return mark;
//}
//
//int  main() {
//    int  a[10], n, r, x;
//    printf("Input n:");
//    scanf("%d", &n);
//    setArray(a, n);
//   
//    scanf("%d", &x);
//    r = search(a, n, x);
//    if (r >= 0)
//        printf("Input x:index = %d\n", r);
//    else
//        printf("Input x:Not found\n");
//}
//
//factorsum(int number,int m,int n)
//{
//	int i = 0;
//	int sum = 0;
//	for (number = 1; m <= number && number < n; number++)//number++会在前一位加到最大，所以不用相等
//	{
//		int sum = 0;//每次的sum要重置！
//		for (i = 1; i < number; i++)//0不能作除数！
//		{
//			if (number % i == 0)
//			{
//				sum += i;
//			}
//			
//		}
//		if (sum == number)
//		{
//				printf("%5d", number);//不要return了,直接在函数里打印就能避免只能返回一个值
//		}
//	}
//	 
//		
//}
//int main()
//{
//	int m, n;
//	int number = 0;
//	printf("Input m: Input n:");
//	scanf("%d%d", &m, &n);
//	factorsum(number,m,n);
//	//printf("%5d", factorsum(number, m, n));//这里不要引用形参，要直接用函数！
//	//不要用return,number不会一直储存这样只能返回一个值！
//
//
//
//
//	return 0;
//}
//
//
//		
//	
//int even(int n)
//{
//	if (n > 0)
//	{
//		if (n % 2 == 0)
//			return 1;
//		else
//			return 0;
//	}
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int sum = 0;
//	printf("Input integers: ");
//	scanf("%d", &n);
//	while (n > 0)
//	{
//		//scanf("%d", &n);//顺序出问题了,你前面有个scanf,这里又来一个
//		/*even(n);*///可以不用写，因为条件判断已经可以进入函数了
//		if (even(n) == 0)
//			
//		{
//			sum += n;
//		}
//		scanf("%d", &n);
//	} 
//		//m = n;//用m存放n的值避免n被重新赋值时冲掉了值的大小
//		////错了,return的量只会返回给函数，不影响实参！
//		
//	printf("The sum of the odd numbers is %d", sum);
//
//
//
//
//
//	return 0;
//}
//countdigit(number, digit)
//{int i = 0;
//	while (number != 0)
//	{
//		i = number % 10;
//		if (i == 2)
//		{
//			digit++;
//		}
//		number = number / 10;
//	}
//	printf("Number of digit 2: %d", digit);
//}
//
//int main()
//{
//	int number, digit = 0;
//
//	printf("Enter an integer: ");
//	
//
//	scanf("%d", &number);
//countdigit(number, digit);
//
//
//
//
//	return 0;
//}
//is(int number,int m,int n)
//
//{
//	int i = 0;
//	int count = 0;
//	for (number = m; number <= n; number++)//如果都用number,后面的计算会让number改变，循环就乱套了.
//	{int sum = 0;
//	count = number;
//		while (count != 0)
//		{
//			i = count % 10;
//			sum += i * i * i;//又忘重置sum了
//			count =count / 10;//
//			
//		}
//		if (number == sum)
//		{
//			printf("%d\n", sum);
//			
//		}
//
//	}
//
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//
//int number = 0;
//	printf("Input m: Input n : ");
//	scanf("%d%d", &m, &n);
//	is(number,m,n);
//
//		
//
//
//
//
//	return 0;
//}
fact(int n)
{
	int i = 0;
	int sum = 1;
	float e = 1;
	for (i = 1; i <= n; i++)
	{
		sum *= i;
		e += 1.0000 / sum;
	}
	printf("e=%.4f", e);
}
int main()
{
	int n = 0;
	printf("Input n: ");
	scanf("%d", &n);
	fact(n);




	return 0;
}







































