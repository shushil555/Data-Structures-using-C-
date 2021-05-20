//////circular queue is head vary
#include<iostream>
using namespace std;
int main(){
    int head=-1,tail=-1;
    int size=0;
    cout<<"enter size:";
    cin>>size;
    char data[size];
    char choice,temp;
    do{
        cout<<"enter choice:";
        cout<<"The choices are: \n i=> Insert \n d=>Delete \n o=>Output"<<endl;
        cin>>choice;
        switch(choice){
            case 'i':
                if(head==(tail+1)%size){
                    cout<<"the queue is full\n";
                }else{
                    cout<<"enter data:";
                    cin>>temp;
                    if(head==-1){
                        head=0;
                        tail=0;                     ///for array to initilize from 0
                    }else{
                        tail=(tail+1)%size;
                    }
                    data[tail]=temp;
                }
                break;
            case 'd':
                if(tail==-1){
                    cout<<"queue is empty\n";
                }
                else{
                    cout<<data[head]<<endl;
                    if(head==tail){
                        head=-1;
                        tail=-1;
                    }else{
                        head=(head+1)%size;
                    }
                }
                break;
            case 'o':
                for (int i=0; i<=tail; i++)
                {
                    cout << data[i]<<endl;
                }
                break;
            default:
                cout<<"quiting\n";
                choice = NULL;                     ////break the while loop
        }
    }while(choice);
    return 0;
}
