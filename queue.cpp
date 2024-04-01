#include<iostream>
using namespace std;
#define size 10

class Queue{
	public:
	int front=-1;
	int i;
	int rear=-1,element,arr[size];
	int Enqueue()
		{
		cout<<"Enter the element = ";
 		cin>>element;
		if(rear==size-1)
		{
			cout<<"Overflow......";
		}
		
		else{
			rear++;
			arr[rear]=element;
			cout<<"Element added successfully.....";
		}
		return 0;
	}
	
	int Dequeue()
	{
		if(front==-1 
		{
			cout<<"	Underflow......";
		}
		else
		{
			cout<<arr[front]<<" is removed....";
			front++;
		}
	}
	void display()
	{
		
		for(i=front;i<rear;i++)
		{
			cout<<arr[i];
		}
	}
};
int main() {
    int choice;
    Queue q;
    cout<<"1.Enqueue\n2.Dequeue\n3.Display\n4.exit";
     for(int j=0;j<100;j++)
    {
    cout<<"\nEnter yr choice = ";
    cin>>choice;
  
   
    switch(choice)
    {
        case 1:q.Enqueue();
        break;
        
        case 2:q.Dequeue();
        break;
        
        case 3:q.display();
        break;
        
        case 4:return 0;
        
        default:cout<<"Invalid choice";
    }
   
    }
    
    return 0;
}
