#include <iostream>
#include <fstream> // Includes all the file streaming / file handling options in c++ 
using namespace std;
int main()
{
    ofstream fout; //ofstream means output file stream which is declared as fout means file output.
    ifstream fin; //ifstream means input file stream which is declared as fin mean files input.
    
    fin.open("intro1.c++"); //For opening a file with a valid file name
    string str;
    fin>>str;
    cout<<str<<endl;
    fin>>str;
    cout<<str<<endl;
    getline(fin,str);
    cout<<str<<endl;

    fin.seekg(10,ios::beg); //seekg is for looking for the data in the given file by maintaining the condition in the given ().
    fin>>str;
    cout<<str<<endl;

    fin.seekg(0,ios::beg);
    while(!fin.eof()) // Starting a loop for going through each of the line of data in the mentioned file upto eof means end of file
    {
        getline(fin,str,'\n');
        cout<<str<<endl;
    }
    fin.close(); //For closing a file

    fout.open("text.txt"); //In without append mode whenever a new line is written for printing in that new file is get printed by overriding the file contain whic was written earlier 
    fout.open("text.txt",ios::app); //In append mode same line is printed more than one time after running the code more than one time
    fout<<"This is what I am writing to my file"<<endl;
    fout<<"Welcome to C++"<<endl;
    fout.close();
    return 0;
}
//Don't run the whole code at once there are some parts needs to be commented out while running the code, all the topics of file handling are covered here so it is written whole in one c++ file