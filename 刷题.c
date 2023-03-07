
#include <stdio.h>
#include <stdlib.h>
//顺子日期 
int main(int argc, char *argv[])
{
  int sum=0,m,d,dmax;
  for(m=1;m<=12;m++)//用循环添加数据：月份
  {
    if(m==2)//2022不是闰年，所以28
    {
      dmax=28;
    }
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)//用if限定最高日期先
    {
      dmax=31;
    }
    if(m==4||m==6||m==9||m==11)
    {
      dmax=30;
    }
    for(d=1;d<=dmax;d++)//添加日期，遵循从大到小，小数据优先遍历
    {  //这一块是前三个的数字比对          这一块是后三个数字的比对
      if((m/10==(m%10)-1&&m%10==(d/10)-1)||(m%10==(d/10)-1&&d/10==(d%10)-1))
      //又忘了这个技巧，取整取模来拆分数据，我们不必想着输入一个数字，只要拿一个个数字比对就行了
      //减一就是为了和上一个数字相等，假设拿01/23来讲，我们划为两部分讨论，第一是012这三个数字
      //再就是123，显然都成立。要分开这三个数字，就拿取整取模比对就可以了
      {
        sum++;
      }
    }
  }
  printf("%d",sum);
  return 0;
}


//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//int main()
//{
//	int a, b, n;
//	int m = 0;
//	float x;
//	scanf("%d%d%d", &a, &b, &n);
//	x = n / (5.00 * a + 2.00 * b);//保留两位足以
//	if (x > (int)x)
//	{
//		x = (int)x + 1;
//	}
//	else
//	{
//		x = (int)x;
//	}
//	if (n - ((int)x - 1) * (5 * a + 2 * b) <=5*a)//仔细啊逻辑！别让整数僵化你的思维
//	{
//		while (a * m <= n - ((int)x - 1) * (5 * a + 2 * b))
//		{
//			m++;
//		}
//	}
//	else
//	{
//		while (5*a + b*m <= n - ((int)x - 1) * (5 * a + 2 * b))
//		{
//			m++;
//		}
//	}
//	int sum = ((int)x - 1) * 7 + m;
//	printf("%d", sum);
//
//
//	return 0;
//}
////63分，还有三分之一错的
////总结一下：1，赋值不是打印，2.不要把一个数据的结果来直接用，一定要注意，是未知量就直接用未知量，
//
////改进学习
//#include<stdio.h>
//long main()
//{
//	long a, b, n;
//	scanf("%ld %ld %ld", &a, &b, &n);
//	if (n % (5 * a + 2 * b) == 0)//当n能够整除5*a + 2*b（七天）时
//		printf("%ld", (n / (5 * a + 2 * b)) * 7 + 0);
//	else if (n % (5 * a + 2 * b) <= a)//当n能够整除（七天）然后剩下的题少于或者等于一天时 
//		printf("%ld", (n / (5 * a + 2 * b)) * 7 + 1);
//	else if (n % (5 * a + 2 * b) <= 2 * a)//以此类推
//		printf("%ld", (n / (5 * a + 2 * b)) * 7 + 2);
//	else if (n % (5 * a + 2 * b) <= 3 * a)
//		printf("%ld", (n / (5 * a + 2 * b)) * 7 + 3);
//	else if (n % (5 * a + 2 * b) <= 4 * a)
//		printf("%ld", (n / (5 * a + 2 * b)) * 7 + 4);
//	else if (n % (5 * a + 2 * b) <= 5 * a)
//		printf("%ld", (n / (5 * a + 2 * b)) * 7 + 5);
//	else if (n % (5 * a + 2 * b) <= 5 * a + b)
//		printf("%ld", (n / (5 * a + 2 * b)) * 7 + 6);
//	else //最后这种情况需要去掉等于 
//		printf("%ld", (n / (5 * a + 2 * b)) * 7 + 7);//这是不满七天的量但要七天的
//	return 0;
//}
//
////1.评测全部不能用int,用Long
////2.用取模的方法表示还剩最后一个星期时几天的题量分别讨论，
////用取整的方法来记录有整的几个星期，不够的就单独加一天两天以此类推?


//#include<stdio.h>
//#include<stdlib.h>
//
//long main()
//{
//	long n,i,middle;
//	scanf("%ld",&n);
//
//	if(n%2!=0)
//	{
//		middle=(1+n)/2;
//		for(i=1;i<=middle;i++)
//		     {
//			 	printf("%ld\n",(n-1)*2-2*(i-1));//你这个式子是1开始的所以循环改1
//			 }
//			 
//			 for(i=middle-1;0<i;i--)
//			 {
//			 printf("%ld\n",(n-1)*2-2*(i-1));
//			 }
//			 
//		
//	}
//	
//	else
//	{
//		middle=n/2;
//			for(i=1;i<=middle;i++)
//					     {
//						 	printf("%ld\n",(n-1)*2-2*(i-1));
//						 }
//						 
//						 for(i=middle;0<i;i--)
//						 {
//						 printf("%ld\n",(n-1)*2-2*(i-1));
//						 }
//					 
//	}
//	
//	
//	return 0;
//}
//
////总结:1.分奇偶讨论，决定中间的数据要不要打印
////2.研究规律，总结普遍规律
////3.根据对称性质，打印一半倒过来打印就行了
////4.注意你的公式是从1还是0开始，还有注意核对循环条件是否没问题

//1：如何是使得差值最小呢，我们可以利用dp的思想，要使得整体最小，那么组成他的各个部分也是最小，那么问题就变成了，如何使得各个部分的值最小；
//   2：每个部分有对应位上的差值组成，那么，要使得这个差值乘的进制数尽可能小就可以了；
//   3：如何使得进制尽可能小呢，进制的区间在2~N之间，那么只需要在这个区间之内，选取能包含a[i]和b[i]两个值的最小进制值就ok了，至此，思路就出来了

//如 1           3          2
//第三数位  第二数位    最低数位
#include<stdio.h>
int a[100005]={0};//转码可能数据很大
int b[100005]={0};
int mod=1000000007;
int max(int a,int b)
{
	return (a>b?a:b);
}

