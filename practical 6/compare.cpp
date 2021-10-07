#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a="",b="";
	getline(cin,a);
	getline(cin,b);
	int x=a.compare(b);
	if(a==b){
		cout<<"equal"<<endl;}
	else{
		cout<<"not equal"<<endl;}
	return 0;
}
