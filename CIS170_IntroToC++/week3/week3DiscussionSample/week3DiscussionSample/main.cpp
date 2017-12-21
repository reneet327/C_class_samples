 #include<iostream>

#include<conio.h>

using namespace std;

 
 
void main()

{

int i,j,k;
for(k=1;k<=32;k++)
{
for(i=k;i<=30;i++)
cout<<"*";
for(j=2;j<=k;j++)
cout<<" ";
for(j=2;j<=k;j++)
cout<<" ";
for(i=k;i<=30;i++)
cout<<"*";
cout<<endl;
}
_getch();
}