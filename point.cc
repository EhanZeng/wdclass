///
 /// @file    point.cc
 /// @author  ehan(925789251@qq.com)
 /// @date    2017-07-21 07:56:56
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Point
{
	public:
		//构造函数是能够进行重载的
#if 0
		Point()
		{//默认构造函数
			_ix=0;
			_iy=0;
			cout<<"Point()"<<endl;
		}

		Point(int ix)
		{//自定义构造函数
			_ix=ix;
			_iy=0;
			cout<<"Point(int)"<<endl;
		}

		Point(int ix,int iy)
		{
			_ix=ix;
			_iy=iy;
			cout<<"Point(int,int)"<<endl;
		}
#endif
		Point(int ix=0,int iy=0)//使用默认参数可以直接代替上面的代码
		{
			_ix=ix;
			_iy=iy;
			cout<<"Point(int,int)"<<endl;
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

int main()
{
	Point pt;//使用了一个默认的构造函数
	pt.print();

	Point pt2(1,2);
	pt2.print();

	Point pt3(3);
	pt3.print();

	return 0;
}

