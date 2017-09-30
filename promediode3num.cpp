#include<stdio.h>
float a=1,cont=0,p=0,num;

main()
{ 
   while (a<4)
   { 
     printf("Dame el valor%d",a);
     scanf("%f",&num);
     cont=cont+num;
     a++;
    
   }
   p=cont/3;
   printf("\nEl promedio de los tres numeros es:%f",p);
}