int main()
{
    int Ma,Mb,N,i;//其实N是有用的，只是测试数据没有非法数据，完整的话还要加判断输入是否非法才行的
    scanf("%d%d",&N,&Ma);
    for(i=Ma;i>=1;i--)
    //倒序打印是因为开头输入最高位数，数组下标和位数匹配好理解，至于1也是，舍去了0下标
    {
		scanf("%d",&a[i]);
		//又开始不写&
	}
	 scanf("%d",&Mb);
	    for(i=Mb;i>=1;i--)
	    {
			scanf("%d",&b[i]);
		}
		int jz[100005]={0};
		for(i=Ma;i>=1;i--)
	{
		jz[i]=max(max(a[i]+1,b[i]+1),2);//选取最小进制
		//选取最大的进制是因为A与B同进制，因此两者数据间只有选最大的那个数据才能保证两者相同
		//而题目意思中的十进制输入只是我们认为输入的数据，但是题设中的意思是我们实际上不知道它是什么进制
		//而为了所求相减最小，我们就选最小的进制，也就是保证两者相同时选择最小的进制，也就是加1.
		//加1是因为如果仅仅赋值输入的数据不可能的，注意有进位这个东西，不加1数据早就进位了
	}	
	long long sum=0;//数据大用长字符
     for(i=Ma;i>=2;i--)
     {
//	 	sum+=((sum+a[i]-b[i])*jz[i-1])%mod;
       sum=((sum+a[i]-b[i])*jz[i-1])%mod;
       //意思是将最高位的数据一直往低位转换，往上进就除自身的进制，往下进就乘低一位的进制
       //i到2截至是因为最低进位时不需要乘进制，单独讨论。
       //sum也要放进去参与进位是因为首先是循环，上一次的sum的数据也在这次的循环中，而上一次sum的数据当然也要一同参与进位
       //还有就是输入数据是分每一个进位而不是连成一起，因此要循环检测各个数位来转换进制，同时也要将前面的数据相加和继续转码！
       //据题设的理解，认为是每转换一次进制就要取一次模才能成功转化进位
       //不是很清楚，希望明白的大佬说一下
	 	//(+=)不等于(=),如1被赋值为3，和1加上3是不同的！
	 }
		sum+=(a[1]-b[1]);//最低位时直接导入数据
		sum%=mod;//转化进制
		printf("%lld\n",sum);
		
		return 0;
		
		
}
//首先，注意子矩阵是输入进数据的一部分
//输入进的数据位置是不能变的，是在这个固定的矩阵中选取其中小的矩阵！
//而不是输入进入数据然后随机排列！

