//regula falsi order 4
#include <iostream>
#include<string>
using namespace std;
float DerivateiveValue(float x, float y)
{
    return (x + (y * y));
}
int main()
{
    float k[4];
    float x = 0, y=1.0, temp, h=0.1;
    long double  MAINK=0;
    // cout << "Enter first value of y at x0:";
    // cin >> y;
    // cout << "Enter value of h:";
    // cin >> h;
    // cout << "Enter The point:";
    // cin >> temp;
    while (x <=0.2)
    {
        k[0] = h * DerivateiveValue(x, y);
        cout<<k[0]<<endl;
        k[1] = h * DerivateiveValue(x + h / 2, y + k[0] / 2);
               cout<<k[1]<<endl;
        k[2] = h * DerivateiveValue(x + h / 2, y + k[1] / 2);
               cout<<k[2]<<endl;
        k[3] = h * DerivateiveValue(x + h, y + k[2]);
        cout<<k[3]<<endl;
        MAINK =(1.0/6.0)*(k[0]+k[1]+k[2]+k[3]);
        cout<<MAINK<<endl;
        y = y + MAINK;

        cout << "Y:" << y << endl;
        x = x + h;
    }
   // cout << "The value at that point is:" << y << endl;
}