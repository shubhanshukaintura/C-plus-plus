#include<iostream>
using namespace std;

class A{
	public:
		int x;
	protected:
		int y;
	private:
		int z;
};

class B:protected A{
	public:
		B(){
			x=41;
			y=30;
			//z=78;
		//z is private therefore it cannot be accessed by the inherited class
		}
		void getdata(){
			cout<<x<<endl<<y<<endl;
		}
};

int main()
{
	B p;
	p.getdata();
	return 0;
}
