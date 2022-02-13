#include<iostream>
#include<math.h>
using namespace std;
float GetFunctionValue(float x){
    return( 1/sqrt(1+x));
}
int main(){
    float x0=0,x1;
    for(int i=0; i<6; i++){
        x1=GetFunctionValue(x0);
        x0=x1;
    }
    cout<<"The root of eqn is:"<<x1<<endl;
}