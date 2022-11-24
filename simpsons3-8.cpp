#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) 1/(1+x*x)
int main()
{
	 float lower, upper, integration=0.0, stepSize, k;
	 int i, subInterval;
	 printf("Enter the initial limit: ");
	 scanf("%f", &lower);
	 printf("Enter the final limit: ");
	 scanf("%f", &upper);
	 printf("Enter number of sub intervals: ");
	 scanf("%d", &subInterval);
	 stepSize = (upper - lower)/subInterval;
	 integration = f(lower) + f(upper);
	for(i=1; i<= subInterval-1; i++)
	{
	  	k = lower + i*stepSize;
	  	if(i%3 == 0)
	  	{
	   		integration = integration + 2 * f(k);
	  	}
	  	else
	  	{
	  		 integration = integration + 3 * f(k);
	  	}
	}
	 integration = integration * stepSize*3/8;
	 printf("\nThe required integral is: %.5f", integration);
	 getch();
	 return 0;
}
