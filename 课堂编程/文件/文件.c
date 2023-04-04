#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<string.h>
#include<math.h>
#include<stdlib.h>
//struct stu
//{
//	float c;
//	float m;
//	float e;
//};
//int main()
//{
//	struct stu a={86.3,88.5,78.5};
//	struct stu b={78.5,76.3,68.5};
//	struct stu c={90.2,85.6,84.6};
//	struct stu d={76.5,90.5,85.5};
//	float ave1 = (a.c + b.c + c.c + d.c)/4.00;
//	float ave2 = (a.m + b.m + c.m + d.m)/4.00;
//	float ave3 = (a.e + b.e + c.e + d.e)/4.00;
//	printf("Chinese: %.2f\nMath: %.2f\nEnglish: %.2f", ave1, ave2, ave3);
//
//		
//
//		
//
//
//
//
//	return 0;
//}
//
//
//int main()
//{
//	int m, n, i, j, k, p;
//	double t;
//	double a[10][10] = { 0 };
//	
//	scanf("%d%d", &m, &n);
//	scanf("%d", &i);
//	while (i != -1)
//	{
//		scanf("%d%lf", &j, &t);
//		a[i-1][j-1] += t;//因为数组是从0开始记录的,这个细节决定你有分还是没分！
//		//一定要注意，你输入机器里不是直观的人为体会！
//		// 因为这里可以重复输入同一个人同一个产品,
//		//所以我们要将数组初始化0，然后反复+=t
//		scanf("%d", &i);
//	}
//
//
//   
//	printf("Sales Statistics:\n");
//	double sum = 0;
//	for (k = 0; k < m; k++)
//	{
//		sum = 0;//重置sum
//		for (p = 0; p < n; p++)
//		{
//			printf("%8.2lf", a[k][p]);//每一行的数据
//			sum += a[k][p];
//
//		}
//		printf("%8.2lf", sum);//最后总和
//		printf("\n");
//		
//	}
//	
//	//列放在另一个循环，保证最后一行打印
//	for (p = 0; p < n; p++)
//	{
//		sum = 0;//每一次结束后重置
//		for (k = 0; k < m; k++)//循环位置调换，从列开始循环
//		{
//			sum += a[k][p];//每一列的数据
//		}
//		printf("%8.2lf", sum);//总和输出
//		
//	}
//
//
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int i, tmp, j;
//	char name[10][10];
//	char tele[100][100];//数据太大，输入字符多的时候记得扩容，不然溢出就会出现乱码,如电话号码
//	char set[10][10];//所有数组都是，程序逻辑没错如果突然有乱码就可能是输入溢出，记得扩容
//	int age[100];
//	printf("Input n:");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("Input the name,birthday,number of the %d friend:", i+1);
//		scanf("%s%d%s", &name[i], &age[i], &tele[i]);
//	}
//		for (i = 0; i < n - 1; i++) //比较n-1轮
//		{
//			for (j = 0; j < n - 1 - i; j++)//每轮比较n-1-i次,
//			{
//				if (age[j] > age[j + 1])//这个就是数字越大年龄越小，没毛病
//					//1970年龄肯定大过1982的
//				{
//
//
//					strcpy(set[3], name[j]);
//					strcpy(name[j], name[j + 1]);
//					strcpy(name[j + 1], set[3]);
//
//					
//					tmp = age[j];
//					age[j] = age[j + 1];
//					age[j + 1] = tmp;
//					//二维数组不能用变量放，但一维数组可以(int 条件下）
//					//如果是char就用二维，如果是int就一维数组
//					strcpy(set[2], tele[j]);
//					strcpy(tele[j], tele[j + 1]);
//					strcpy(tele[j + 1], set[2]);
//
//
//				}
//			}
//		}
//		for (i = 0; i < n; i++)
//		{
//			printf("%s %d %s", name[i], age[i], tele[i]);
//			printf("\n");
//		}
//
//
//
//	return 0;
//}

