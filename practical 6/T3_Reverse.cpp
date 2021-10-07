#include<bits/stdc++.h>
#include<vector>
#define MAX 10
using namespace std;


int main()
{
	string a;
	vector<string> b;
	int i,n;
	cout<< "Enter string" << endl;
	getline(cin,a);
	n=a.length();
	for( i=n ; i>=0 ; i--){
		cout<< a[i];	
	}
	cout<< endl;
	
	string a="hithere";
	b.push_back(a);
	cout<< reverse(b.begin(),b.end()) <<endl;

	return 0;
	
}
