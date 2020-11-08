#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cin>>x;
	if(x<1){
		cout<<"y="<<x;
	}

	if(x>=1&&x<5){
		cout<<"123"<<endl;
		x=2*x-1;
		cout<<"y="<<x;}
	getchar();
	return 0;
}

