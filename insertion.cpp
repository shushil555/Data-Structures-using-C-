#include <iostream>
#include<conio.h>
using namespace std;


int main()
{
	int maxsize=10;
	int arr[maxsize]={1,2,3,4,5,6,7}, l=0, u=6;
	int pos,i,num;
	cout<<"enter the position: "<<endl;
	cin>>pos;
	cout<<"ENter number: "<<endl;
	cin>>num;
	
	if(u==maxsize-1)
	{
		cout<<"Overflow error"<<endl;
		
	}
	else 
	{
		for(i=maxsize-1;i>=pos-1;i--)
		{
			arr[i+1]=arr[i];
		
		}
			arr[pos-1]=num;
			u++;
	}
	cout<<"The element is added"<<endl;
	for(i=0;i<=u;i++)
	{
	
	cout<<arr[i]<<" ";
	
}
getch();
	return 0;
	
}