//本文以示例数据作为参考
#include<stdio.h>
#include<stdlib.h>
int s[505][505];
int main()
{
	int n,m,k;
	 scanf("%d%d%d",&n,&m,&k);
	 for(int i=1;i<=n;i++)
	 {
	 	for(int j=1;j<=m;j++)
	 	{
		 	scanf("%d",&s[i][j]);
		 	s[i][j]+=s[i-1][j];
		 	//双循环插入数据，
		 	//加上前面的是因为相当于选取上下的矩阵使用，
		 	//详细见后续
		 }
	 }         
	 
	 long long int res=0;//长整型防止数据过大溢出
	 //long long 是其简写;
	 for(int i=1;i<=n;i++)//这个循环是为了选取单个数据的开头从哪里开始，如示例数据中的从第一行的1，或者是第二行的五
	 //如下标2的s数组将同列的下标1的数据也加起来，减去这个数据就相当于只有单个的第二行的数据
	 {
	 	for(int j=i;j<=n;j++)
		 //眼瞎，条件注意看清楚不要乱写！
		 //这一行是为了跳转选取行数，先选了下标1，然后2，不重复以此类推.
	   {
	   	for(int left=1,right=1,sum=0;right<=m;right++)//是<=！
	   	//right作为增加，left作为舍去，sum作为判断是否能同时选取多个数据，res为最终多少个矩阵
	   	//原理就是选取和舍去，如从1开始，满足条件，记为1，然后加上2同样不超过，所以继续记录，此时res等于三是因为，这两个数据现在是同时可以选中，因此分别
	   	//为单独的1和2，以及1和2一起成为一个矩阵的三种情况，后面的3，4也是排列组合成为十种。
	   	//而从第二行开始就是同时选取1和5这两个数据和后面的2、6尝试连结，没有超过k就排列组合，超过就删去1、5，剩下2、6，继续往下连结，重复操作
	   	//后面第三行就是1，5，9连在一起尝试连结，以此类推
	   	//而后面从第二行单独数据开始时后面同样重复，只是不再选取上一行的数据，从而达到全面查找矩阵的目的，如5，9绑在一起，参考图片。
	   	{
		   		sum+=s[j][right]-s[i-1][right];//这里是分单独检索
			   		   	while(sum>k)
			   		   	{
			   			   	sum-=s[j][left]-s[i-1][left];//这里是去掉前一个无用的数据，因为是子矩阵，不可能隔着连接，所以直接放弃，不计入
			   			   	left++;
			   			   	
			   			   }
			   			   res+=right-left+1;
			   			   //这里的加1其实是因为下标问题，因为要用到left作下标，0又没有存放数据只有1开始才有
						//因此不得不给left赋值上1，如果从0开始放数据，其实应该是res+=right-left;
					//而更清楚的展示从1开始应该是res+=right - (left + 1);才更准确
		            //至于为什么就是找规律
					//一开始从1，2，3，4
			        //得到的结果就有1,3,6,10，显然就是加下一个n即n+1的结果
					//其实就是n+(n+1),也就是加后一位下标的结果得到的个数s
					//-left就只是不计入这次的错位数据而已，因为right会自增，需要left来平衡
								   	                
		   }
		   
		   	
		   }
	   	
	   
		

	 }
	 printf("%lld",res);
	 
	 
	                 
	
	
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
int dp[10000005];
#define mod 1000000007
//不需要类型

//*分析：一开始想的是二维情况，就很难联想，甚至复杂许多，所以我们可以转化为一维思想，这样思考起来就轻松很多
//我们可以把两个单位面积看成一个，所以三个就是1.5个单位面积，再把画布变为1*N的模式，这样就很好解决了
//还有题设案例可以看出，不同颜色不同位置同形态摆放是不算的，问的是每个方块用不重复的形态摆放才成立
//（如横或者竖，不同方块随机的横竖只要不重复，拼好画布，都算成立)

int main()
{
int n;
scanf("%d",&n);
dp[1]=1,dp[2]=2,dp[3]=5;
//先导入2维的正确数据，因为本质上1维和2维的方式是不同的，
//只是我们给了2维的一个1维的环境。
for(int i=4;i<=n;i++)
{
	dp[i]=(dp[i-1]*2%mod+dp[i-3]*1%mod)%mod;//数据大就多取模
	//对于规律题目，就需要用上循环以及递推公式的思想
	//定单个方块情况为A，两个1.5情况为B
	//导入前三个数据后，现在我们一维的角度思考问题
	//分两种情况，单用一个单位面积的方块或者用2个1.5单位面积(因为1.5必须一次用两个才能补满）
	//dp是方法种类，因为A方块中放置同样的位置，在二维矩阵是不同的，有两种摆放方式
     //但是B在矩阵中都是占满高度的，所以只有一种摆放方式。
     //因为是一维，只有一行，根据(*分析)可以判断一维中两种方块交错着摆放还是统一摆放都是一致的
     //因此我们直接分为全部为一个方块和2个1.5面积的方块讨论
     //如四个方块的全部种类，A情况（i-1）就是三个方块的总情况*2
     //(因为单个方块有两种摆放方式所以2*2*2*2=dp[i-1]*2;
     //而B(i-3)只有一种摆放方式，故乘*1，类比A情况.
     //就单纯的用一维的角度看这个问题就行了，把dp[i-1]当作前面全是A的方块，把dp[i-3]当作全是B，
	 //剩下的带入二维的数据就变成二维了
}
	   printf("%d\n",dp[n]);
		

	 
	                 
	
	
	return 0;
}
//总结：用一维思想简化对二维的不同形态的讨论
//(仅用讨论I型方块的不同高度形态摆放即可，将复杂问题简化实现

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//int  main()
//{     int a[10000][10]={0};//雷
// int b[10000][10]={0};//排雷
//
//	  int n,m,count=0;
//	   scanf("%d%d",&n,&m);
//	   for(int i=1;i<=n;i++)
//	   {
//	   	for(int j=1;j<=3;j++)
//	   	{
//		   	scanf("%d",&a[i][j]);
//		   }
//	   }
//		
//for(int i=1;i<=m;i++)
//	   {
//	   	for(int j=1;j<=3;j++)
//	   	{
//		   	scanf("%d",&b[i][j]);
//		   }
//	   }
//	   
//	 for(int k=1;k<=m;k++)  
//	 {
//	 	for(int i=1;i<=n;i++)//这个需要每一个雷区的认真排查，你把循环逻辑想清楚，不要靠记忆！
//		 	   {
//					if(a[i][4]!=1)
//		 	   {
////						if((a[i][1]-b[i][1])*(a[i][1]-b[i][1])+(a[i][2]-b[i][2])*(a[i][2]-b[i][2])<=(b[k][3]*b[k][3]))
//                       if((a[i][1]-b[k][1])*(a[i][1]-b[k][1])+(a[i][2]-b[k][2])*(a[i][2]-b[k][2])<=(b[k][3]*b[k][3]))
//                       //对应排雷和它的半径想好再写
//							 	   	{
//											count++;
//											a[i][4]=1;//标记
//										}
//				}
//		 	   
//		 	   }
//	 }
//	 
//	 //自爆
//	          for(int i=1;i<=n;i++)//不认真分析乱写全错,用定一动一法则
//	          {
//			  		for(int j=i;j<n;j++)//单个循环无法满足全程遍历，应该用双循环,不需要等于N，不然会溢出,因为下面是i+1
//			  		//又开始条件乱写
//				  	 		 	   {//是i不是j！
//				  	 		 	   	if(a[i][4]!=a[j+1][4])//没爆和都爆了都不需要考虑了,而不相等就肯定可能使得另外一个爆
//				  	 		 	   	{
//										   	if((a[i][1]-a[j+1][1])*(a[i][1]-a[j+1][1])+(a[i][2]-a[j+1][2])*(a[i][2]-a[j+1][2])<=a[i][3]*a[i][3]||(a[i][1]-a[j+1][1])*(a[i][1]-a[j+1][1])+(a[i][2]-a[j+1][2])*(a[i][2]-a[j+1][2])<=a[j+1][3]*a[j+1][3])
//											   		 	   	//你看等于号又不写了，拜托关键步骤认真一点行不行？
//																   {
//											   						count++;
//											   						
//											   					}
//										   	
//										   }
//				  	 		 	   
//				  	 		 	   }
//			  }
//	 	 
//	 	 
//	 	 printf("%d",count);
//
//	return 0;
//}
//40分，内存不足，都是运行错误，你的代码正确，就是时间太长,占用内存大不够用，代码效率低复杂庞大数据无法解决。先放着先把，现在
//你无法处理这个问题，这需要学习c++或者java这种面对对象的才能完美实现，你的c是面对过程，效率明显低了吃亏


//动态规划
//李白打酒
#include <stdio.h>
#include <stdlib.h>
#define mod 1000000007
int main(int argc, char *argv[])
{
  //0斗没有意义，因为最后要看花，不可能有0斗遇店
  
  int n,m,i,j,p;//n酒m花
  int a[101][101][101];//根据题设最大来设大小，用三维数组
  a[0][0][2]=1;//初始状态
  //设1时相当于考虑开始时酒有两斗的情况，只有开始遵循这点才能算一种可能,相当于标记
  scanf("%d%d",&n,&m);
  for(i=0;i<=n;i++)//打酒
  {
//    for(int j=0;i<=m;j++)//你看又是条件青光眼，真的牛逼
     for(int j=0;j<=m;j++)//花
    {
      for(p=0;p<=m;p++)//酒量//循环上限是m是因为酒量和看花次数要相等
      {
        if(p%2==0&&p>0&&i>=1)//打酒
        {
          a[i][j][p]=(a[i][j][p]%mod)+(a[i-1][j][p/2]%mod);
        }
        if(j>0)//看花
        {
           a[i][j][p]=(a[i][j][p]%mod)+(a[i][j-1][p+1]%mod);
           //不写成 a[i][j][p]+=(a[i][j-1][p+1]%mod)是为了取模，实际上就是加了前面的数组
           //看一次花少一斗，符合逻辑连接之前的数组，相当于一条线，就为一种情况，
           //要清楚因为循环是递增的，所以左边是后面的情况，右边是前面的情况
           //如a[0][0][2],那么它看花就是a[0][1][1]
           //从a[0][1][1]推a[0][0][2]，而不是前面推后面，所以描述要倒过来
           //等于1是标记也是计数，只有一直传下来到达最终的a[n][m][0]就统计为一种情况
           //等于0说明开始时不是两斗酒
           //这两个条件都是因为后面推前面的必要条件，随便举一个都能知道是错的
           //最典型的就是p%2==0,假如后面的数组为[1][0][3]，推前面为[0][0][1.5]
           //这是不存在的，所以要舍弃,其他同理
           
        }
        //这两个顺序没有关系，随意
      }
    }
  }
  printf("%d",a[n][m][0]);
  //循环遵循从简单到复杂，优先循环最简单的情况
  //多重循环就是为了讨论完所有情况，最后回到a[n][m][0]时就加1.
  return 0;
}

//动态规划
#include <stdio.h>
#include <stdlib.h>
#define mod 1000000007
int main(int argc, char *argv[])
{
  //0斗没有意义，因为最后要看花，不可能有0斗遇店
  
  int n,m,i,j,p;//n酒m花
  int a[101][101][101];//根据题设最大来设大小，用三维数组
  a[0][0][2]=1;//初始状态
  //设1时相当于考虑开始时酒有两斗的情况，只有开始遵循这点才能算一种可能,相当于标记
  scanf("%d%d",&n,&m);
  for(i=0;i<=n;i++)//打酒
  {
//    for(int j=0;i<=m;j++)//你看又是条件青光眼，真的牛逼
     for(int j=0;j<=m;j++)//花
    {
      for(p=0;p<=m;p++)//酒量//循环上限是m是因为酒量和看花次数要相等
      {
        if(p%2==0&&p>0&&i>=1)//打酒
        {
          a[i][j][p]=(a[i][j][p]%mod)+(a[i-1][j][p/2]%mod);
        }
        if(j>0)//看花
        {
           a[i][j][p]=(a[i][j][p]%mod)+(a[i][j-1][p+1]%mod);
           //不写成 a[i][j][p]+=(a[i][j-1][p+1]%mod)是为了取模，实际上就是加了前面的数组
           //看一次花少一斗，符合逻辑连接之前的数组，相当于一条线，就为一种情况，
           //要清楚因为循环是递增的，所以左边是后面的情况，右边是前面的情况
           //如a[0][0][2],那么它看花就是a[0][1][1]
           //从a[0][1][1]推a[0][0][2]，而不是前面推后面，所以描述要倒过来
           //等于1是标记也是计数，只有一直传下来到达最终的a[n][m][0]就统计为一种情况
           //等于0说明开始时不是两斗酒
           //这两个条件都是因为后面推前面的必要条件，随便举一个都能知道是错的
           //最典型的就是p%2==0,假如后面的数组为[1][0][3]，推前面为[0][0][1.5]
           //这是不存在的，所以要舍弃,其他同理
           
        }
        //这两个顺序没有关系，随意
      }
    }
  }
  printf("%d",a[n][m][0]);
  //循环遵循从简单到复杂，优先循环最简单的情况
  //多重循环就是为了讨论完所有情况，最后回到a[n][m][0]时就加1.
  return 0;
}

//卡片
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n,sum=0;//n记录多少个数字，sum记录使用1的个数
  for(n=1;;n++)//自增，一直拼数字
  {
    int i=n;//用i来运算，不然n会因为取整输出错误数据
    while(i!=0)
    {
      if(i%10==1)
      {
         sum++;
      } 
      if(sum>2021)
      //取到2022个1时，就把n减一个数字，这样就是最多的数字了
      {
        n--;
        printf("%d",n);
        return 0;//直接return，防止死循环
      }
     i/=10;
    }
    //不断地取整取模实现1个个数位上的数字的比对
  }
  
}

