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
  printf("\nEnter sanjay poori:");
  scanf("%d",&spoori);
  printf("\nEnter kamali poori:");
  scanf("%d",&kpoori);
  eatr=poori*rpoori/100;
  eats=poori*spoori/100;
  eatk=poori*kpoori/100;
  poori=poori- eatr-eats-eatk;
  printf("\nBalanced poori:%d",poori);
  getch();
}