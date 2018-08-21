// Steven John A. Sunga
// BS - CPE 2-1 D
#include <iostream>
#include <cmath>
using namespace std;
int main ()   {
	
double forc1,m1,m2,d2,d3;
cout<<"input mass 1:";
cin>>m1;
cout<<"input mass 2:";
cin>>m2;
cout<<"input distance:";
cin>>d2;
d3=d2*d2;
forc1=0.0000000667*(m1*m2/d3);
cout<<"The force is "<<forc1<<"N";
return 0;

}