#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <conio.h>

using namespace std;
char mytext [200] ;
char myfilename[100] ;

int load_file()
{
//open an existing file (display the file content on the screen)
    ifstream dataFile;
    char *fileName = (char *) malloc(sizeof(char) * 100);

    cout << "Please , enter the name of a file to load: ";
    cin.ignore();
    cin.getline(fileName, 100, '\n');
    dataFile.open(fileName);
    if (dataFile.eof())
    {
        cout << "Empty File!" << endl ;
        return 1 ;
    }
    int counter = 0;
    while (! dataFile.eof())
        dataFile >> mytext[counter++] ;
    dataFile.close();
    cout << " Data Loaded " <<  endl ;
    cout << mytext << endl;
}

void displayFile (char fileName[] )
{
    fstream dataFile ;
    dataFile.open(fileName, ios::out);

    char word[100];
    if (!dataFile.eof())
    {
        dataFile >> word;
        while(dataFile.good())
        {
            cout<<word<<" ";
            dataFile>>word;
        }
        cout <<word;
        cout<<endl;
        cout << "File " << fileName << " opened.\n";
    }
    else cout << "File is empty" << endl ;
    dataFile.close();

    cout << mytext ;
}
//end of open an existing file (display the file content on the screen)



void CreateFile()
{
    //create a new file
    char *fileName = (char *) malloc(sizeof(char) * 100);
    ofstream dataFile;
    cout<<"Please , enter the name of the file: ";
    cin.ignore();
    cin.getline(fileName, 100, '\n');
    cout << fileName;
    dataFile.open(fileName);
    dataFile.close();
    cout<<" File open successfully"<<endl;
    //end of creating a file
    strcpy(myfilename , fileName) ;
}




void Savetext()
{

  cout<<"enter the data you want to save : "<<endl;
    char *data = (char *) malloc(sizeof(char) * 100);
  cin.ignore();
  cin.getline(data, 100, '\n');
  ofstream file ;
  cout<<" 1-save data in same file \n 2-save data in another file "<<endl;
  int choice;
  cin>>choice;
  if(choice==1)
  {
      file.open(myfilename ,ios::in) ;
      file << data ;
      file.close() ;

  }
  else if (choice==2)
  {
    cout << "Enter File Name : " ;
    char *filename = (char *) malloc(sizeof(char) * 100);
    cin.ignore();
    cin.getline(filename, 100, '\n');
    file.open(filename) ;
    file << data ;
    file.close() ;

  }

   else {
    cout << "enter a valid choice : "<<endl;
   }

}

void counting(){
char name[100];
	cout<<"Please enter the data file name: ";

	// reads the filename from the user
	cin.ignore();
	cin.getline(name, 100, '\n');

	// open the file for input.
	ifstream file(name, std::ifstream::in);
	// create the stream in read-only mode
	if(!file) {
		cout << "Cannot open file for reading.\n";
		_getch();


	}

	// declares character and integer variables
	char ch;
	int i=0;
	int words=1;

	// running the loop until file will end
	while(file.get(ch))
	{
		cout<<ch;
		if(ch==' ')
		{

			words++;
		}

		i=i+1;
	}
	cout<<"";

	// display the number of character, words and line
	cout<<"\nNumber of characters: "<<i-1<<"";
	cout<<"\nNumber of words: "<<words<<"";


	// closes the file
	file.close();

	_getch();

}

void finding(){
string search;
string line;
char name[100];

cout<<"Enter name of file"<<endl;
cin.ignore();
cin.getline(name, 100, '\n');
ifstream file(name,std::ifstream::in);

if(!file){
cout << "Unable to open file" << endl;
exit(1);
}
cout << "Enter word to search for: ";
cin >>search;
for(string::iterator i = search.begin(); i < search.end(); i++){
        *i = tolower(*i);
    }

size_t pos;
while(file.good())
  {
      getline(file,line); // get line from file
      pos=line.find(search); // search
      if(pos!=string::npos) // string::npos is returned if string is not found
        {
            cout <<"Found!";
            break;
        }
     else{
        cout<<"NOT FOUND!";
        break;
     }
  }
  file.close();
}

void clearing(){
char name[100];
cout<<"Please,Enter the file name"<<endl;
cin.ignore();
cin.getline(name, 100, '\n');
ofstream file (name, std::ofstream::out| ios::trunc);
file.close();

}

void append(){
std::ofstream file;
char name[100];
char content[200];
cout<<"Enter name of file"<<endl;
cin.ignore();
cin.getline(name,100,'\n');
cout<<"Enter text yo want to add"<<endl;
cin.ignore();
cin.getline(content,200,'\n');
file.open(name, std::ios_base::app);
file << content;
file.close();

}




int main()
{
    char out[500] =  "\nChoose : \n1- Load an existing file \n2- Create a new file \n3- Display file content \n4- Save the loaded text to the same file again or different one \n5- Counting words and characters \n6- Finding a word \n7-Clear file content \n8-Add more text\nE-End\n" ;
    int decision=0 ;
    while (cout << out && cin >> decision && decision != 'E' )
    {
        if (decision == 1) load_file();
        if (decision == 2) CreateFile() ;
        if (decision == 3) displayFile(myfilename) ;
        if (decision == 4) Savetext();
        if (decision == 5) counting();
        if (decision == 6) finding();
        if (decision == 7) clearing();
        if (decision == 8) append();
    }



    return 0;
}
