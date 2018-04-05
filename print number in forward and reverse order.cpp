#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int val1;
    int val2;
    int val3;
    cout<<"Please enter your 3 numbers:";
    cin>>val1>>val2>>val3;

    cout<<"\nYour numbers forward:\n";
    cout<<val1<< "\n"<<val2<<"\n" <<val3<<"\n";
    cout<< "Your numbers reversed:\n";
    cout<<val3<<"\n"<<val2 <<"\n"<<val1<<"\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}
