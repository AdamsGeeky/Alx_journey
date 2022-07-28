/* loops iteration is the very infortant topic to graps
its fundamental to problem solving
there are four(4) type of loops
1. while
2. do while
3. for
4. for each
*/
#include<iostream>
using namespace std;
int main(){
/*string  input,password = "Adams";
 cout<<"Enter ur password";
 while(password != input ){
  cin>>input;
  cout<<"access denial \n"<<"\t try Agin"<<endl;
 }
 cout<<"Passward accepted"<<endl;
 */
 int n ,sum;
 int i = 1;

 cout<<"Enter the Value of N terms to be multiply"<<endl;
 cin>>n;
while(i <= n){
     cout<<"the value is = "<<n*i<<endl;
     sum += i;
    i++;
}
 cout<<"the final Vulue sum "<<sum;
 cout<<"out of loops  \n \n"<<i;
return 0;
}
