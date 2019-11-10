/*
	Input Validation with Ref Functions 
	A cleaner way to do input validation
	Validating input, an essential process.
	Source: http://stackoverflow.com/questions/514420/how-to-validate-numeric-input-c
	Keeping Dr. McMillan from breaking my code, defend against "dark side of the force",
	and/or legitimate user error. 
	//Try and Catch blocks are used in error checking
	Teacher: Dr. Tyson McMillan 
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;


void gradeScale(char);//function prototype

int main()
{
  char letterGrade = '\0'; 
  char Exit = 'y';
  do
  { 
    
  
    cout << "\n\x1b[93;1mWelcome to Grade Scale\x1b[0m" << endl;
    cout << "\x1b[96;1m**********************\x1b[0m "<< endl;
    cout << "\nI will tell you what Percentile your Grade falls into. " << endl;
    cout << "What Letter Grade did you recieve? :" << endl;
    letterGrade = validateChar(letterGrade);gradeScale(letterGrade);  
    
    cout << "Would you like continue? (y/n)" << endl;
    cin >> Exit; 
  
  }while(Exit == 'y');
  cout << "Hasta La Vista" << endl;
  
  return 0;
}


void gradeScale(char x)
{
  if(x == 'a'|| x == 'A')
  {
    cout << " \nYour Grade is between 100 - 90%" << endl;
    cout << " Great Job. " << endl;
  }
  else if(x == 'b' || x =='B')
  {
    cout << "\nYour Grade is between 89 - 80%" << endl;
    cout << "Keep up the good work. " << endl;
  }
  else if (x == 'c' || x == 'C')
  {
    cout << "\nYour Grade is between 79 - 70%" << endl;
    cout << "You're passing " << endl;
  }
  else if (x == 'd' || x == 'D')
  {
    cout << "\nYour Grade is 69 - 60%" << endl;
    cout << "D's get Degrees " << endl;
  }
  else if (x == 'f' || x == 'F')
  {
    cout << "\nYour Grade is 60 - 0% " << endl;
    cout << "Passing class isn't for everyone!!" << endl;
  }
  else
  {
    cout << "\n\x1b[91;4mError: Something went wrong\x1b[09" << endl;
    cout << "\x1b[91;3mPerhaps Typing is to difficult\x1b[0m" << endl;
  }
}