//int main()
//{
//	int m, n, i, j;
//
//	int a[100][10];
//	int(*p)[10] = a;
//	double sum = 0;
//	scanf("%d%d", &m, &n);
//	for (i = 0; i < m; i++)
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", (*(p + i) + j));
//			sum += *(*(p + i) + j);
//		}
//	double ave = sum / (n * m);
//	printf("%.2lf", ave);
//
//
//
//
//	return 0;
//}

//int main()
//{//解决思路就是先用字符变量存起每一个元素，后一直循环打印每一个字符，然后传给out文件
//
//	FILE* pf = fopen("filecopy.in", "r");//输入文件r
//	FILE* pc = fopen("filecopy.out", "w");//输出文件w
//	//注意不能随意使用r+，不然报错
//	//报错是因为没有文件
//	//可以这么描述，但人性化方面，一般用if语句，打印，return 0既健全又同时打开了fopen
// /* fputs(pf, pc);*///字符 +指针所以不能这么写
//	char ch;//存放字符元素变量
//	ch = fgetc(pf);//这里不好用fgets,因为长度不明确。不明确长度c才是正确的
// 这里是将in文件输入一个元素给了ch.
//	while (!feof(pf))//feof函数为结尾函数，即字符没有时
//	{
//		fputc(ch, pc);//将out文件赋值，复制
//		putchar(ch);//打印字符，即输出
//		ch = fgetc(pf);//在fopen函数中，这个是自动下移下标的，所以直接照写
//		//继续下一个元素的输入
//
//	}
//	fclose(pf);
//	fclose(pc);
//		
//	
//		
//
//
//
//
//	return 0;
//}

//int main()
//{
//	FILE* in = fopen("sort.in", "r");
//	FILE* out = fopen("sort.out", "w");
//	int n = 0;
//	int k = 0;
//	char tmp[5];//临时数组，为了换位
//	char ch[10][10];//char的数组不会有乱码，一开始是直接无效，所以不需要初始化！
//	//二维数组一般都是给字符串用的，你仅仅写一个ch[k]就相当于这一整行的字符了，所以懂了吧。
//	//目的就是为了让一个字符串放在一行里就行了
//
//	/*while (fgets(ch[k],100, in) )*///用k来计数！
//		//这个数字是输入上限的意思，一般把输入上限调高字符输入就不会换！
//		//要打开文件来才能得到信息，必须要用这个fgets
//		//该题字符串长度未知，这个方法不高明，好像还是要用fgetc;
//	/*while (fgetc(ch[k],in))*//*格式错误！*/
//	
//    
//		while(!feof(in))
//	{ 
//	if(fgetc(in) != NULL)
//		ch = fgetc(in);//fgetc不能用于数组!只能用于变量
//	//用fgetc只能用于无脑输出的模式，一旦排序就不行了
//	else
//		k++;
//		n++;
//		
//	}
//	int i, j;
//	
//	
//	//for (i = 0; i < n - 1; i++)
//	//{
//	//	{for (j = 0; j < n - 1 - i; j++)
//
//	//		/*if (ch[j] == ch[j + 1])*///*你要用字符二维数组就统一格式，对哦字符数组不能这么写傻了.*/
//	//		if (strcmp(ch[j], ch[j + 1]) == 0)//这里要写==，因为是判断
//	//		{
//	//			//ch[j + 1] = '\0';//不能用等式！赋值用函数赋值
//	//			//切记统一格式，什么类型你就用什么赋值方法，整型用等式，字符用函数！
//	//			//为什么左操作数必须为左值，就是因为你想用整型的方法改字符，肯定不行！
//	//			// 
//	//			//strcpy(ch[j + 1], tmp);err,不行，你这么赋值会让\0放在第一，直接结束输入
//
//	//			strcpy(tmp[1], ch[j+1]);
//	//			strcpy(ch[j+1], ch[n-1]);
//	//			strcpy(ch[n-1], tmp[1]);
//	//			strcpy(ch[n - 1], tmp[2]);//直接与最后一个元素相换，直接在最后去掉当作结束符号
//	//			//太罗嗦了,没必要这么麻烦
//	
//	//			
//
//	//		}
//	//	}
//	//}
//
//
//
//
//
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (strcmp(ch[j], ch[j + 1]) > 0)
//			{
//				strcpy(tmp, ch[j]);
//				strcpy(ch[j], ch[j+1]);
//				strcpy(ch[j + 1], tmp);
//
//		     }
//			
//		}
//	}
//	/*k = 0;
//	while (fgets(ch[k], 4, in) != NULL)*///err,前面你已经打开过了不能再用这种方式输出了
//	for(i=0;i<n;i++)
//	{
//		fputs(ch[i], out);
//		printf("%s",ch[i]);//不用你自己空格，系统自己空
//		
//	}
//
//	fclose(in);
//	fclose(out);
//
//
//
//
//	return 0;
//}

