//LAB 1 "Introduction to C++" - EX 5

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
  return pow(x,3)-pow(x,2)+pow(x,1);
}
float dfx(float x)
{
  return 3*pow(x,2)-2*pow(x,1);
}

int main()
{
using namespace std;

    //Definition of variables
    float x, tolf, tolx, E, maxiter, ex, ef, k, dx, x_old;

    //User imputs
    cout<<"Tolf?"<<endl;
    cin>>tolf;
    cout<<"Tolx?"<<endl;
    cin>>tolx;
    cout<<"E?"<<endl;
    cin>>E;
    cout<<"maxiter?"<<endl;
    cin>>maxiter;
    cout<<"Initial approximation x0=?";
    cin>>x;

    k=1;
    ex=tolx-1;
    ef=tolf-1;
    //Newton-Raphson method
    while (ex > tolx)
    {
    while (ef > tolf)
    {
    while (k < maxiter)
    {
        dx=-fx(x)/dfx(x);
        x_old=x;
        x=x+dx;

        ef=abs(fx(x));
        ex=(abs(x-x_old)-E)/abs(x);

        k=k+1;


    }
    }
    }
    cout<<" "<<endl;
    cout<<"Iteration in which the final approximation is computed k="<<k<<endl;
    cout<<" "<<endl;
    cout<<"Final approximation xk="<<x<<endl;
    cout<<" "<<endl;
    cout<<"Value of the function at the final approximation f(xk)="<<fx(x);
    cout<<" "<<endl;
    cout<<"Absolute value of the relative error of the final approximation ="<<abs(x-x_old)/abs(x);
    cout<<" "<<endl;
return(0);
}
