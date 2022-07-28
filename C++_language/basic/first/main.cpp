// program to take the name of a user
#include <iostream>

using namespace std;

int main()
{
// variable declaration
string name;

cout<<"May I know your name: "<<endl;
/*
 I can usead cout object to take the name from the keybord
 but the problem is that cout asit reach the space it ignore the rest
 the solution to take two or move name you should used
 bluid in function
 getline(cin,name)
 with take two parameters cin(object) and name(variable)
*/
getline(cin,name);
cout<<"welcome mr. "<<name;
    return 0;
}
