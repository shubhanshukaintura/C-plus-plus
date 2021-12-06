#include<iostream>
using namespace std;

class A{
	public:
		int x;
		int y;
};

class B:public A{
	public:
		B(){
			x=10;
			y=20;
		}
		void getdata(){
			cout<<x<<endl;
			cout<<y<<endl;
		}
};

int main()
{
	B p;
	p.getdata();
	p.x=30;
	p.y=40;
	p.getdata();
	return 0;
}
