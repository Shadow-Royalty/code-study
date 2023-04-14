

public class MyShape
{
private int shapeNum;

public void getArea(boolean type)
{
System.out.println("输出图像的面积"); 

}



public static void main(String[] args)
{
 Circle myCircle=new Circle();//新建一个类用,这个类是新的，不是原来写好的类，是新建的
 //用于使用的类
RectAngle myRectAngle=new RectAngle();
myCircle.drawCircle(100,200,10.0);//引用类中的内容
myCircle.getArea(10);
myRectAngle.drawRectAngle(100,200,10.0,5.0);
myRectAngle.getArea(10,5);
} 

}
