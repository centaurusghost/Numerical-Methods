#include<iostream>
using namespace std;
int main(){
    float fx1,fx2,fc,x1=1,x2=3,c;
    for(int i=0; i<=5; i++){
       fx1=x1*x1-x1-2;
       fx2=x2*x2-x2-2;
        c=(x1*fx2-x2*fx1)/(fx2-fx1);
        fc=c*c-c-2;
        if(fc*fx1<0){
        x2=c;
        }
        if(fc*fx2<0){
        x1=c;
        }
        cout<<c<<endl;
    }
    cout<<"The root is:"<<c<<endl;
}