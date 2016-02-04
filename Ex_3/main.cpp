//LAB 1 "Introduction to C++" - EX 3

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
    float L12, L23, L31, Lmax, S, p, rho, h, Q1, Q2 ;

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

    //Area of the triangle
    S=0.5*abs((V[0][1]*V[2][1]+V[0][0]*V[1][1]+V[0][1]*V[2][0]-V[1][0]*V[0][2]-V[2][0]*V[1][1]-V[2][1]*V[0][0]));

    //Inradius
    p=0.5*(L12+L23+L31);
    rho=S/p;

    //Very stupid way of finding Lmax
   Lmax=L12;
   if (Lmax<L23)
   {
       Lmax=L23;
   }
   if (Lmax<L31)
   {
       Lmax=L31;
   }

    //h
      h=sqrt(pow(L12,2)+pow(L23,2)+pow(L31,2));

    //Quality messure 1 and 2

      Q1=sqrt(3)/6*Lmax/rho;
      Q2=sqrt(13)/12*pow(h,2)/S;

      cout<<" "<<endl;
      cout << "Q1 ="<<Q1<<endl;
      cout << "Q2 ="<<Q2<<endl;

return(0);
}
