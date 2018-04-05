
#include <iostream>
using namespace std;
int main()
{
int a,b,r,q;
do
{
cout<<"Enter the value of divisor :";
cin>>a;
cout<<"Enter the value of divident :";
cin>>b;
q=a/b;
r=a%b;
cout<<endl;
if(b==0)
{
cout<<"Your result is infinity\n";
cout<<"While reminder is:0\n";
}
else
cout<<"The Qotient is :"<<q;
cout<<endl<<endl;
cout<<"The Remander is :"<<r;
cout<<endl<<endl<<endl;

cout<<endl<<endl;
}
while(a!=0 || b!=0);
}

