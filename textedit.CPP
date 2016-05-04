#include <fstream.h>
#include <iostream.h>
#include <conio.h>
#include <process.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip.h>
#include <ctype.h>

int main ()
{
    clrscr();
   char data[100];

   cout<<" Welcome to the program of text editor"<<endl;
   while(1)
   {
   cout<<"\n1. To write in the file\n 2. to display the content in the text\n 3. delete  from the text\n 4. count the number of character \n 5.rename \n 6. exit"<<endl;
   // open a file in write mode.
   int inp,count=0;
   cin>>inp;

   switch(inp)
   {

    case 1: ofstream outfile;
   outfile.open("afile.txt",ios::app);
   cin >> data;

   cin.ignore();

   // again write inputted data into the file.
   outfile << data << endl;


   // close the opened file.
   outfile.close();
   break;
   case 2:
   // open a file in read mode.
   ifstream infile;
    cout << "Reading from the file" << endl;

 ifstream fin("afile.txt");
 char ch;
 while(fin)
 {
  fin.get(ch);
      
  cout<<ch;
 }
 fin.close();
 break;

 case 3: remove("afile.txt");
	    break;

 case 4:
	 ifstream fin1;
	fin1.open("afile.txt");
	char ch1;
	int count=0;
	while(!fin1.eof())
	{
		fin1.get(ch1);
		if(isalpha(ch1))
			count++;
	}
	cout<<"Number of alphabets in file are "<<count;
	fin1.close();


 break;
 case 5:
 rename("afile.txt","movieList.txt");
 break;
 case 6: exit(0);
 break;
 }
 }
   return 0;
}
