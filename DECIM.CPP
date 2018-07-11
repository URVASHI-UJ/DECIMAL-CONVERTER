#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int k,j,a[8];
k=0,j=0;
cout<<"enter the binary number";
for(int i=0;i<5;i++)
cin>>a[i];

while(i>=0)
{
 k+=(a[i]*(pow(2,j)));
 j++;
 i-- ;
 }
 cout<<"\n decimal number is "<<k/2;
 getch();
 }



