#include<iostream>
using namespace std;  

main(){
	int n;
	cout<<"Enter no. of variables:";
	cin>>n;
	float a[n][n+1];
	
	for(int i =0; i<n; i++){
		for(int j=0; j<=n; j++){
		cout<<j;
			cout<<"enter val of: "<<i<<j<<":";
			cin>>a[i][j];
			
		}
	}
	for (int l=0; l<n; l++){
		
	
	for( int i=0; i<n; i++){
		for(int j=0; j<=n; j++){
			a[i][j]=a[i][j]/a[l][l];
			for (int k=1;  k<n; k++)
			{
			
			a[i+k][j]=a[i+k][j]-a[i+k][j]*a[i][j];
		}	
		}
	}
	
}
for(int i=0; i<n; i++){
		for(int j=0; j<=n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
}
}
