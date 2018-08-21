//Steven John A. Sunga
//BS Cpe 2-1D

#include <iostream>
#include <cmath>
using namespace std;


int main () {

int d,a,b,c,r1,r2;
cout<<"\nEnter coefficient for a:";
cin>>a;
cout<<"\nFor b:";
cin>>b;
cout<<"\nFor c:";
cin>>c;
d=sqrt((b*b)-(4*a*c));
r1=(-b+d)/2*a;
r2=(-b-d)/2*a;
cout<<"Roots are "<<r1<<" and "<<r2;

return 0;
}