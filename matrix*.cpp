
Sanika Patil <sanikapatil0624@gmail.com>
4:14 PM (4 hours ago)
to me, Arpita

#include<iostream>
using namespace std;
class Matrix
{
    private:
int arr[3][3];

   
    public:\
    int i,j;
     Matrix() {
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j <3; j++) {
                arr[i][j] = 0;
            }
        }
    }
   
    int input()
    {
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>arr[i][j];
}
}
return 0;

    }

Matrix operator +(const Matrix& c2)
{
   Matrix c3;
   
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           c3.arr[i][j]=arr[i][j]+c2.arr[i][j];
         
       }
   }
    return c3;
}


int display()
{
   for(i=0;i<3;i++)
    {
       cout<<endl;
   for(j=0;j<3;j++)
    {
cout<<arr[i][j];
cout<<" ";
    }
   }
   return 0;
}

};
int main()
{
    Matrix c1,c2,sum;
    c1.input();
    c2.input();
    sum=c1+c2;
    sum.display();
 
    return 0;
}
