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
			x=41;
			y=17;
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
	return 0;
}
