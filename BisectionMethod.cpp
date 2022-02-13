#include<iostream>
using namespace std;

long double GetFunctionVal(long double x){
    long double temp=x*x-4*x-10;
    return temp;
}
int main(){
long double x1=5,x2=6,fc,c,fx1,fx2;
for(long long int i=0; i<=10000000; i++){
fx1=GetFunctionVal(x1);
fx2=GetFunctionVal(x2);
c=(x1+x2)/2;
fc=GetFunctionVal(c);
//cout<<fc;
if(fc*fx1<0){
x2=c;
}
else if(fc*fx2<0){
x1=c;
}
//cout<<fx1<<" "<<fx2<<" c:"<<c; system("pause");
}
cout<<"The root is:"<<c<<endl;

}