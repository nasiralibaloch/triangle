#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int i,j,rows,sp;
cout<<"enter the number of rows"<<endl;
cin>>rows;
for(i=1;i<=rows;i++)
{
for(sp=rows;sp>=1;sp--)
{
	cout<<" ";
}
for(j=1;j<=2*i-1;j++)
{
	if(i==rows||j==1||j==2*i-1)
	{
		cout<<"*";
	}
	else
	cout<<" ";
}
cout<<endl;
	}
	return 0;	
}
