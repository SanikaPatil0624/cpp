#include<iostream>
#include<string>
using namespace std;
class Box
{
	public : 
	int l,w,h;
	Box(int a, int b,int c)
	{
		l=a;
		w=b;
		h=c;
		
		cout<<a*b*c;
	}  
};

int main()
{
    
	Box b2(1,2,3);

	return 0;
}

