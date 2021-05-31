#include <stdio.h>
int main() 
{
	int a[100];
	int n, count=0;
	double avg=0, sum=0;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) 
	{
		scanf("%d", &a[i]);
		sum = sum + a[i];
	}
	avg = (double)sum/n;
	if(avg >= 9.5)
	{
		printf("0");
	}
	else
	{
		while(avg < 9.5)
		{
			sum = sum + 10;
			n++;
			avg = (double)sum/n;
			count++;
		}
		printf("%d", count);
	}
	return 0;
}