#include<stdio.h>
#include<conio.h>

void main()
{
   int no1,no2,o1,o2,o3,o4,o5;
   clrscr();
   printf("Enter input values:");
   scanf("%d%d",&no1,&no2);
   //printf("Enter input 2");
   // scanf("%d",&no2);
   o1=no1+no2;
   printf("sum of value:%d\n",o1);
   o2=no1-no2;
   printf("sub of value :%d\n",o2);
   o3=no1*no2;
   printf("multiplication of value:%d\n",o3);
   o4=no1/no2;
   printf("division of value:%d\n",o4);
   o5=no1%no2;
   printf("modulos of value:%d\n",o5);
   getch();
}
