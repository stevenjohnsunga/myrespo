#include <iostream>

using namespace std;

int main ()

{

char menu='y';
string fname;
string mname;
string lname;
bool isc=false;
string cs;
char tr;
cout<<"Steven John A. Sunga";
cout<<"\nBS CPE 2-1D";
cout << "\n       \nWelcome to my app! :D ";

cout << "\n\nEnter your First Name: ";
cin>>fname;

cout<<"Enter your Middle Name:";
cin>>mname;

cout<<"Enter your Last Name:";
cin>>lname;

cout <<"Enter your Course & Section:";
cin>>cs;
while (menu=='y'||menu=='Y') {
cout<<"\nWhat do you want to try?";
cout<<"\na. One Piece";
cout<<"\nb. Calculator";
cout<<"\nc. Owner of the App ";
cout<<"\nd. Exit";
cout<<"\nEnter your answer:";
cin>>tr;


if (tr=='a') {
char again = 'Y';
while (again=='y' || again=='Y') {
int score=5;
char answer;
char one = 'b';
char two='c';
char answer2;
char three='d';
char answer3;
char four='a';
char answer4;
char answer5;
char five='c';
cout<<"\n";
cout<<"One Piece Mini Quiz";
cout<<"\n";
cout<<"\nname:" <<fname<<" "<<mname<<" "<<lname;
cout<<"\nCourse & Section:"<<cs;
cout<<"\n";
cout<<"\n";
cout << "1. Whose nakama of strawhat died? \n a. Chopper \n b. Going merry \n c. Thousand sunny \n d. Usopp \n enter your answer (a/b/c/d):" ;
cin>>answer;
if (answer!=one) 
score -= 1;





cout<<"2.Who is the most loyal to luffy among his crew? \n a. Usopp \n b. Nami \n c. Zoro \n d. Sanji \n enter your answer (a/b/c/d): ";
cin>>answer2;
if (answer2!=two)

score -= 1;






cout << "3. Who is the most wanted man in One Piece world? \n a. Gol D. Roger \n b. Akainu \n c. Shanks \n d. Monkey D. Dragon \n enter your answer (a/b/c/d): "  ;
cin>>answer3;
if (answer3!=three) 
score -= 1;





cout << "4.Among the devil fruit users only one use its abilities in spanish language, who is this? \n a. Robin \n b. Sanji \n c. Chopper \n d. Zoro \n enter your answer (a/b/c/d): ";
cin>>answer4;

if (answer4!=four) 
score -=1;






cout << "5. Where was the Pirate King roger executed? \n a. At Raftel \n b. At Marine Headquarters \n c. At Louge Town \n d. At Impel Down \nEnter your answer (a/b/c/d): ";
cin >>answer5;
if (answer5!=five) 
score-=1;
cout<<"\n";
cout <<fname<<","<< "Your score is "<<score<<" .";
if (score==5)
cout <<"\nTruly a One Piece fan! :D";
else if (score==4)
cout << "\nNot bad for a One Piece fan! :D";
else if (score==3)
cout<<"\nLooks like you were also in timeskip. watch it again! :D";
else if (score==2)
cout<<"\nYou stopped watching? oh no, you're missing the climax!";
else if (score ==1)
cout <<"\nWhere did you hear this answer from?";
else if (score==0)
cout <<"\nOh, you should try watch One Piece! it's absolutely amazing! :D"<<endl ;


cout<<"\n";
cout << "\nDo you want to try again?y/n \n";
cin >> again;

}
cout<<"\nDo you want to go back to menu? y/n \n";
cin>>menu;
}
else if (tr=='b'){
char againcalc='y';
while (againcalc=='y'||againcalc=='Y') {
double ans;
float fnum,snum;
char op;
cout <<"Enter First Number:";
cin>>fnum;
cout<<"Choose operator: \n a. Plus \n b. Minus \n c. Times \n d. Divide By";
cout<<"\nchoose operator:";
cin>>op;
cout<<"Enter Second Number:";
cin>>snum;
if (op=='a')
ans=fnum+snum;
else if (op=='b')
ans= fnum-snum;
else if (op=='c')
ans=fnum*snum;
else if (op=='d')
ans =fnum/snum;

cout<<"=" <<ans;
cout<<"\nDo you want to calculate again? y/n \n";
cin>>againcalc;
}//loop to calculate again
cout<<"\nDo you want to go back to menu? y/n \n";
cin>>menu;
}//if else if tr
else if (tr=='c') {
char gobacktoc='y';
char forc;
while(gobacktoc=='y') {
cout<<"\na. Reason \nb. Expectation\nchoose (a/b):";
cin>>forc;
if (forc=='a'){

isc=true;}

else if (forc=='b'){

isc=false;
}

if (isc==true) {
cout<<"\nI am Steven John A. Sunga of BS CPE2-1D, \nAnd I made this simple app for our assignment. hope you have fun! :D";
cout<<"\n";
cout<<"Do you want to go back?y/n \n";
cin>>gobacktoc;
}

else if (isc==false) {
cout <<"\nI hope I learn more about this programming language. I really am excited as this is my first time in c++.";
cout<<"\n";
cout<<"Do you want to go back?y/n \n";
cin>>gobacktoc;
}
}
cout<<"\nDo you want to go back to menu?y/n\n";
cin>>menu;
}
else if(tr=='d') {
menu='n';
cout<<"\nThank you for using the app," <<fname;
}
}
cout<<"\n thank you for using the app.";
return 0;
}