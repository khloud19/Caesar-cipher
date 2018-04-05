#include <bits/stdc++.h>
using namespace std;

//function to return first uppercase
//character from given string
char getFirstUppercaseCharacter(string str)
{
	//loop that will check uppercase character
	//from index 0 to str.length()
	for(int i=0; i<str.length(); i++)
	{
		//'isupper() function returns true
		//if given character is in uppercase
		if(isupper(str[i]))
			return str[i];
	}

	return 0;
}

//Main function
int main()
{
	//defining two strings
	string str1 ;
	string str2 ;
	cout<<"Write first string"<<endl;
    cin>>str1;
    cout<<"Write second string"<<endl;
    cin>>str2;
	//first string check
	cout<<"Given string: "<<str1<<endl;
	char chr = getFirstUppercaseCharacter(str1);
	if(chr)
		cout<<"First uppercase character is: "<<chr<<endl;
	else
		cout<<"No uppercase character found in string"<<endl;

	cout<<endl;

	//second string check
	cout<<"Given string: "<<str2<<endl;
	chr = getFirstUppercaseCharacter(str2);
	if(chr)
		cout<<"First uppercase character is: "<<chr<<endl;
	else
		cout<<"No uppercase character found in string"<<endl;

	return 0;
}
