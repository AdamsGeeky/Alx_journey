#include<iostream>
/* maths library for square root funtion() used */
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int choice;
    int a, b, c, d,n,Nth,l, p,Distance,FirstRoot,SecondRoot,SumofN, u, v;
    cout<<"\t \t welcome to simple maths calculator"<<endl;
    cout<<"\n \t here are sample of what we can do\n \n\t1 Area and perimeter of rectangle \n\t2 sumple natural number \n\t3 qudreatic equations \n\t4 terms of A. P. \n\t5 speed of an object"<<endl;
    cout<<"\n \t\t choose the number from( 1 - 6 ) the above to go with ? "<<endl;
    cin>>choice;
    /*
    variable declarations to be used globally
    i will used intiger even though the results of some calculation would be decimals
    in that case i would type cast if require
    */
switch(choice){
  case 1: {
   /* rectangle perimeter and Area section */
        cout<<" \t\t welcome to Area and perimeter and rectangle finder "<<endl;
        cout<<"\n Enter lenght and breath keep the rest for us \n"<<endl;
        cin>>l>>b;
        a = l*b;
        p = 2*( l + b );
        cout<<"the area of a rectangle with lenght: "<<l<<" and breath: "<<b<<" is := "<<a<<"\n\n the perimeter is := "<<p<<endl;
        cout<<"\t\t\t\t SEE U NEXT TIME bye ! ! ! "<<endl;

  }break;
  case 2:{
    /* sum of natural number section*/
        cout<<" \t welcome to sum of natural numbers series "<<endl;
        /* take the number of series require*/
        cout<<"enter the starting point "<<endl;
        cin>>n;
        SumofN = (n*(n + 1))/2;
        cout<<"the sum of "<<n;
        cout<<" the value of n: is = "<<SumofN<<endl;
        cout<<"\t\t\t\t SEE U NEXT TIME bye ! ! ! "<<endl;
  }break;
  case 3:{
  /* Qudratic Equestion section*/
        cout<<" \t\t welcome to Qudratic roots finder"<<endl;
        cout<<"enter the value of a: ";
        cin>>a;
        cout<<"\nenter the value of b: ";
        cin>>b;
        cout<<"\nenter the value of c: ";
        cin>>c;
        /* calculation */
        FirstRoot = (float)(-b + sqrt(pow(b,2) - 4*a*c))/(2*a);
        SecondRoot =  (float)(-b - sqrt(pow(b,2) - 4*a*c))/(2*a);
        cout<<"therefore the roots of the equation : "<<a<<" X2 "<<" "<<b<<" X "<<c<<" = 0 \n "<<"\n are : "<<FirstRoot<<" and "<<SecondRoot<<endl;
        cout<<"\t\t\t\t SEE U NEXT TIME bye ! ! ! "<<endl;
  }break;
  case 4:{
   /* terms of an A. P. section*/
        cout<<"\n which tearms in the Series Nth := ";
        cin>>n;
        cout<<" \t\t welcome to AP terms finder"<<endl;
        cout<<"enter the value of first terms a:= ";
        cin>>a;
        cout<<"\nenter the value of commom diffirent d:= ";
        cin>>d;
        Nth = a + (n -1) * d;
        cout<<"therefor the value of the terms  : "<<n<<" is := "<<Nth;
        cout<<"\t\t\t\t SEE U NEXT TIME bye ! ! ! "<<endl;
  }break;
  case 5:{
  /* speed of an objects section*/
        cout<<"\t\t welcome to distance finder";
        cout<<"enter the value of initail velocity u := ";
        cin>>u;
        cout<<"\nenter the value of final velocity v := ";
        cin>>v;
        cout<<"\nenter the value of accelaration a:= ";
        cin>>a;
        Distance = (float)(pow(u,2) - pow(v,2))/(2*a);
        cout<<"therefore the value of distance is := "<<Distance<<endl;
        cout<<"\t\t\t\t SEE U NEXT TIME bye ! ! ! "<<endl;
  }break;
  default:  cout<<" \t\t\t choice out of range bye see u next time ! ! !"<<endl;

}


    return 0;
}

