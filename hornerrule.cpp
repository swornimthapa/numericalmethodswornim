#include<iostream>
using namespace std;
int main()
{
	int i=0,x0=0,n=0,j=0;
	cout<<"\n\t\tHORNERS RULE";
	cout<<"\nEnter the root of the equation: ";
	cin>>x0;
	cout<<"\nEnter the highest power of the polinomial: ";
	cin>>n;
	int a[n],b[n];
	for(i=0;i<=n;i++)
	{
		cout<<"Enter the value of a"<<i<<" : ";
		cin>>a[i];
	}
	b[n]=a[n];
	cout<<"\nb"<<n<<" ="<<b[n];
	for(i=n-1;i>=0;i--)
	{
		b[i]=a[i]+b[n-j]*x0;
		cout<<"\nb"<<i<<" ="<<b[i];
		j++;
		
	}
	cout<<"\nHENCE,the value of the polynomial at the specfic value "<<x0<<" is= "<<b[0];
	return 0;
}
