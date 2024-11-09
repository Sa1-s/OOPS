#include <stdio.h>
int main()
{
	int i,n;
	float sum=0.0; float avg=0.0;
	float a[n];
	printf("Enter the range: " );
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter the value of a[%f]: ",i);
		scanf("%f", &a[i]);
		/*for(i=0;i<n;i++)
		printf("%f", a[i]);*/
		sum=0.0;
	}
		for(i=0;i<n;i++)
	{
	    sum+=a[i];
	    avg=sum/n;
	}
	printf("The Average: %f", avg);
	return 0;
}