int main()
{
	FILE* in = fopen("sort.in", "r");
	FILE* out = fopen("sort.out", "w");

	char ch[100];
	/*char(*p)[10];*///*我要的是指针，不是数组，所以要的是放着很多指针的数组！*/
	//指针和数组搭配就能更简洁，表达更直接
	char* p[100];
	int i = 0;
	fgets(ch, 100, in);//直接一口气输完
	p[i] = strtok(ch, " ");//断开一次数组，赋值给p[i];
	//此时其实p就是分割的ch,ch没有改变，只是p是分割的ch
	while (p[i] != NULL)
	{
		p[++i]= strtok(NULL, " ");//这里分割直到最后一个字符旁边也会分割的，所以可以直接把i当n用
		//即断开多少次就是有多少个字符串的意思
		//++i先加后用,后面是连续断开同一个数组的表达
	}
	int n = i;
	int k, j;

	



	for (k = 0; k < n - 1; k++)
	{
		for (j = 0; j < n - 1 - k; j++)
		{
			if (strcmp(p[j], p[j + 1]) < 0)//直接一维数组就行了
				//这里反过来交换，为的就是到时i--循环
				//strcmp是通用字符比较的函数，无论是否为指针
			{
				//strcpy(tmp, p[j]);
				//strcpy(p[j], p[j + 1]);
				//strcpy(p[j + 1], tmp);//函数不需要解引用
				/*指针就不用用strcpy了，二维数组或者char数组才用，或者char,而指针可以直接赋值*/
				//指针最大的好处就是可以共享很多种表达，最好的就是使用赋值，
				//如果指针硬是用strcpy赋值，就会有意想不到的错误可能会发生。
				char* tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;

			}
			if (strcmp(p[j], p[j + 1]) == 0)
			{
				p[j + 1] = "0";//可以直接赋值的指针数组
			}
		}
	}
	while (i)//i为真，即i>0时,这种写法就不用再重置i，也不用管究竟要循环到什么时候停,简便
	{
			i--;//前面最后一个指针指的是“ ”空指针，空指针不能被访问，所以要先减
		if (strcmp(p[i], "0") != 0)//这里是因为你删除了重复数组赋值的0，不识别它即可完成删除
		{
			fputs(p[i], out);//不需要再print了，人家没叫你printf，out文件输出即可
			fputs(" ", out);//前面你断开没了，现在补回来
		}
	
	}
	
	

	fclose(in);
	fclose(out);




	return 0;
}

