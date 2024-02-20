#include<iostream>
#include<string>
using namespace std;
class Movie
{
	public:
	string nm;
	int price;
	int getData()
	{
		cout<<"Enter the movie name : ";
		cin>>nm;
		cout<<"Enter the movie price : ";
		cin>>price;
		
	}
	
};
class Food
{
	public:
	string nm;
	int price;
	int getData()
	{
		cout<<"Enter the food name : ";
		cin>>nm;
		cout<<"Enter the food price : ";
		cin>>price;
		
	}
	
};
int main()
{
	Movie ob;
	Food ob1;
	ob.getData();
	ob1.getData();
	return 0;
}