//c++(看的懂就行)
#include <iostream>
using namespace std;

int main()
{
  int i;
  int arr[10];
  for(i=0;i<10;i++){
    arr[i]=2021;//记录0-9这10张卡片的数量，开始都是2021张
    
  }
  for(i=1;;i++){//由于不知道到i的边界值，省略，会一直执行
  //i代表当前拼的数字
    int x=i;    //用x来存放每一个i的值，防止i值的改变
    while(x){
      if(arr[x%10]==0){//当搜索到有一张卡片的数量剩余为0张(没有卡片)的时候，输出前一个i的值，也就是i-1，并退出
        cout<<i-1;
        exit(0);
      }  
      arr[x%10]--;  //每一张卡片数量减少1
      x/=10;
    }
  }
  return 0;
}
#include <stdio.h>
#include <stdlib.h>

//int main(int argc, char *argv[])
//{
// int sum=0;
// 
// for(int x=0;x<20;x++)
// {
//   for(int y=0;y<21;y++)
//   {
//      for(int i=0;i<20;i++)
// {
//   for(int j=0;j<21;j++)
//   {
//     if(i!=x&&y!=j)
//     {
//       sum++;
//     }
//
//   }
// }
//
//   }
// }

//你的算法太天真了，不是x,y坐标都不同就一定 是新的直线了，随着x,y的增大，更多的点重合在一起，斜着的和更斜的多个重合也是有可能的，
//因此你这样根本解决不了问题，不是所有题目的规律都是这么好找的！
// printf("%d",sum+41);
//  return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#define N 50000

//未解决，只能记着怎么做先
int M(int a, int b){//这里应该是斜率重复的筛除
  for(int i = a; i >= 1; i--){
    if(a % i == 0 && b % i == 0){
      if(i == 1)
        return 1;
      else 
        return 0;
    }
  }
}

int main(int argc, char *argv[])
{
  int x1 = 0, x2 = 0, y1 = 0, y2 = 1, m = 0, flag = 0;
  float a[N], b[N], k, c;
  for(int i = 1; x1 != 0 || y1 != 20; i++){
    if(x2 == 19 && y2 == 20){
      y1 += (x1 + 1) / 20;
      x1 = (x1 + 1) % 20;
      y2 = y1 + 1;
      x2 = 0;
    }
    else
    {
      y2 += (x2 + 1) / 20;
      x2 = (x2 + 1) % 20;
    }
    if(x1 == x2)
      continue;
    if(!M(y2 - y1, x2 - x1))
      continue;
    else{
      if(!(2 * x1 - x2 <= 19 && 2 * x1 - x2 >= 0 && 2 * y1 - y2 >= 0)){
        m++;
      }
    }
  }
  printf("%d", m+41);
  // 请在此输入您的代码
  return 0;
}

//货物摆放
#include <stdio.h>
#include <stdlib.h>

//三个数，循环分割数字的思想，循环可以实现所有情况，取整分割数字，取模=0看看是否能整数分割，
//然后单个数字比较if判断即可
//核心就是分割加判断
#include<stdio.h>
int main()
{
    long long n=2021041820210418;//数字很大用
    long long l,w,h,s,k,sum=0;//sum赋值0!
    for(l=1;l*l*l<=n;l++)
    {
      if(n%l==0)
      {
        s=n/l;
        for(w=l;l*w*w<=n;w++)//w=l因为l给w已经探测过能不能整除了，所以就没有必要从头开始遍历
        //       l是前面分割的，w是现在准备分割的
        {
          // if(n%w==0),err，是切割后的数再切，不是原来的！
          if(s%w==0)
          {
            k=n/l/w;
            if(l==w&&l==k)
             sum++;
             else if((l==w&&l!=k)||(l==k&&l!=w))//严谨一点写两个条件
             sum+=3;
            else
             sum+=6;//这些代码都要建立在你有k的基础上！！！，要放进if条件去！
            
          }
          

          

        }
      }
    }
   printf("%lld",sum);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b)
{
  if(a%b==0)
  return b;
  else
  return gcd(b,a%b);
  //辗转相除得最大公约数
  //就是不断地拿a%b后面的数继续和后面的a%b比对
  
}
int gbs(int a,int b)
{
  return (a*b)/gcd(a,b);
  //最小公倍数=a*b/最大公约数
}

int min(int a,int b)
{
  return a<b?a:b;
}
int main(int argc, char *argv[])
{
  int i,j;
  int f[2022]={0};
  for(i=1;i<=2021;i++)
  {
    for(j=i+1;j<=i+21&&j<=2021;j++)//是j+1,自己不能连住自己的,1和1是没有路径的
    //思路就是从1开始一直到上限21
    //然后2到22
    //再3到23....一直探索赋值
    {
      if(f[j]==0)
      {
        f[j]=f[i]+gbs(i,j);
        //这是探索开拓赋值
      }
      else
      {
        f[j]=min(f[j],f[i]+gbs(i,j));
        //这里是比较最小的值.
      }
    }
  }
  
//循环的目的
//1.计算出总长度(毕竟不能快速直接得出1->21的长度)
//2.同时比较了最小路径
//注意i是固定的，一直动的是j,所以f[i]与f[j]不一定是前后关系，其实就是全面比对了
//i会和后面所有的数字比对路径长度，终点就是f[j]这个位置，
//f中其实一直都是到达该位置到达终点j的位置，因此每次都要加上f[i](前面路径的长度)
  printf("%d",f[2021]);
  return 0;
}
//收获：
//1.用循环(定一动一)来实现依次遍历从而重复用一个数组赋值，不同下标来实现路程合并和比较最小路径再赋值
//2.辗转相除和最小公倍数求法

