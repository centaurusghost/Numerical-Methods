#include<iostream>
#include<math.h>
using namespace std;
float FunctionValue(float x){
return(x*log10f(x)-1.2);
}
float DerivativeValue(float x){
return( (1/log(10)) +log10(x) );
}
int main(){
    float fx,x;
    x=3;
    for(int i=0; i<=100; i++){
        fx=FunctionValue(x);
        x=x-FunctionValue(x)/DerivativeValue(x);
}
cout<<x;

}