#include<iostream>
#include<math.h>
using namespace std;
	
		//hardcode
		//s3
		float f0 (float x)
		{
			return (x*x-4*x-10);
		}
		float fd (float x)
		{
			return (2*x-4);
		}
		//hardcode
		//s4
		float xn (float x, float f0, float fd )
		{
			return (x-(f0/fd));
		}
	
main(){
	//s2
	int c;
	float x0,E, err, x, f, fD;
	cout<<"Enter initial guess:";
	cin>>x0;
	cout<<"ENter maximum error:";
	cin>>E;
	f= f0(x0);
	fD= fd(x0);
	x= xn(x0, f, fD);
	err= abs(x-x0);
	c=1;
	while (err>=E)
	{
		c++;
		x0=x;
		f= f0(x0);
		fD= fd(x0);
		x= xn(x0, f, fD);
		err= abs(x-x0);
	 } 
	cout<<"Result obtained is: "<<x<< " at " <<c<<"th iteration";
	
	
}