//时间显示-
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  long long n;
  int HH,MM,SS;
  scanf("%lld",&n);
  //又不写&!屡教不改活该错,这次%都能漏了，粗心会让你一无所获,写代码你就继续犯病把
  n/=1000;
  HH=n/60/60%24;
  MM=n/60%60;
  SS=n%60;
  printf("%02d:%02d:%02d",HH,MM,SS);

  return 0;
}
//总结：思路正确，问题就是经常漏符号，一定要改正这个粗心的毛病，要有检查语法的习惯
//多使用调试测试，结果出问题就一定检查语法
//注意打印补齐，02d的作用是保持两位输出，当没有数字时用0补齐
//数字过大记得使用long long

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//也是动态规划
//砝码重量
int main(int argc, char *argv[])
{
  int a[101][100001]={0};//最好初始化0
  //题设上限设空间
  int w[101];//用于存放单个砝码的重量
  a[0][0]=1;
  //相当于信标和必备条件，所有情况都必须建立在开始是两边为0的情况
  //将两边都链接起来
  int n,sum=0,ans=0,i;//sum，ans没有初始化！！!(细节扣分)
  scanf("%d",&n);
  for( i=1;i<=n;i++)
  {
    scanf("%d",&w[i]);
    sum+=w[i];//所有砝码重量的上限，用来检测循环上限。
  }
for(i=1;i<=n;i++)//砝码个数
//循环里面声明的i仅对循环里面有效
{
  for(int j=0;j<=sum;j++ )
  //sum作为上限，一一检索每一个重量的可能
  //以a[0][0]=1作为引导，不可能的重量一定赋值为0
  //这里j不能从1开始 必须从0 第一件物品不可能称出0 但是前i件可能称出0（两边重量相等时）
  //而且可能牵连到其他数值，反正多遍历一个也不吃亏
  {
    a[i][j]=a[i-1][j]+a[i-1][abs(j-w[i])]+a[i-1][j+w[i]];
    //     什么都不放       左边放            右边放
    //不用管这个加号，就是只要其中有一个那么目的就达成了，
    //我们的目的是为了探寻j下标点亮了多少个，
    //因为i是砝码，j是重量,目的就是为了看这个重量能不能成立。
    //      绝对值是因为负号只是代表方向，大小和正的是一样的
  }
}
//程序流程就是从1个砝码开始放，连接起0个砝码的情况(用信标)，类推

 for(i=1;i<=sum;i++)
 //为何不能i=0?
 //题设示例本可以什么都不放测出重量0，但是示例中没有，说明不包含0重量
 {
   if(a[n][i])
   //直接到n是因为我们本来就是要统计最终有多少个上限重量的个数
   //前面的计算都把1-n都叠加起来了
   //就以情况为例子，最多情况就可能有所有砝码总重量这么多，因为其他组合都算重复了
   //题目要求是不重复的情况，我们用总重量作为循环上限，规避了重复的情况，也实现了全面遍历.
   //(有就加1，没有就不加,反正最多就是总重量这么多情况
   {
     ans++;

   }
 }
 printf("%d",ans);
  return 0;
}
//经验
//不会用重量上限规避重复，设置情况上限,复杂问题很难直接解决的一定要用动态规划
//动态规划就是:设置起点标记1
//2.后面与前面用题目情景连接（用式子）
//3.循环一定要逐个检索

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char *argv[])
//{
//  int a[101];//记录每个砝码
//  int b[200][200];减去多个的数组
//  int n,sum;
//  scanf("%d",&n);
//  for(int i=1;i<=n;i++)
//  {
//    scanf("%d",a[i]);
//
//  }
//   for(int i=1;i<=n;i++)
//  {
//    scanf("%d",b[0][i]);
//
//  }
//for(int i=1;i<n;i++)//i不等于n!
//{
//  for(int j=i+1;j<=n;j++)
//  {
//
//  }
//}
//
//  return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
    long n, i, t = 100000000;
    ////x数据大你也放int 真服了
    //以后记住，如果不确定数据大不大，宁愿放long long也不放int
    //i会使得大的数据溢出错误，自己放int还是long一定要想好,包括循环里的变量
    int num = 1, flag = 0;
    long long int x;//数据大
    scanf("%ld", &n);
    if (n == 1)
    {
        printf("1");
        return 0;
    }
    for (i = 1; flag != 1; i++)
        //i就是当前数字的行位
        //注意i的大小，一开始是1，当这一次循环结束之后下一次就是二
        //所以当循环结束之前，使用的i其实是i-1,结束后才是真正的i。
    {
        
        num = 1;
        //数字在该行中的位置
        for (long j = 1; j <= i / 2 && j < t; j++)
            //j的作用就是将i分为两半，用于Cj,表格中就是Cj的规则,j最大不过i的一半
            //                             i            i
            
        {
            num++;//每次循环加1，相当于往右移一位
        //j与Num匹配，第二位就j=1,第三位就j=2
            x = 1;
            for (long k = 0; k < j; k++)
                x *= (i - k);
            for (long k = 0; k < j; k++)
                x /= (k + 1);
            //其实是排列组合的C几几.
            //这是表格中发现的规律详情看图
            //表格中每一个需要遍历的数（标黄的）,都符合C几几的规则
            
            if (x == n)
            {
                flag = 1;
                break;
            }
            if (x > n)//本可以不写，但是会超时
            {
                t = j;//数字只会因为循环越来越大
                //发现这一行的这个数超过我要的，我就跳出循环到下一行，
                // 因为后面只可能更大或者对称，根本不可能会有
                //而根据表格增长倍数，肯定不会超过当前的j，这是优化算法
                break;
            }
        }
        if (t == 2)//本可以不写，但是会超时,跟前面一样的，只不过减少了运行时间
        {
            num = 2;
            i = n + 1;
            break;
        }//不写超时，提前退出程序，最坏的情况,观察三角形可知，最坏的情况只可能是第二个数字出现.
        //如果j=2就超过了，这种就是第三位就超过了，那只可能在数位第二出现所以就是下一行.

        //优化算法很重要！特别是数据庞大的时候，其实x>n和t==2这两个本来都可以不用写，但是运行时间就会很长
        //超时就输出不了答案，因此就要学会技巧优化算法，主要还必须对模型理解的足够深刻才行
    }
    //最后循环结束完毕后就执行了i++,如执行时i一直等于4，结束循环以后回过循环时就会加上这个++
    //变为5，即i(该行数）

    //i换行，j，k,为c几几服务，num用于确定当前数字下标
    printf("%ld", num +   i*(i-1) / 2);
    //这个是上面的面积，实际上是梯形，因为上面1就相当于长度为1，而不是三角形，所以实际上就是梯形面积
    //((i-1)+1)*(i-1)/2,也可以理解为等差数列
    return 0;
}




 //二分法解
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

long C(long a,long b,long n)
{
  long res=1;//一开始要赋值为1！
  for(long i=a,j=1;j<=b;i--,j++)
  {
    res=res*i/j;
  if(res>n)
  {
    return res;
  }//放循环里判断！优化算法
  //一旦这个res在循环中的结果已经有了超过n的就马上退出，不要再
  //等它全部遍历完返回再判断！
  }

  return res;

}

    
	int main(int argc, char *argv[])
	{
	  long n,k;
	  scanf("%ld",&n);
	  for(k=16;k>=0;k--)
	  //k代表需要遍历列数
	  //k--能写成k++，肌肉记忆是吧?
	  {
	    long l=2*k,r=n;
	    //l是需要遍历的行数,
	    //这里等于2k仅仅只是满足最大情况
	    //当最大情况不为所求时就用二分法
	    //矫正行数，这就是为什么二分法只分行数
	    //列不变，也是定一动一.
	    //int mid=(l+r)/2;
	    //这个要放里面，因为每次二分都是不同位置的！
	   
    while(l<=r)
 //二分法
       //l是左边界，r是右边界(r是要找的数字)
   //是寻找位置，我们很多信息不知道
          //但可以知道的就是，所寻找的数字永远
          //大于等于所在行，所以可以设边界
    {
       long mid=(l+r)/2;//划分中点
       //我们的二分法是为了寻找所求数字的
       //所在的行和列，而不是直接找到该数字！
       
      if(C(mid,k,n)==n)//mid是所寻找的行不是数字
      //中点恰好是要找的行
	        {
	          printf("%ld",(1+mid)*mid/2+k+1);
	          //这里是等差数列，每一行的全部是
	          //d=1的等差，1+2+3+......
	          //所以(a1+an)*n/2
	          //至于为什么加k+1,因为我们的排列组合规律都是
	          //因为下标从0才有的结论，所以其实是往下推了一行
	          //还要加上最后我们遍历到的位置(看图)
	          return 0;
      
      }
      else if(C(mid,k,n)>n)
      r=mid-1;
      //得数太大就只可能在左边一堆，
      //然后循环再分一次
      else
      l=mid+1;

    }
    //l>r就退出，因为l会一直往右，k会往左，
    //当l<=r时说明全部检索完毕没找到，就会进入下一个k
  }
  return 0;
}

