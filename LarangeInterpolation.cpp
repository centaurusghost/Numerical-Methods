#include<iostream>
using namespace std;
float NumDenum(float arr[],float x,int decesion){
    float temp=1.0;
    for(int i=0; i<=3;i++){
        if(i==decesion){
            continue;
        }
     temp=temp*(x-arr[i]);
    }
    return temp;
}
float *MemoryAllocation(int size){
return((float*)malloc(sizeof(float)*size));
}

int main(){
float *x,*y,point;
float result=0;
int count;
int val;
cout<<"Enter total no of values:";
cin>>val;
cout<<"Enter the Interpolation Point:";
cin>>point;
count=0;
x = MemoryAllocation(val);
y = MemoryAllocation(val);
while(count!=val){
cout<<"Enter x"<<count<<":";
cin>>x[count];
cout<<"Enter y"<<count<<":";
cin>>y[count];
count++;
}
count=0;
//cout<<NumDenum(x,5,-1);
while(count!=val){
result=result+NumDenum(x,point,count)/NumDenum(x,x[count],count)*y[count];
    count++;
}
cout<<result<<endl;
}