//int main()
//{
// //这一题不好用分割数组函数，因为标志符无法直接表达， 只能用条件和循环来解决
// 
//	FILE* in = fopen("in.txt", "r");
//	char ch[100];
//	
//	//fgets(ch, 100, in);
//	//数组指针，可以访问数组的内容，可以被存放数据,存放时会与原来的数据替换
//		//int i = 0;
//		//int len=strlen(ch);
//	//fgets是不行的，如果中间有结束符号你无法避免提前终止，
//	//所以不能保证全部数据都完美输出，因此要一个一个字符控制,即fgets没有办法设计条件
//		
//
//
//		//char c;
//		//int i = 0, len, m = 0, n = 0;
//		//
//		//while ((c = fgetc(in)) != EOF)//EOF是文件结束符，即文件已经结束时表示结束的符号，而\0是字符串
//		//	//结束的标志，所以是不一样的
//		//{
//		//	ch[i++] = c;
//		//}
//		//ch[i] = '\0';//不能去掉
//		//len = strlen(ch);
//
//
//	
//			
//		//                数组 断开标志
//		
//			p[i] = strtok(ch, " ||ch[i] < 'a' && ch[i]>'z' &&ch[i] < 'A' && ch[i]>'Z'");//断开一次数组，赋值给p[i];
//			
//			while (p[i] != NULL)//NULL表示失败，即断开没有失败时(断开失败就是无法断开，即断完了）
//			{
//				p[++i] = strtok(NULL, " ||ch[i] < 'a' && ch[i]>'z' &&ch[i] < 'A' && ch[i]>'Z'");//这里分割直到最后一个字符旁边也会分割的，所以可以直接把i当n用
//               
//
//			}
//			printf("%d %d", i, len);
//		
//
//
//	return 0;
//}
//int main()
//{
//	FILE* in = fopen("in.txt", "r");
//	//char a,flag;//看见变量就往一个地方放新的变量是吧，不懂得判断，真的蠢
//	char a;
//	int flag = 0;
//	int i = 0;
//	int sum = 0;
//	char ch[100];
//
//	while ((a = fgetc(in)) != EOF)//记得写括号括起来
//	{
//		ch[i++] = a;
//	}
//	ch[i] = '\0';//最后字符串结束
//	int n = i;
//	int len = strlen(ch);
//	fclose(in);//关闭文件
//	for (i = 0; i < n; i++)
//	{
//		
//
//		//	if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z'))
//		//	{
//		//		flag = 1;
//		//		continue;
//		//	}
//		//	if (flag)//如果不初始化flag就会因为乱码报错，所以一旦异常记得初始化
//		//	{
//		//		sum++;
//		//	}
//		///*	if ((ch[i] < 'a' && ch[i]>'z') || (ch[i] < 'A' && ch[i]>'Z')||ch[i] ==' ')*/
//		//	//err，因为&&的两边根本就不可能同时成立
//		//	if (ch[i] > 'z' || ch[i] < 'a' || ch[i]>'Z' || ch[i] < 'A'||ch[i]==' ')
//		//	{
//		//		flag = 0;
//		//		continue;
//		//	}
//
//		//上面的方法之所以不行是因为你根本不知道还有其他可能输入的字符，即写的反面
//		//范围没有完全覆盖，因此最佳的解法就是回避，只设置一个有界的范围，其他交给else
//		//不是这个条件的通通进不来就ok了
//		if (((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z')))
//		{
//			if (((ch[i + 1] >= 'a' && ch[i + 1] <= 'z') || (ch[i + 1] >= 'A' &&ch[i + 1] <= 'Z')))
//			{
//				continue;
//			}//如果下一个元素依然符合就继续循环，这么写的目的就是为了确保当前条件一定成立
//			//如果下一个不是，就直接sum++也就记录了一个字符串，然后再重新循环，以此来记录
//			//只有非英文字符就算两个词的情况。
//			else 
//			{
//				sum++;
//			}
//
//		}
//	}
//
//		
//		/*if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z'))
//		{
//			;
//		}
//		else
//		{
//			flag = 0;
//			continue;
//		}*///不推荐这么写，它的反面其实就跟上面的错误点是一样的
//
//	
//
//	printf("%d %d",sum,len);
//
//
//	
//
//	return 0;
//}
//


