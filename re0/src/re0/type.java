package re0;
public class type
{
	public static void main(String args[])
	{
		float a=3.25F,b=-2.5F;//定义了浮点型就必须要加上F类型才能输出
				//其他也是同理，语法规定
		int c;
		byte d;
		c=(int)(a*b);//
		d=(byte)257;
		// byte number = (byte)257; 257超出了byte的[-128,127]的范围,
		//所以将257除以byte的范围256(-128到127的范围)取余数得到1;
		//只要超过范围就会报错，但是强制转换可以强制执行
		System.out.println("c="+c);
		System.out.println("d="+d);
	}
}