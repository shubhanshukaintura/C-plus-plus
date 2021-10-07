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
	else if(x>0){
		cout<<"String 1 Has more size than String 2"<<endl;}
	else{
		cout<<"String 2 has more size than string 2"<<endl;}
	return 0;
}
