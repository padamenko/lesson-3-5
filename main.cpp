#include <stdio.h>

main()
{
	int i=0;
	while(i<9)
	{
		printf("Hello\n");
		i++;
	}
	
	int a=0;
	while(a<15)
	{
		if(a%2==1)
		{
			printf("%i\n",a);
		}
		a++;
	}
	
	int b=5;
	int sum=0;
	while(b<16)
	{
		sum=sum+b;
		b++;
	}
	printf("Sum=%i",sum);
}
