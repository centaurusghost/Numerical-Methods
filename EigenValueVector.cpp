#include <iostream>
using namespace std;
float FindMax()
{
}
int main()
{
    float x[3][3];

    // default eigen vector
    float a[3] = {1, 1, 1};
    float a1[3];
    
    float EIGENVALUE;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>x[i][j];
            if(x[i][j]==0){
                a[i]=0;
            }
            
        }
        cout<<endl;
    }
   for(int k=0; k<=9; k++){
    a1[0] = a[0] * x[0][0] + a[1] * x[0][1] + a[2] * x[0][2];
    a1[1] = a[0] * x[1][0] + a[1] * x[1][1] + a[2] * x[1][2];
    a1[2] = a[0] * x[2][0] + a[1] * x[2][1] + a[2] * x[2][2];

    EIGENVALUE = a1[0]>a1[1]?a1[0]:a1[1];
    EIGENVALUE = EIGENVALUE>a1[2]?EIGENVALUE:a1[2];
    for(int i=0; i<3; i++){
        a[i]=a1[i]/EIGENVALUE;
    }
    
   }
cout<<"Eigenvalue:"<<EIGENVALUE<<endl;
    cout<<"The Eigen Vector  is:"<<endl;
    cout<<a1[0]<<" "<<a1[1]<<" "<<a1[2]<<endl;
    system("pause");
    
}