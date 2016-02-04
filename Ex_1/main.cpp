//LAB 1 "Introduction to C++" - EX 1

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
float pi=3.14159265;
float xi=-1;
float xf=1;
float x;
float y1;
float y2;
float y3;
float h;
float a;

//Input
cout << "Please enter nuber of steps"<<endl;
cin>>h;

//Step calculation
a=(xf-xi)/h;

x=xi;
while (x<=xf+0.001)
{
    y1=cos(pi*x);
    y2=cos(4*pi*x);
    y3=cos(8*pi*x);

    cout<<x<<"    "<<y1<<"    "<<y2<<"    "<<y3<<endl;
    x=x+a;
}

system("pause");
return(0);
}

