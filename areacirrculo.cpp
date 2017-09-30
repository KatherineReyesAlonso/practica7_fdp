#include<stdio.h>
#define pi 3.1416
float a,r;
 main()
 {
 	printf("Dame el valor del radio\n");
 	scanf("%f",&r);
 	
 	while(r<-0)
 	
 	{
 		printf("El valor debe ser positivo/n");
 		scanf("%f",&r);
	}
	a=pi*r*r;
	printf("\nEl area es:%f",a);
 }
