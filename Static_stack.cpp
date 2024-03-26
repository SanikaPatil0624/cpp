
#include <iostream>
using namespace std;
#define size 5

class Stack{
    public:
    int top=-1;
    int i,t,del;
    int arr[size];
    int element;
    void insert()
    {
        if( top>size-1)
        {
             cout<<"overflow\n";
        }
        else{
        top++;
        cout<<"Enter elements in stack: ";
        cin>>arr[top];
      
        }
    
       
    }
    void display()
    {
        t=top;
        while(t>=0)
        {   
            cout<<arr[t]<<endl;
            t--;
        }
    }
    
    int pop() 
    {
        if(top==-1)
        {
            cout<<"Underflow\n";
        }
        else{
           
            
            cout<<arr[top]<<" Deleted\n";
             top--;
             arr[top];
        }
        return 0;
    }

};
int main() {
    int choice;
    Stack st;
    cout<<"1.insert\n2.delete\n3.display\n4.exit";
     for(int j=0;j<100;j++)
    {
    cout<<"\nEnter yr choice = ";
    cin>>choice;
  
   
    switch(choice)
    {
        case 1: st.insert();
        break;
        
        case 2:st.pop();
        break;
        
        case 3:st.display();
        break;
        
        case 4:return 0;
        
        default:cout<<"Invalid choice";
    }
   
    }
    
    return 0;
}
