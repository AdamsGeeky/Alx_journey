#include<iostream>
using namespace std;
int main()
/*
sizeof() is a bluid in funtion that is used to check the compiler size allocation in byle
*/
{
  int choice;
    cout<<"the size of        int type : "<<sizeof(int)<<" byte"<<endl;
    cout<<"the size of      float type : "<<sizeof(float)<<" byte"<<endl;
    cout<<"the size of     double type : "<<sizeof(double)<<" byte"<<endl;
    cout<<"the size of       char type : "<<sizeof(char)<<" byte"<<endl;
    cout<<"modifiers of the primative type "<<endl;
      cout<<"\n \t1 unsigned \n \t2 long"<<endl;
/* unsinghed is nothing but is a way of telling the compiler we only work with
positive number that all the posible bit combination is to allocated to posivite size
  unsighned only work with int and char

while long: implies that to double the size of a primitive to two



*/
cout<<"the size of unsigned int type  : "<<sizeof(unsigned int)<<" byte"<<endl;
cout<<"the size of unsigned char type : "<<sizeof(unsigned char)<<" byte"<<endl;
cout<<"the size of long int type      : "<<sizeof(long int)<<" byte"<<endl;
cout<<"the size of long double type   : "<<sizeof(long double)<<" byte"<<endl;




    return 0;
}
