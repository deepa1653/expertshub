#include<stdio.h>
#include<conio.h>
void main()
{
  int poori,rpoori,spoori,kpoori,eatr,eats,eatk;
  clrscr();
  printf("Enter no of poori:");
  scanf("%d",&poori);
  printf("\nEnter ragul poori:");
  scanf("%d",&rpoori);
  eatr=poori*rpoori/100;
  printf("\nEnter sanjay poori:");
  scanf("%d",&spoori);
  eats=poori*spoori/100;
  poori=poori-rpoori-spoori;
  printf(" \n R and S balance:%d",poori);
  printf("\nEnter kamali poori:");
  scanf("%d",&kpoori);
  eatk=poori*kpoori/100;
  poori=poori-eatk;
  printf("Balanced poori:%d",poori);
  getch();
}