
#include<stdio.h>
#include<string.h>
 
int n;
char  a[15];
char re[15];
int vis[15];
//假设有n个字符要排列，把他们依次放到n个箱子中
//先要检查箱子是否为空，手中还有什么字符，把他们放进并标记。
//放完一次要恢复初始状态，当到n+1个箱子时，一次排列已经结束
void dfs(int step)
{
    int i;
    if(step==n+1)//判断边界
    {
        for(i=1;i<=n;i++)
            printf("%c",re[i]);
        printf("\n");
        return ;
    }
    for(i=1;i<=n;i++)//遍历每一种情况
    {
        if(vis[i]==0)//check满足
        {
            re[step]=a[i];
            vis[i]=1;//标记
          dfs(step+1);//继续搜索
		  	vis[i]=0;//恢复初始状态
		  	
		  	//return和这个反复打开的dfs已经把所有情况都给考虑到了，就拿这题的排列
		  	//不同情况不就是排列组合的A3/3，A4/4一样的道理
		  	//假如就三个数，123，那么第一次打开就是循环三次，分别是1，2，3的不同情况
		  	//然后第一次打开又开了一个dfs，因为前面的标记所以i=1已经不能插入，也就只有i=2和i=3，这又是两种情况
		  	//然后i=2又打开了dfs,同理得只有一种情况
		  	//即3*2*1=6=A3/3，无论什么数字都一样
		  	//这就是回溯和DFS的算法，巧妙利用了return返回函数继续循环的道理，我们并不需要准确在意数据顺序，因为最终全部都会因为这样的算法全部实现
		  	//而且不会重复
		
        }  
    }
    return ;
}
 
int main(void)
{
    int T;
    scanf("%d",&T);
    getchar();
    while(T--)
    {
        memset(a,0,sizeof(a));
        memset(vis,0,sizeof(vis));//对存数据的数组分别初始化
        scanf("%s",a+1);//把\0也算上才加1的
        n=strlen(a+1);
        dfs(1);//从第一个箱子开始
    }
    return 0;
}
