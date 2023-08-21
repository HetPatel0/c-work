 #include<stdio.h>
int6+ main()
{
	float p,r,t,interest;
	printf("enter p ");
	scanf("%f",&p);
	printf("enter r ");
	scanf("%f",&r);
	printf("enter t ");
	scanf("%f",&t);
    interest = (p*r*t)/100;
	printf("%f",interest);
}
