//Steven John A. Sunga
//BS CPE 2-1D
#include <iostream>

using namespace std;

int main () {
float volume;
float density;
string again="yes";
float mass;
cout<<"\n\tWelcome to my app!";
cout<<"\n";
while (again=="yes") {
cout<<"\nType the volume and mass to calculate for it's density.";
cout<<"\nEnter volume:";
cin>>volume;
cout<<"\nEnter mass:";
cin>>mass;
density=mass/volume;

cout<<"\nThe density of the input values is "<<density <<".";

cout<<"\nDo you want to try again?";
cin>>again;


} //end of while again loop

cout<<"\nThank you for using the app!";


} //end of int main
