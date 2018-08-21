#include <iostream>

using namespace std;

int main() {

char name[56];
char address[56];
char birthdate[56];
char contact[56];
char email[56];

cout<<"\nEnter your Fullname:";
cin.getline(name,56);
cout<<"\nEnter your address:";
cin.getline(address,56);
cout<<"\nEnter your birthdate:";
cin.getline(birthdate,56);
cout<<"\nEnter your contact number:";
cin.getline(contact,56);
cout<<"\nEnter your emaail:";
cin.getline(email,56);

cout<<"\n\tInformations:";
cout<<"\nName:"<<name;
cout<<"\nAddress:"<<address;
cout<<"\nBirthdate:"<<birthdate;
cout<<"\nContact:"<<contact;
cout<<"\nEmail:"<<email;




return 0;
}