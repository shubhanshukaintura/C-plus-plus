#include<iostream>
using namespace std;

class A{
	public:
		int x;
};

class B:public A{
	public:
		B(){
			x=100;
		}
		void getdata(){
			cout<<x<<endl;
		}
};

class C:public A{
	public:
		C(){
			x=200;
		}
		void getdata(){
			cout<<x<<endl;
		}
};

class D:public B,public C{
	public:
		void getdata(){
			cout<<x;
		}
};

int main()
{
	B p;
	C q;
	D r;
	p.getdata();
	q.getdata();
	r.getdata();
	return 0;
}
