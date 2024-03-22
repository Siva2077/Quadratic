#include<math.h>
#include<stdio.h>
int main()
{
	float a,b,c,r1,r2,img,d;
	printf("Enter the coefficients of the quadratic equation: ");
	scanf("%f%f%f",&a,&b,&c);
	
	d=b*b-4*a*c;
	
	if(d>0)
	{
		r1=(-1*b + sqrt(d))/(2*a);
		r2=(-1*b - sqrt(d))/(2*a);	
		printf("\nThe roots are %.2f and %.2f\n",r1,r2);
	}
	else if(d==0)
	{
		r1=(-1*b)/(2*a);
		printf("\n %.2f is the only root\n",r1);
	}
	else
	{
		r1=(-1*b)/(2*a);
		img=sqrt(-1*d)/(2*a);
		printf("\nThe Imaginary roots are %.2f + %.2fi and %.2f - %.2fi\n",r1,img,r1,img);
	}
	return 0;
}
		
		
