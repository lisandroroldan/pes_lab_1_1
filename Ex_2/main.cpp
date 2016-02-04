//LAB 1 "Introduction to C++" - EX 2

//Libraries
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cmath>
#include <iomanip>
#include <array>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdio.h>

//Main excersice

int main()
{
using namespace std;

//Definition of variables
float V[2][2];
float L12, L23, L31, S, r, p, rho ;

//First vector
V[0][0]=0;
V[0][1]=0;

//Second vector
V[1][0]=1;
V[1][1]=0;

//First vector
V[2][0]=0;
V[2][1]=1;



cout << "Vertex 1 = ["<<V[0][0]<<","<<V[0][1]<<"]"<<endl;
cout << "Vertex 2 = ["<<V[1][0]<<","<<V[1][1]<<"]"<<endl;
cout << "Vertex 3 = ["<<V[2][0]<<","<<V[2][1]<<"]"<<endl;

//Length of the sides of the triangle
L12=sqrt(pow((V[0][0]-V[1][0]),2)+pow((V[0][1]-V[1][1]),2));
L23=sqrt(pow((V[1][0]-V[2][0]),2)+pow((V[1][1]-V[2][1]),2));
L31=sqrt(pow((V[0][0]-V[2][0]),2)+pow((V[0][1]-V[2][1]),2));

cout << " "<<endl;
cout << "Lenght side 12 ="<<L12<<endl;
cout << "Lenght side 23 ="<<L23<<endl;
cout << "Lenght side 31 ="<<L31<<endl;


//Area of the triangle
S=0.5*abs((V[0][1]*V[2][1]+V[0][0]*V[1][1]+V[0][1]*V[2][0]-V[1][0]*V[0][2]-V[2][0]*V[1][1]-V[2][1]*V[0][0]));

cout << " "<<endl;
cout << "Area of the triangle ="<<S<<endl;

//Circumradius
r=L12*L23*L31/S;

cout << " "<<endl;
cout << "Circumradius ="<<r<<endl;

//Inradius
p=0.5*(L12+L23+L31);
rho=S/p;

cout << " "<<endl;
cout << "Inradius ="<<rho<<endl;

system("pause");
return(0);
}
