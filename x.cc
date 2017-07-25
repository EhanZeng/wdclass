 ///
 /// @file    x.cc
 /// @author  ehan(925789251@qq.com)
 /// @date    2017-07-21 07:32:34
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class X
{
	public:
		X(int a)
	    :_iy(a),_ix(_iy)
		{
			cout<<"X(int)"<<endl;
		}

		void print()
		{
			cout<<"_ix="<<_ix<<endl
				<<"_iy="<<_iy<<endl;
		}
	private:
		int _ix;
		int _iy;
};

int main()
{
	X x(3);
	x.print();
	return 0;
}
			    
