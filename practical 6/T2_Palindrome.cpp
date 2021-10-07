#include<bits/stdc++.h>
#define MAX 10
using namespace std;


int main()
{
	string a,b;
	int i,n;
	cout<< "Enter string" << endl;
	getline(cin,a);
	n=a.length();
	for( i=0 ; i<n/2 ; ++i){
		if( a[i]!=a[n-1-i] ){
		cout<< " It is NOT palindrome" << endl;	
		exit(0);		
		}		
	}
	cout<< "It is panlindrome" << endl;
	return 0;
	
}
