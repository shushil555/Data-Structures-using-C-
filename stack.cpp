#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define maxsize 5
int staack[maxsize];
int top=-1;
void push();
void pop();
void traverse();

int main()
{
	int item;
char choose;
do
{
	cout<<"Enter P for push "<<endl;
	cout<<"Enter a for popping "<<endl;
	cout<<"Enter t for traverse "<<endl;
	cout<<"Enter q to quit "<<endl;
	cin>>choose;
	if(choose=='P' || choose=='p')
	{
		push();
	}
	else if(choose=='A' || choose=='a')
	{
		pop();
		
	}
	else if(choose=='t' || choose=='T')
	{
		traverse();
	}
	
} while(choose !='Q '|| choose !='q');
return 0;


	
}
void push()
{
	int num;
	cout<<"ENter number to be pushed "<<endl;
	cin>>num;
	if(top<maxsize-1)
	{
		top=top+1;
		staack[top]=num;
		cout<<"element added"<<endl;
		
	}
	else {
		cout<<"Overflow"<<endl;
	}
}

void pop()
{
	if(top<0)
	{
		cout<<"Underflow"<<endl;
		
	}
	else
	{
		int item=staack[top];
		top--;
		cout<<item<<" removed"<<endl;
	}
}
void traverse()
{
	int list{top};
	for(int i=0;i<=list;i++)
	{
		cout<<staack[i]<<" ";
	}
	
}
