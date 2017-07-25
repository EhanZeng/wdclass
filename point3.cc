 ///
 /// @file    Point2.cc
 /// @author  ehan(925789251@qq.com)
 /// @date    2017-07-21 08:14:51
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Point
{
	public:
		Point()
		:_ix(0)
		,_iy(0)   
		{
			cout<<"Point()"<<endl;
		}

		Point(int ix)
		:_ix(ix)
		,_iy(0)
		{
			cout<<"Point(int)"<<endl;
		}

		Point(int ix,int iy)
		:_ix(ix)
		,_iy(iy)
		{
			cout<<"Point(int)"<<endl;
		}

	#if 1		
		~Point()
		{//如果没有显式提供析构函数，系统会自动提供一个析构函数
			cout<<"~Point()"<<endl;
		}
#endif
	
//系统会自动提供一个复制构造函数
//
//1.复制构造函数的参数中引用符号不能去掉，去掉之后，
//在调用复制构造函数时会导致无穷递归，直到栈溢出
//2.const关键字不能去掉，如果去掉，右值形式存在的point 对象无法进行传参
      	Point(const Point & rsh)//复制构造函数，const Point rhs=pt;
		:_ix(rsh._ix)
		,_iy(rsh._iy)
    	{
			cout<<"Point(const Point&)"<<endl;
		}

	    void print()
		{
			cout<<"("<<_ix
				<<","<<_iy
				<<")"<<endl;
		}

	private:
		int _ix;
		int _iy;
};

int test()
{
	int x=1;
	int y=x;
	Point pt1(1,2);//使用默认构造函数创建
    Point pt2=pt1;//ok,执行的赋值构造函数

	pt1.print();
	pt2.print();
	
	return 0;
}

//函数的形参是对象，当形参与实参结合时，会调用复制构造函数
void func1(Point pt)
{
	pt.print();
}

//当参数的返回值是对象的时候，也会调用复制析构函数
Point func2()  
{
	Point p(2,3);
	p.print();
	return p;
}

void test1()
{
	Point p(1,2);
	func1(p);
}

void test2()
{
	func2();
}

void test3()
{
	//int &ref=10;
	Point(1,2).print();//匿名对象--》右值

	cout<<"-----"<<endl;//匿名对象存在时间特别短，在执行该句之前就消失来，无法执行下面的复制
	Point pt(Point (1,2));//Point &rsh=Point(1,2);
	pt.print();
}

int main()
{
//	test();
//	test1();
//	test2();
	test3();
	return 0;
}

