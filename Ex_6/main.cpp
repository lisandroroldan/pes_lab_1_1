//LAB 1 "Introduction to C++" - EX 6

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

float fx(float x)
{
  return sin(x);
}
float dfx(float x)
{
  return cos(x);
}

int main()
{
using namespace std;

    //Definition of variables
    double k, K, a, hk, y, yy, error, error_r;

    a=1;
    K=45;
    y=dfx(a);

    for(k=1;k<K;k=k+1)
    {
     hk=1/pow(2,k);
     yy=(fx(a+hk)-fx(a-hk))/(2*hk);
     error=abs(y-yy);
     error_r=error/y;
     cout<<k<<"     "<<fixed<<setprecision(8)<<hk<<"    "<<yy<<"    "<<error_r<<endl;
    }
}
