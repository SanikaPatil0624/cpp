#include<iostream>
using namespace std;
class Date{
        int day;
	int month;
	int year;

	public: Date(){
 	day=1;
 	month=1;
        year=2020;
	}
Date(int d,int m,int y){
 	 day=d;
 	 month=m;
  	year=y;
	}
	public: void displayInfo()
	{
	cout<<day<<"/"<<Monthcalculater(month)<<"/"<<year<<endl;
	}

	string Monthcalculater(int mon){
	string cal[]={" ","jan","feb","mar","apr","may","june","july","aug","sep","oct","nov","dec"};
	return cal[mon];
	}
};
	int main(){
	int d,m,y;
	cout<<"Enter the day"<<endl;
	cin>>d;
	cout<<"Enter the month"<<endl;
	cin>>m;
	cout<<"Enter the year"<<endl;
	cin>>y;
	Date d1;
	Date d2(d,m,y);
	d1.displayInfo();
	d2.displayInfo();
return 0;
}