//无法转换，放弃用c语言做(关键是无法做到数组与字符随意切换)
//循环字母有繁琐而且大概率超时，放弃,用c++解决
//c语言不像c++,要根据数据大小写int还是long!

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////strcmp等函数使用
//int dir[] = {3,-3,1,-1};
//char set[10000];
//char str[10] = {'A','B','C','D','E','*'};//放外面避免递归干扰，主副函数都可以用
//void f(int x)
//{
//	//回忆，直接输入字符数组的名字就是整串字符比对 err
//	//c语言无法直接达到直接将所有字符串直接合并的操作
//
//	char a=str;
//	int i=-1;
//	do{
//		i++;
//		if(set[i]==str) 
//		return;
//		
//	
//		
//			
//	}while(set[i]!='\0');
//	//单双引加\0!
//	
//	strncmp(set[i],str,7);
//	
//	
//	
//    
//	for(int i=0;i<4;i++)
//	//循环加入的四种情况
//	{
//		int xx = x + dir[i];
//		if(xx>=0 && xx<=5){
//			char ch = str[x];
//			str[x] = str[xx];
//			str[xx] = ch;
//			f(xx);
//			ch = str[x];
//			str[x] = str[xx];
//			str[xx] = ch;
//		}
//		//递归的思想就是，我把所有qing'kuang
//	}
//}
//int main(){
//	int j=-1;
//	
//	f(5);
//	int n;
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		char st[10];
//		scanf("%s",&st);
//		do{
//				j++;
//				if(strcmp(set[i],st)==0) 
//					{printf("1");
//					return 0;
//					}
//			}while(set[j]!="0");
//	
//		printf("0");
//	}
//	return 0;
//} 

//c++
//移动字母
//本体解决方法也是二维变维，来简化字母移动
#include<bits/stdc++.h>//包含所有c++头文件
using namespace std;//相当于全局变量，所有地方变量都有效
void f(string str,int x);
set<string> s;
//将每次的string都储存在这个set中，名字为s
//存放数组
int dir[] = {3,-3,1,-1};
//这里是模拟二维的上下左右移动的情况，
//如果你只有1和负1那就不是字母移动的操作了，不符合题意
void f(string str , int x){
	if(s.count(str)) return;
	//检测s中有无该数组，有即重复就返回剪枝，
	//没有就插入到s中
	s.insert(str);
for(int i=0;i<4;i++)
//四次就是为了实现全部移动
  {
    int xx=x+dir[i];//移动下标
    if(xx>=0&&x<=5)
    {
      char ch=str[x];
      str[x]=str[xx];
      str[xx]=ch;//交换字母
      f(str,xx);
      //进入函数，判断是否重复，如果没有就继续沿着这条路探索新大陆
      //重复就返回剪枝
	  //你真的蠢，你放出去那都无条件递归了？
     ch=str[x];
      str[x]=str[xx];
      str[xx]=ch;//重复了就返回上一步的操作，
      //再同样换回来就行了然后循环继续看看还有无别的情况。
      //递归加所有的四次可能的移动==排列组合

    }
    // f(str,xx);//你真的蠢，你放出去那都无条件递归了？
    // char ch=str[x];
    //   str[x]=str[xx];
    //   str[xx]=ch;

  }
}
int main(){
	string str = "ABCDE*";
	//字符数组
	f(str,5);//上传
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		string st;
		cin >> st;
		//输入
		if(s.count(st))
		//判断s有无该字符串，
			cout << 1 << endl;
			//显示      换行
		else
			cout << 0 << endl; 
	}
	return 0;
} 

//123


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
////1,2,3错误示范
////复杂化写法
//int main(int argc, char* argv[])
//{
//    long long n, l, r;
//
//    scanf("%lld", &n);
//    //long x = l;//这个x要放到输入后才对！
//    long long sum1 = 0, sum2 = 0,s[100000], sum;
//    for (long long k = 0; k < n; k++)
//    {
//        scanf("%lld%lld", &l, &r);
//        long long x = l - 1;//这个x要放到输入后才对！
//        //你既然定义成了l-1,那你x也要跟着变！
//        for (long long i = 1; i <= l - 1; i++)
//        {
//         
//
//            if (x < i)
//            {
//
//                for (long long j = x; j >= 1; j--)
//
//                {
//                    sum1 += j;
//
//                   
//
//                }
//                break;
//            }
//            for (long long j = i; j >= 1; j--)
//            {
//               
//                sum1 += j;
//                //x -= i;//循环中i减了很多次，其实只用减一次的！
//                
//
//            }
//            x -= i;//循环中i减了很多次，其实只用减一次的！
//        }
//        x = r;//不同循环x不同
//        for (long long i = 1; i <= r; i++)
//        {
//            
//
//            if (x < i)
//            {
//                for (long long j = x; j >= 1; j--)
//                {
//                    
//
//                    sum2 += j;
//
//                }
//                break;
//            }
//            for (long long j = i; j >= 1; j--)
//            {
//                
//                sum2 += j;
//               /* x -= i;*/
//                
//                //内循环没有初始化！
//            }
//            x -= i;//循环中i减了很多次，其实只用减一次的！
//        }
//        s[k] = sum2 - sum1;
//       
//
//
//    }
//    for (long long k = 0; k < n; k++)
//    {
//       printf("%lld\n", s[k]);
//    }
//   
//
//
//    return 0;
//}
////小范围适用大范围不行，溢出了徒劳无功，方法太复杂太暴力，以后思路不能这么直白和复杂，
////如果这么写程序不如一早就把这个方法抛弃，不然到时候修bug根本不好修，还不断错根本改不好，而且效率也不高，
////超时了，记住，一堆循环的百分百拿不了多少分



//二分法
#include <stdio.h>
#include <stdlib.h>
#define max 1414214//不用加;
//题设是第l个数到r个数的和
//最大上限是10的12次方个数字
//跟据观察发现每组都是等差数列
//计算可知最多为1414214组