//int main() {
//    FILE* f, * g;
//    int i, j, k = 0, t = 0, flag = 0;
//    char words[200][20] = { 0 }, ch[20][20];
//   
//    f = fopen("input.c", "r");
//    g = fopen("output.c", "w");
// /*  f= fopen("sort.in", "r");
//   g= fopen("sort.out", "w");*/
//
//
//    while (!feof(f)) 
//    { 
//        fscanf(f, "%s", words[k++]);
//       
//       
//        
//      
//
//    }
// 
//  
//   
//
//    for (i = 0; i < k; i++) {
//        if (strcmp(words[i], "int") == 0)
//        {
//            i += 1;
//            while (strcmp(words[i], ";") != 0) 
//            {
//           
//                if ((strcmp(words[i], ",") != 0) )
//                {
//                    strcpy(ch[t++], words[i]);
//                }
//                i++;
//            }
//            break;
//        }
//    }
  /*  for (i = 0; i < k; i++)
    {
        for (j = 0; j < t; j++)
 {
            if (strcmp(words[i], ch[j]) == 0)
 {
                flag = 1;
            }
        }
        if (!flag) {
            fprintf(g, "%s", words[i]);
        }
        flag = 0;
    }*/
    //    fclose(f);
    //    fclose(g);
    //  
    //
    //    return 0;
    //}

    //int main()
    //{
    //FILE* in = fopen("input.c", "r");
    //FILE* out = fopen("output.c", "w");
    //char a[200][20] = { 0 }; //fscanf输入的数组要赋值初始化，不然就可能有乱码输到在最后！一定注意输入时务必初始化
    //char b[200][20];
    //int k = 0, m = 0;
    //int i, j;
    //int flag = 1;
    //while(!feof(in))//不加文件结束符号和循环就只输入一次是吧，fscanf只会输入一次，需要你自己加入循环！
    //fscanf(in, "%s", a[k++]); //所有输入按字符串形式自动输入到各个数组中
    //for (i = 0; i < k; i++)
    //{
    //	if (strcmp(a[i],"int")==0)//字符用函数比较
    //        //设置条件，当数组到int字符时才会进入，避免前面的字符被删去（因为int是第一个在主函数中输入的字符）
    //	{
    //		i++;//跳过int字符
    //       
    //		while (strcmp(a[i], ";") != 0)//先把除了;和,字符都输入进另一个数组，
    //            //；为while条件，因为;是int这个定义后面最后的字符
    //		{
    //			if (strcmp(a[i], ",") != 0)
    //			{
    //				strcpy(b[m++], a[i]);
    //			}
    //			i++;
    //		}
    //       
    //        //这里只是把int定义后的所有变量和空白字符输入了。
    //        //b数组存放的就是所有该删除的字符
    //	}
    //}
    //
    //     for (i = 0; i < k; i++)
    //     {  for (j = 0; j < m; j++)
    //      {
    //           if (strcmp(a[i], b[j]) == 0)//只要b中所有的字符a[i]有一个都不打印了
    //           {
    //               flag = 0;
    //           }
    //       }
    //     //这里通过两个循环比对，即使上面只是输入了int中的所需要删去的字符，但只要每次拿int中所需要
    //     //删除的部分和原数组比对，一但相等就不打印即可，所以后面的同样的相关字符也不被打印。
    //       if (flag) 
    //       {
    //           fprintf(out, "%s", a[i]);
    //       }
    //       flag = 1;
    //     }
    //fclose(in);
    //fclose(out);//关闭
    //
    //
    //
    //	return 0;
    //}

    //int main()
    //{
    //    char c;
    //  FILE* in = fopen("text1.dat", "r");//青光眼，前面有f不是open！是fopen
    //   // FILE* in = fopen("in.txt", "r");
    //    FILE* out = fopen("text2.dat", "w");
    //    char ch[100] = { 0 };
    //    int count = 0;
    //   
    //    int k = 0,flag = 0;
    //    int i, j;
    //    while (!feof(in))//先全部放在数组里
    //    {
    //        c = fgetc(in);
    //
    //        ch[k++] = c;
    //    }
    //
    //    for(i=0;i<k;i++)//通过count作为计数器,以换行作为分界
    //    /*while(ch == '\n')*///需要循环来控制！
    //    {
    //        if(ch[i] == '\n')
    //        {
    //            count++;
    //        }
    //  }
    //    k = 0;//初始化
    //    for (i = 0; i < count; i++)
    //    {
    //        flag = k;//将上一次的最后的值作为新的第一个初始的值
    //        while (ch[k] != '\n')
    //        {
    //            k++;
    //        }
    //        if (ch[k] == '\n')
    //        {
    //            j = k;
    //
    //            while (flag != j + 1)//+1是避免两者相等时此时的值没有被输出，因为我的目的其实就是
    //                //倒过来输出每一行的字符
    //            {
    //
    //                fputc(ch[j--], out);//不可以再用k了，不然又影响上面的记录,要多设置变量
    //
    //            }
    //            k++;//跳过\n进入下一行
    //        }
    //    }
    //       
    //        
    //           
    //            
    //        
    //    flag = k;//最后一行时没有换行符，所以要令起判断
    //    while (ch[k] != '\0')
    //    {
    //        k++;
    //    }
    //    if (ch[k] == '\0')
    //    {
    //        j = k;
    //        j-=2;//前两个会莫名有？，所以去掉了
    //        while (flag != j + 1)
    //        {
    //
    //            fputc(ch[j--], out);//不可以再用k了，不然又影响上面的记录,要多设置变量
    //
    //        }
    //       
    //    }
    //         
    //
    //
    //    
    //    fclose(in);
    //    fclose(out);
    //
    //
    //
    //
    //
    //    return 0;
    //}

    //int main()
    //{
    //    FILE* in = fopen("in.txt", "r");
    //    FILE* out = fopen("out.txt", "w");
    //    char ch[100][100] = { 0 };
    //    char* p[100];
    //    int k = 0, i = 0, j = 0;
    //
    //    while (!feof(in))
    //    {
    //        /*fgets(ch[k],"%s",in);*/
    //        fgets(ch[k],100,in);//文件，后面才是数组
    //        k++;
    //    }
    //     p[i] = strtok(ch, ",");
    //     while (p[i] != NULL)
    //     {
    //         p[++i] = strtok(NULL, ",");
    //     }
    //     p[i] = strtok(ch, "(");
    //     while (p[i] != NULL)
    //     {
    //         p[++i] = strtok(NULL, "(");
    //     }
    //     p[i] = strtok(ch, ";");
    //     while (p[i] != NULL)
    //     {
    //         p[++i] = strtok(NULL, ";");
    //     }
    //     p[i] = strtok(ch, "[");
    //     while (p[i] != NULL)
    //     {
    //         p[++i] = strtok(NULL, "[");
    //     }
    //     p[i] = strtok(ch, ")");
    //     while (p[i] != NULL)
    //     {
    //         p[++i] = strtok(NULL, ")");
    //     }
    //
    //     p[i] = strtok(ch, "]");
    //     while (p[i] != NULL)
    //     {
    //         p[++i] = strtok(NULL, "]");
    //     }
    //     p[i] = strtok(ch, " ");
    //     while (p[i] != NULL)
    //     {
    //         p[++i] = strtok(NULL, " ");
    //     }
    //
    //
    //
    //
    //
    //     for(j=0;j<k;j++)
    //     {if (strcmp("int", p[k]) == 0 || strcmp("char", p[k]) == 0|| strcmp("double", p[k]) == 0 || strcmp("float", ch[k]) == 0|| strcmp("long", p[k]) == 0 || strcmp("void", p[k]) == 0  ||  strcmp("\n", p[k]) == 0 )
    //         //使用字符串函数可以有效避免字符串过长,二维数组加函数
    //         //不要在if后面加" ",因为这样有一堆空格到时就很乱，最好就在输出后面加
    //     {
    //         fputs(p[k], out);
    //         fputs(" ", out);
    //     }
    //     k++;
    //    }
    //    //fsancf会自动按空符号帮你放好到对应数组，但是忽略空格和换行。fgetc不能把字符串直接放在想要的数组，fgets一次可以放很多在一个
    //    //下标中，但很乱.
    //   
    //
    //
    //
    //
    //
    //    return 0;
    //}
    //你的问题就出在不懂变通，没有把复杂问题化小，所以不可能成功

    //#include <ctype.h>
    //int main()
    //{
    //	FILE* pf1 = fopen("in.h", "r");
    //	FILE* pf2 = fopen("out.txt", "w");
    //	char type[6][10] =
    //	{
    //		"int","char","double","float","long","void"
    //	};//二维数组才能放大量字符串
    //	char ch[30] = { 0 }, r;
    //	int i = 0, j = 0;
    //	int flag = 0;
    //	while (1)
    //	{
    //		ch[j] = fgetc(pf1);
    //		r = ch[j];
    //		if (r == '\n')
    //		{
    //			fprintf(pf2, "%s", "\n");
    //		}
    //		if (ch[j++] == EOF)
    //		{
    //			break;
    //		}
    //		if (!isalpha(ch[j - 1]))
    //		{
    //			ch[j - 1] = '\0';
    //			flag = 1;
    //			j = 0;
    //		}
    //		for (i = 0; i < 6 && flag; i++)
    //		{
    //			if (!strcmp(type[i], ch))
    //			{
    //				fprintf(pf2, "%s ", ch);
    //				break;
    //			}
    //		}
    //		flag = 0;
    //	}
    //
    //	//关闭文件
    //	fclose(pf1);
    //	fclose(pf2);
    //	pf1 = NULL;
    //	pf2 = NULL;
    //	return 0;
    //}
    //
