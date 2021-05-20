#include<iostream>
using namespace std;

void TOH(int num, char source, char aux, char dest)
{
if(num==1)  
    {
        cout << num << " moved from " << source << " to " << dest << endl;
    }
    else
    {
        TOH(num-1, source, dest, aux);    /// Move the n-1 disc from source to auxilairy using destination  as reference
        cout << num << " moved from " << source <<  " to " << dest << endl;
        TOH(num-1, aux, source, dest);  // Move the n-1 disc from auxilariy to destinantion using source as reference
    }
    
	
}
int main()
{
	int n;
	cout<<"enter n: "<<endl;
	cin>>n;
	TOH(n,'A','B','C');
	return 0;
}
