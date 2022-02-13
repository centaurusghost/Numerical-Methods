#include<iostream>
using namespace std;
 float FunctionValue(float x){
     return(x*x-5*x+1);
 }
 int main(){
     float x0=0,x1=1,x=0;
    
   for(int i=0; i<=5; i++){
     float fx0=FunctionValue(x0);
     float fx1=FunctionValue(x1);
     x=((x0*fx1)-(x1*fx0))/(fx1-fx0);
    // cout<<x<<endl;
    // system("pause");
     x0=x1;
     x1=x;
   }

   cout<<x<<endl;

 }