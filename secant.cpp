#include<iostream>
#include<math.h>
#define f(x) pow(x,3)-2*x-5
using namespace std;
int main()
{
	float x0,x1,f1,f0,x,error;
	int count=3;
	cout<<endl<<"\t\tSECANT METHOD"<<endl;
	cout<<"enter the first guess/root :";
	cin>>x0;
	cout<<"enter the second guess/root :";
	cin>>x1;
	cout<<"enter the tolerable error : ";
	cin>>error;
//	do{
	cout<<"ITEREATION -"<<1;
	cout<<" ROOT= "<<x0;
	cout<<endl<<"ITEREATION -"<<2;
	cout<<" ROOT= "<<x1;
	do{

	f0=f(x0);
	f1=f(x1);
	x=x1-((x1-x0)*f1)/(f1-f0);
	cout<<endl<<"ITEREATION -"<<count<<" ROOT= "<<x;;
	x0=x1;
//	cout<<endl<<x0;
	x1=x;
//	cout<<endl<<x1;
	
	}while((fabs(x1-x0)/x1)>=error);
	return 0;
}

