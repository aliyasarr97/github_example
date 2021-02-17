#include <stdio.h>
 
 int factorial(int numb)
 {
 	if(numb == 0)
 		return 1;
 	return numb * factorial(numb - 1);
 }
 
 int evennumb(int numb)
{
	if(numb == -1)
		return 1;
	else	
	{
		if(numb % 2 == 0)
			printf("\n%d",numb);
		return evennumb(numb - 1);
	}
} 
 
 int main()
{
	int value;
	printf("bir sayi giriniz:");
	scanf("%d",&value);
	int fact = factorial(value);
 	printf("\n%d!=%d ",value,fact);
 	
	factorial(value);
	evennumb(value);
 } 
