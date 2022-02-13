#include<iostream>
using namespace std;
float FunctionValue(float x, float y){
   float temp;
   temp= y/(x*x+y*y);
   return temp;
}
int main(){
float x[3]={0,0.5,1};
float temp;
float y0=1;
for(int i=0; i<3; i++){
y0=y0+0.5*FunctionValue(x[i],y0);
cout<<"The "<<i<<" derivate value is:"<<y0<<endl;
}
}