long long a[max];
long long s[max];
//二分查找
//用该方法查找出i前一个或者其中的数列下标(a[mid])，然后带入公式
//注意，这里是对a数组的下标查找
//这个mid是查找数组的下标
long long sum(long long i)
//i是当前位置下标
{
  long long l=0,r=max;//两个数组边界下标
  //开始l为0是因为这是数组下标的边界
  while(l<r)
  {
    long long mid=((l+1)+r)/2;
    //!!注意前面是加法，要括号括起来！
    //循环加1首先是因为0下标没有数据可以直接跳过
    //其次是为了下一次的l加上1,实现二分查找。
    //如果此时已经完成查找，那l就不需要为了循环加1
    //这么写是因为要传出l

    if(a[mid]>i)
    r=mid-1;
    else
    l=mid;
    //这里是因为循环时mid加了1所以mid不用加一
			//不能直接改l=1,这里牵扯到一直循环，
			//如果先改一，然后l变为mid加一，那就牵连在一起循环
			//下标就是不一样的了，为了直接返回正确的下标，优先
			//考虑将正确的mid固定住
			//不直接用Mid是为了缩小范围，减小遍历的算法,不然就超时
  }
  //二分法仅仅是工具，用来优化算法,比循环提高了2的n次方效率,
      //用2分法把位置定为中点，两边都可以找，提高遍历速度,
      //就是一直压缩位置的范围，然后就可以快速输出(因为数据不大)
      //用二分查找代替循环遍历，
      // 记住，插入可以循环，但遍历一定要找其他方法代替！

     
  return s[l]+a[i-a[l]];
  //这个是递推式，由数列规律可以知道
  //返回不用r只用l,公式研究左边的写法
  //
 //因为题目要的不是位置,人家要的是一连串的总和，所以不能直接返回中点值！
//我们根本不需要考虑mid是否又被取到，a[mid]<=i都是符合这个公式的
  //只要l<r就是成立的,

}

int main(int argc, char *argv[])
{
 for(int i=1;i<=max;i++)
 {
    a[i]=a[i-1]+i;
    s[i]=s[i-1]+a[i];
 }
 int n;
 long long l,r;
 scanf("%d",&n);
 while(n--)
 {
    scanf("%lld%lld",&l,&r);
    printf("%lld\n",sum(r)-sum(l-1));
    //关于函数的，就看你函数返回的值是什么类型的
    //这里l-1是因为l的数字也要包括在内，所以往前挪

 }
  return 0;
}

//数字三角形
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int max(int a,int b)
{
  return a>b?a:b;
}

int main(int argc, char *argv[])
{
 int n,s;
 int a[101]={0};
 //初始化啊别忘了！不初始化一堆乱码跟他们比大小比不死你
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
   for(int j=i;j>=1;j--)
   //全部倒着输入，就相当于把三角形翻转过来，结果是不会变得
   //倒着输出是为了防止冲突
   //(因为我们一行代码包含了选择连上一行的最大数字的表述
   //还有插入输入的数字）
   //倒着输出，每次都是开新的数组，可带入数字验证不会起冲突.
   //还有就是看题目的图和表述，不能跨越过大，只能选最近的两边
   //这就是为什么只有a[j]与a[j-1]的比对
   {
     scanf("%d",&s);
     a[j]=max(a[j],a[j-1])+s;
   }
   
 }
 if(n%2==0)
 //偶数情况
 //根据题目，因为左下走的次数和右下次数相差为1，
 //只可能在最中间一个数，
 //而中间就要讨论最后一行是奇数还是偶数！
 {
   printf("%d",max(a[n/2],a[n/2+1]));
 }
 else
 //奇数情况
 printf("%d",a[(1+n)/2]);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int x[21]={0};
  int n,sum=0,m,ans=0;
  //圆的总周长,每一段弧长，统计矩形的个数
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&m);

    x[i]=x[i-1]+m;//为了得到每一段的前缀和使用的数组
    //为的其实就是后面的循环
    sum+=m;

  }
  for(int a=1;a<=n-3;a++)
  for(int b=a+1;b<=n-2;b++)
  for(int c=b+1;c<=n-1;c++)
  for(int d=c+1;d<=n;d++)
  //初始时每一个点各占据一个不重复位置的点，防止重复统计一个矩形
  //四个点是因为矩形由四个点组成
  //至于上限就是最后尽头时每个点都有不与自己的点的重复的位置
  //然后循环就是排列组合
  //算法是平行的边长相等，边长相等就等价于弧长相等
  
  {
    if(x[b]-x[a]==x[d]-x[c]&&sum-(x[d]-x[a])==x[c]-x[b])
    //为了不重复和统计不同情况的矩形，我们就需要移动点的位置
    //一旦移动那就不是原来点的弧长，这就是为什么不导入对应点的
    //弧长而是前缀，虽然点的位置再变，但他们两个之差是不会变的
    //只要差是相等的，那就一定可以组成一个矩形，
    //而单单一段弧长，下标变了就难以锁定，所以用差来锁定边长
    //包括为什么(x[d]-x[a])不能用x[a]代替，sum为什么不能用x[d]
    //因为下标在移动,但是形成矩形的情况一定是和第一次一样的，只不过位置不同
    
    ans++;
  }
  printf("%d",ans);
  return 0;
}

//谈判
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a[1001];
  int b[1001]={0};
  int n,m;
  long long sum=0;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&m);
    a[i]=m;
  }//插入数组
  
  for(int i=1;i<=n;i++)//排序，按顺序把小的排在前面
   for(int j=i+1;j<=n;j++)
   {
     if(a[i]>a[j])
     {
       int tmp=a[i];
       a[i]=a[j];
       a[j]=tmp;
     }
   }
for(int i=1;i<=n;i++)
{
  b[i]=b[i-1]+a[i];//记住b要初始化！
  //迭代
  if(i>=2)//因为一开始要两个部落。
  sum+=b[i];
}
printf("%lld",sum);


   
  return 0;
}

//含两天数
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   long count=0;
 for(int i=1900;i<=9999;i++)
 {
   int flag=i;
   while(flag)
   {
     if(flag%10==2)
     {
      //  if(flag%4==0&&flag%100!=0||flag%400==0) err
      //依然要拿i来判断，你flag会变，这个判断闰年经过循环就失真了！
      //避免这种思考就建立函数，函数传参写好直接判断打包好就避免出错
      
      if(i%4==0&&i%100!=0||i%400==0)//闰年判断方法记好了！
       {
         count+=366;
        
         break;//一旦出现了2就要跳出去
         //不不不，你这个只是跳出了while
         //并没有跳出for，所以要设置条件
       }
       else
       {
         count+=365;
        
         break;
       }
      
     } 
     flag/=10;
   }
   if(flag)//因为如果flag为真，那么肯定是年中有2，所以直接进入下一次循环就好了
   {
     continue;
   }
   
   
   else//flag为假，说明上个while循环直到最后都没有，说明年中无2.
   {
     if(i%4==0&&i%100!=0||i%400==0)
       {
         count+=180;//179加上闰年的日期2/29
       }
       else
       {
         count+=179;//没有2的普通一年总共有2的月/日
       }
     }
 }
    
 printf("%ld",count);
  return 0;
}
//分数

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a=pow(2,20)-1;
  int b=pow(2,19);
  printf("%d/%d",a,b);
  return 0;
}
//不用约分，你多虑了，就是你那种暴力数学解题
//唯一要改进的就是使用这个数学公式，不用手算，直接pow次幂直接计算
//分数就用打印符号的 /来表示分数，题目没说就不用约分！


//饮料换购
#include <stdio.h>
#include <stdlib.h>

int drink(int n)
{
  int flag =n,count=0;
  while(flag>=3)
  //不用担心n<3,直接返回n也是一样的.
  {
    int a=flag/3;
    int b=flag%3;
    count+=a;
    flag=a+b;

  }
  return(n+count);
}

int main(int argc, char *argv[])
{
  int n;
  scanf("%d",&n);
  printf("%d",drink(n));
  return 0;
}


#include <stdio.h>
#include <stdlib.h>

