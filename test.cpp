//分段函数
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"shuru x= ";
    cin>>x;
    cout<<endl;
    if(x<1)
    cout<<"y= "<<x<<endl;

    if(x>=1&&x<5)
    cout<<"y= "<<2*x-1<<endl;

    if(x>=5&&x<10)
    cout<<"y= "<<3*pow(x,2)-11<<endl;

    if(x>=10)
    cout<<"y= "<<4*pow(x,3)-3*pow(x,2)-21<<endl;

    return 0;
}
