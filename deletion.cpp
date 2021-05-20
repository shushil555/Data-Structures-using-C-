#include<iostream>
using namespace std;

int main()
{
	int maxsize=10;
	int arr[maxsize]={10,20,30,40,5,6,7,8,9,7}, l=0,u=maxsize-1,pos,num;
	
	for(int i=0;i<maxsize;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"Enter the position: "<<endl;
	cin>>pos;

	for(int i=pos-1;i<u;i++)
	{
		arr[i]=arr[i+1];
	}
	u--;
	for(int i=0;i<u+1;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
