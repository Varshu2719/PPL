#include<stdio.h>
int main()
{
	int cp,sp;
	scanf("%d%d",&cp,&sp);
	int difference=0;
	difference = sp - cp;
	float profit=0;
	profit = (float)difference/cp;
	if(difference>0)
	{
		printf("%f%% is the profit percentage",profit*100);
	}
	else
	{
		printf("%f is the loss percentage",profit*100);
	}
}
