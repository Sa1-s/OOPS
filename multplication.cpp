#include <stdio.h>
int main()
{
	int n, pdt=1;
	printf("Enter the number you want multiplication generated for: ");
	scanf("%d", &n);
	for(int i=1; i<=10; i++)
	{
		pdt=n*i;
		printf("%d * %d = %d\n", n,i,pdt);
	}
	return 0;
}
