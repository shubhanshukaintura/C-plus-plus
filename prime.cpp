#include<iostream>
using namespace std;
int main()
{
     int n,i,c=0,j;
     cin>>n;
     int a[n];
     for(i=0;i<n;i++){
          cin>>a[i];}
     cout<<"PRIME NUMBERS"<<endl;
     for(i=0;i<n;i++){
          int flag=1;
          c=a[i];
          for(j=2;j<c;j++){
               if(c%j==0){
                    flag=0;
                    break;}}
          if(flag==1){
               cout<<c<<endl;}}
      return 0;

}