//错误票据
//你的劣质算法
int main(int argc, char *argv[])
{
     输入
     //循环输入的次数
     然后后面再来个10000如果出现“ ”字符就跳出这个循环
     不会缺号，但用冒泡排序查重
  return 0;
}

//优化
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int max=-1;//输入的肯定是正整数
    int min=100010;//最大上限为10的5次方
    //这两个是确定遍历范围
    //这么赋值是保证第一次max与min都能被附上第一个数，然后跟后面的数字比大小
    int b[10010]={0};//最多100*100个数，多几个防溢出
    //作用是统计数字出现次数
    int line,a,m,n;
    scanf("%d",&line);//题目要求输入几行，但是解答根本用不上，所以不用管
   
    
      while(scanf("%d",&a)>=0)
      //用这个条件代替你愚蠢的" "识别，
      //事实上是所有非法字符而非仅有" "!
      //这里一定要>=0,首先就是输出一定要有效
      //不能直接写scanf("%d",&a),范围太大会超时
      {
        if(a>max)
        {
        max=a;
        }
        if(a<min)
        {
          min=a;
        }
        
        b[a]++;
        //哪个数字出现就在哪个下标加一
      
    }
    for(int i=min;i<=max;i++)
    {
      if(b[i]==0)//判断缺号
      m=i;
      if(b[i]>1)//重号
      n=i;
    }
    printf("%d %d",m,n);

    
  return 0;
}

//数组下标加遍历范围计数统计代替你的冒泡排序还有你不会处理的缺号


//扫地机器人
////#include <stdio.h>
//// #include <stdlib.h>
//
//// int main(int argc, char *argv[])
//// {
////   int n,k,sum=0;
////   scanf("%d%d",&n,&k);
//
////   sum+=(n/k);
////   sum+=(n%k);
////   printf("%d",(2*sum)-2);
//
//
////   return 0;
//// }//你这是最优解讨论，如果人家不按照最优解给你放顺序那就没有意义了


#include <stdlib.h>

// int main(int argc, char *argv[])
// {
//   int n,k,sum=0,s=0,u=0;
//   int dp[100001]={0};
//   int s[100001]={0};
//   scanf("%d%d",&n,&k);
// for(int i=1;i<=k;i++)
// {
//   scanf("%d",&a);
// dp[i]=a;
// }
// //插入是随机的，位置不按顺序还要再冒泡排序
// //

// if(dp[k]<=(1+n)/2)
// {
//   printf("%d",((n-k)-1)/2);
// }
// else
// {
//   for(int i=2;i<=k-1;i++)
//   {


//     if(i==2)
//     {
//       s= max(dp[i]-1,s);
      
//       continue;
//     }
//     s=max(dp[i]-dp[i-1],a);
   
//     if(i==k-1)
//     {
//       a[i]=max(n-dp[i],s);
//     }
//   }
//   //   for(int i=2;i<=k-1;i++)
//   // {
//   //    u=max(dp[i]-dp[i-1],u);
     

//   //   if(i==2)
//   //   {
//   //     u= max(dp[2]-1,u);
      
//   //     continue;
//   //   }
   
//   //   //不会选倒数第二个小的
//   //   if(i==k-1)
//   //   {
//   //     u=max(n-dp[i],u);
//   //   }

//   //   if(u!=s)
//   //   {

//   //   }
//   // }
  
//   //最高的一个数总会卡位置，无法使用最大最小值输出倒数第二大的数，只能冒泡排序了

//   //将数据全部塞进数组，然后冒泡排序，输出倒数第二个数据即可
//   //算法就是分两种情况。一是所有输入数据中没有超过中间的，那就只能输出离最后一个位置最近的数
//   //研究规律得出是((n1-n2)-1)/2
//   //第二种就是上面的不满足就要比对两数之间的距离，其中头和尾要在前一个数据衡量，因为如果他们
//   //不是最大的就只有一个机器承担这些，输出倒数第二是因为第一会有机器帮它。算法过于复杂舍弃了.
  

// }


// 核心在于对问题的转化，每台机器虽然可以不同打扫范围
// 但是只有满足在所有机器用同样的打扫范围时能够完全打扫完
// 长廊，才可能实现目标
// 因此只需要求出满足条件的最小的打扫范围就好了


#include <stdio.h>
#include <stdlib.h>

int robot[100001];//机器人位置

int i, n, k;
//把这些写在全局变量就省去、解决了很多传参的麻烦
int cmp(const void *a,const void*b)
{
  return *(int*)a-*(int*)b;
}

int check(int len)//清扫范围
{
  int sweep=0;//当前打扫的位置
  for(i=0;i<k;i++)
  {
    if(robot[i]-len<=sweep)
    //减代表向左遍历看范围是否可以打扫完全
    //不完全就退出，因为非法，必须要全部打扫
    {
      if(robot[i]<=sweep)
      //判断当前机器人是否在已经打扫过的范围
      //即机器人之间的打扫范围是否有重合
      {
        sweep=robot[i]+(len-1);
        
       ///如果当前机器人已经处于清扫过的位置，则当前机器人只扫右侧区域
        //自己的脚下也属于一片范围，所以要减1,
        //至于sweep为什么要赋值上，因为这是每个机器人一样的打扫范围
        //打扫区域的重合是不可避免的，只能沿着每个机器人的打扫范围的极限来推进
        //sweep的位置是建立在机器人打扫的范围中的！
      }
      else
      //因为当前机器人在sweep前面，机器人的脚下也是sweep没有走过的
      //因此直接加上这个机器人的打扫范围表示这个区域都能打扫到了
      sweep+=len;
    }
    else
    return 0;
  }
  //return 1; err
  return (sweep>=n);
  //为什么？
  // return 1仅仅只是起到返回真值的作用，即使前面都保证正确
  //也无法保证机器人数量或者放置的位置不好就不能完全覆盖后面的区域
  //所以即使前面的区域能覆盖，还要最后保证sweep>=n才能
  //全覆盖，这是还有一小部分的情况，所以你会拿不完分
  //这里意思就是判断，如果sweep>=n,你就返回真值，否则返回假值
  
}
int main(int argc, char *argv[])
{
scanf("%d%d",&n,&k);

for( i=0;i<k;i++)
{
  scanf("%d",&robot[i]);

}
qsort(robot,k,sizeof(int),cmp);
//输入是随机的，所以要排好序先
//选定数组开始位置,排序数量，每个字符大小，方向
//排序函数，学习，以后可以代替冒泡排序
//cmp决定排序方向，a-b升序，b-a降序


//不写取地址，就默认是直接传数组的首位地址
//相当于robot[0],不写&就是首位，所以从零开始的
//循环可以直接写数组不写&，
//如果要从1开始就要：
// for(i=1;i<=k;i++){
//         scanf("%d", &A[i]);
//     }
        
//     int left=0,right=n;
//   qsort(&robot[1],k,sizeof(int),cmp);

int l=0,r=n,t;
//二分查找，寻找出当前放置位置中每个机器最短时间的打扫范围
while(l<=r)
{
  int mid=(l+r)/2;
  if(check(mid))//条件为真就执行
  {
    r=mid-1;
    t=mid;
    //这个是记录当前最短时间的范围
    //因为这时的值已经成功了，一直到最后
    //最后标记的t就是最好的范围

  }
  else
  {
    l=mid+1;
  }
}

printf("%d",(t-1)*2);
//题目知，一台机器四个大小的范围时
//消耗时间为6，规律


    
    
    return 0;
}

