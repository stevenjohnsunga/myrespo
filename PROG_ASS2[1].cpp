/*
*NAME: <Steven John A. Sunga>
*DATE: <July 27, 1018>
*MODULE: <Loop Back Favorite>
*DESCRIPTION: <Favorite>
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout<<"name: Steven John A. Sunga";
    cout<<"\ncourse & section: BS CPE 2-1D";
  
    string again="y"; /* a variable that decides wether the program continues to run or not */
    while (again=="y"||again=="Y") {   /*to loop back if the user wants to try again */
   
    char name[256]; /* a variable for name */
    string favnum; /* a variable for favorite number */
    char favmov[256]; /* a variable for favorite movie */
    cout<<"\nEnter your fullname:"; /* asks the user to input his fullname */
    cin.getline(name,256); /* puts the input into this variable */
    cout<<"\nEnter your favorite number:"; /* asks the user to input his favorite number */
getline(cin,favnum); /* puts the input into this variable */
    cout<<"\nEnter your favorite movie:"; /* asks the user to input his favorite movie */
    cin.getline(favmov,256); /* puts the input into this variable */
    cout<<"\n\n\t"<<name<<", your favorite number is \""<<favnum<<"\" and your favorite movie is "<<favmov ; /* prints the output of the user inputs */
    cout<<"\n Do you want to try again? y/n \n";
    /* asks the user if he wants to run the program again with just typing "y" */
    getline(cin,again); /* this decided wether the program continues to run or not */
    }
cout<<"\n Thank you for using the program."; /* if the user decided to end then this will pop out */
    return 0;
}
