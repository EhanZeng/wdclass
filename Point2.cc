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
		,_iy(0)   //这里才是真正的赋值语句 -->初始化表达式（初始化列表）
		{
			//_ix=0;//严格来说，是赋值语句，并不是初始化过程
			//_iy=0;
			cout<<"Point()"<<endl;
		}

		Point(int ix)
		:_ix(ix)
		,_iy(0)
		{
			//_ix=ix;
			//_iy=0;
			cout<<"Point(int)"<<endl;
		}

		Point(int ix,int iy)
		:_ix(ix)
		,_iy(iy)
		{
			//_ix=ix;
			//_iy=0;
			cout<<"Point(int)"<<endl;
		}

		void print()
		{
			cout<<"("<<_ix
				<<","<<_iy
				<<")"<<endl;
		}
		
		~Point()
		{//如果没有显式提供析构函数，系统会自动提供一个析构函数
			cout<<"~Point()"<<endl;
		}

	private:
		int _ix;
		int _iy;
};

int test()
{
	Point pt;//使用默认构造函数创建
	pt.print();

	Point pt2(1,5);
	pt2.print();

	
	Point pt3(7);
	pt3.print();

	return 0;
}

int main()
{
	test();
	return 0;
}