#include<ctype.h>//使用isalpha的库函数
int main()
{
    FILE* in = fopen("in.txt", "r");
    FILE* out = fopen("out.txt", "w");
    char type[10][10] = { "int", "char","double" ,"float" , "long","void" };
    //使用二维数组放置不删去的字符
    char ch[100];
    int i = 0, j = 0, flag = 0;

    while (1)//即不控制就一直循环
    {
        ch[j] = fgetc(in);
        //用fgetc面对复杂，要求高的输入
        //在循环中，fgetc不会终止，它只会一直向下输入，不会重新开始
        if (ch[j] == '\n')//换行只会在有的时候输入，所以不担心顺序
        {
            fprintf(out, "%s", "\n");//调用函数都是"",只有赋值才是''
        }
        if (ch[j++] == EOF)//这里EOF是文件结束而不是数组，而且这里妙在j也实现了自增
        {
            break;
        }
        if (!isalpha(ch[j - 1]))//这里减一是因为前面要自增
            //这里其实目的就是断开，非英文字母就会输入\0,然后再从第一个下标重新输入，fgetc只会一直向下输入，
            //所以每次\0就代表一个英文字符串输入结束,覆盖原来的字符这样就不会浪费数组空间
        {
            ch[j - 1] = '\0';
            flag = 1;
            j = 0;
        }
        for (i = 0; i < 6 && flag; i++)//flag就是为了防止没有输完字符进入循环，提高效率
        {
            if (!strcmp(ch, type[i]))//直接写ch,就代表从开始到结束的全部字符,结束为\0
                //这里不写判断就默认是判断相等时，相等就是0，！就是非0，条件为真才执行下面的语句
                //即相等就输出
            {
                fprintf(out, "%s ", type[i]);//因为上面除了"\n"和字母都被\0和循环消除了，所以要自己空格
            }
        }
        flag = 0;
    }
    fclose(in);
    fclose(out);



    return 0;
}
