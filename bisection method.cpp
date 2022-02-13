#include<iostream>
#include<math.h>
using namespace std;
 //s3
 float f(float x){
 	return (x*x*x-2.5*x*x-2.46*x+3.96);
 } 
 //s5
 float f0(float x1, float x2){
 	return((x1+x2)/2);
 }
 float mulSUm(){
 	
 }
 main(){
 	float x1, x2, fx1, fx2, fx0, x0, e=0.000001,err;
 	int c=-1;
 	//s2
 	loop:
	cout<<"Take first intiial guess:"; cin>>x1;
 	cout<<"Take second intiial guess:"; cin>>x2;
 	//s4
 	fx1=f(x1);
 	fx2=f(x2);
 	if(fx1*fx2>0){
 		cout<<"The initital guess are invalid:";
 		goto loop;
	 }
	//s5
	loop1: 
	c++;
	x0=f0(x1,x2);
	fx0=f(x0);
	//s6
	if(fx1*fx2<0){
		x2=x0;
		fx2=fx0;
	}
	else{
		x1=x0;
		fx1=fx0;
	}
	err=abs(x1-x2);
	if(c<10){
		cout<<endl<<x0<<"  " <<c<<" "<<err;
		goto loop1;
	}
	else
	cout<<endl<<x0<<"  " <<c;

 }

