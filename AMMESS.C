#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dosa=50,tea=50,vada=200;
   int  aidly,adosa,atea,avada;
   int  midly,mdosa,mtea,mvada;
   clrscr();
   printf("Enter breakfast\n");
   printf("\nenter alagu idly:");
   scanf("%d",&aidly);
   printf("\nenter alagu dosa:");
   scanf("%d",&adosa);
   printf("\nentera alagu tea:");
   scanf("%d",&atea);
   printf("\nenter alagu vada:");
   scanf("%d",&avada);
   printf("Enter breakfast\n");
   printf("\nenter moni idly:");
   scanf("%d",&midly);
   printf("\nentermoni dosa:");
   scanf("%d",&mdosa);
   printf("\nenter moni tea:");
   scanf("%d",&mtea);
   printf("\nenter moni vada:");
   scanf("%d",&mvada);
   idly=idly-aidly;
   idly=idly-midly;
   dosa=dosa-adosa;
   dosa=dosa-mdosa;
   tea=tea-atea;
   tea=tea-mtea;
   vada=vada-avada;
   vada=vada-mvada;
   printf("\nBalance of food");
   printf(" balance idly: %d\n balance dosa: %d\n balance tea: %d\n balance vada:%d\n",idly,dosa,tea,vada);
   getch();
}



