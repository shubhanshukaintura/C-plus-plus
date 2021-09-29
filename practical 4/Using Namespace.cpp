#include<iostream>
using namespace std;

namespace add{
     int sum(int a,int b){
          return a+b;
     }
}

namespace add1{
     float sum(float a,float b){
          return a+b;
     }
}    
using namespace add;
using namespace add1;
     
int main(){
     cout<<sum(1,2)<<endl;
     cout<<sum(1.2,2)<<endl;
     cout<<sum(1,2.1)<<endl;
     cout<<sum(1.1,2.1)<<endl;
     cout<<sum(0,0)<<endl;
     return 0;
     }
