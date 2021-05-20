#include<iostream>
#include<cctype>

using namespace std;
#define size 5
struct Queue
{
	int head, tail;
	int item[size];
	
};

void enque(struct Queue *Qe)
{
	if(Qe->tail==size)
	{
		cout<<"Queue is full"<<endl;
	}
	else {
	int data;
	cout<<"Enter data: "<<endl;
	cin>>data;
	
	Qe->item[(Qe->tail)++]=data;
} 
}
void deque(struct Queue *Qe)
{
	if(Qe->tail==0)
	{
		cout<<"Underflow"<<endl;
		
	}
	else
	{
		for(int i=1;i<Qe->tail;i++)
		{
			Qe->item[i-1]=Qe->item[i];
			(Qe->tail)--;
		}
	}
}

void IsFull(struct Queue *Qe)
{
    if((Qe->tail)==size){
        cout << "The queue is full." <<  endl;
    }
    else
    {
        cout << "The queue has " << size-Qe->tail << " items reamining."<< endl;
    }  
}

void IsEmpty(struct Queue *Qe)
{
    if((Qe->tail)==0){
        cout << "The queue is empty." << endl;
    }
    else
    {
        cout << "The queue is not empty."<< endl;
    }
}
void Display(struct Queue *Qe)
{
   if((Qe->tail)==0){
        cout << "The queue is empty. So, noting to display." << endl;
    }
    else
    {
        cout << "The contents of queue are : "<< endl;
        for (int i = 1; i <= Qe->tail; i++)
        {
            cout << Qe->item[i] << "  ";
        }
        cout << endl;   
    } 
}

int main()
{
	struct Queue *Qe;
	char option;
	Qe->head=0;
	Qe->tail=0;
	do
	{
		cout << "********************" << endl;
        cout << "Select the type of operation you want to peform."<< endl;
        cout << "********************" << endl;
        cout << " E -> to enqueue " << endl;
        cout << " D -> to dequeue " << endl;
        cout << " C -> to check if empty "<< endl;
        cout << " F -> to check if full "<< endl;
        cout << " T -> to display the contents "<< endl;
        cout << " X -> to exit "<< endl;
        cout << " Enter your choice ";
        cin >> option;
        switch(option)
        {
        	case 'E':
        		enque(Qe);
        		break;
        	case 'D':
            deque(Qe);
            break;

        case 'C':
            IsEmpty(Qe);
            break;

        case 'F':
            IsFull(Qe);
            break;

        case 'T':
            Display(Qe);
            break;

        default:
            cout << "Enter the correct option."<< endl;
        }
    }while (option!='X');
return 0;
}
		

