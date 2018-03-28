#include <iostream>

using namespace std;

int main()
{
    double nh,gross,extra,ndepen,security,federal,state,uniondues,insurance;
    cout<<"How many hours do you work in week?"<<endl;
    cin>>nh;
    cout<<"How many dependents do you have?"<<endl;
    cin>>ndepen;
    if(nh>0&&nh<=40){
        gross=nh*16.78;
    }
    else if(nh>40){
         extra=nh-40;
        gross=(nh*16.78)+(1.5*extra*16.78);
    }
    cout<<"Gross pay = "<<gross<<endl;

    security=0.06;
    federal=0.14;
    state=0.05;
    uniondues=10;


    cout<<"Withheld for social security tax= "<<security<<endl;
    cout<<"Withheld for federal income tax= "<<federal<<endl;
    cout<<"Withheld for union dues= "<<uniondues<<endl;

    if(ndepen>=3){
        insurance=35;
        cout<<"Withheld for health insurance= "<<insurance<<endl;
            }
     else if(ndepen==0 || ndepen<3){
        insurance=0;
     }
     cout<<"The net-take home pay is= "<<gross-(gross*(security+federal+state)+uniondues+insurance);
    return 0;
}
