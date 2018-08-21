// Steven John A. Sunga
// BS - CPE 2-1 D
#include <iostream>
#include <cmath>
using namespace std;
int main ()   {
	double riceamount;	
	double bagsneeded;
	cout<<"input the amount of rice in pounds:";
	cin>>riceamount;
	bagsneeded=2205/riceamount;
	cout<<"it needs "<<bagsneeded<<" of bag/s.";
return 0;
}