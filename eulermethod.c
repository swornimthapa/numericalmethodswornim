#include<stdio.h>
#include<conio.h>
#define f(x,y) x+y
int main()
{
	 float x0, y0, xn, h, yn, slope;
	 int i, n;
	 printf("Enter Initial Condition\n");
	 printf("x0 = ");
	 scanf("%f", &x0);
	 printf("y0 = ");
	 scanf("%f", &y0);
	 printf("Enter calculation point xn = ");
	 scanf("%f", &xn);
//	 printf("Enter number of steps: ");
//	 scanf("%d", &n);
	 printf("Eneter  the vlaue of h: ");
	 scanf("%f",&h);
	 printf("\nx\ty\n");
	 printf("------------------------------\n");
//	 for(i=0; i<n; i++)
//	 {
		  
		do{
				x0 = x0+h;
		yn = y0 + h * slope;
		y0 = yn;
		slope = f(x0, y0);
		printf("%.4f\t%.4f\n",x0,yn);
		}while(x0!=xn);
	
//	}
	 printf("\nValue of y at x = %0.2f is %0.3f",xn, yn);
	 return 0;
}

