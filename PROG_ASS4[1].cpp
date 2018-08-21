#include <iostream>

using namespace std;

int main () {

float answer,trueans;
trueans=4000;
string given1,given2;
cout<<"\nSolve the math problem:";
cout<<"\n";
cout<<"\n3/4 of the block of wood is floating above the water and the rest of its part is submerged under water. The block of wood is 10m high. Find the density of the block of wood in kg/m^3.";

cout<<"\nEnter the given(1):";
cin>>given1;
cout<<"\nEnter given(2):";
cin>>given2;
cout<<"\nEnter your Final Answer:";
cin>>answer;

if (answer!=trueans) {
cout<<"\nYour answer is incorrect!";
cout<<"\nAnswer and solution:";
}
if (answer==trueans) {
cout<<"\nYour answer is correct!";
cout<<"\nSolution:";
}
return 0;
}