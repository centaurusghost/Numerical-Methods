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
float yn[3],y0=1;
for(int i=0; i<2; i++){
yn[i]=y0+0.5*FunctionValue(x[i],y0);
cout<<"y*:"<<yn[i]<<" ";
yn[i]=y0+(0.5/2)*(FunctionValue(x[i],y0)+ FunctionValue(x[i+1],yn[i]));
y0=yn[i];
cout<<"The "<<i<<" derivate value is:"<<y0<<endl;
}
}