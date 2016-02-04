//LAB 1 "Introduction to C++" - EX 4

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

float factorial(float n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main()
{
using namespace std;

    //Definition of variables

    float i, n, e_aprox, e, error;
e=2.71828182845904523536028747135266249775724709369995;




n=0;
error=1;
while (error>1e-4)
{
    e_aprox=1;
    for( i = 1; i <= n; ++i )
    {
        e_aprox=e_aprox+(1/factorial(i));
    }

    error=abs(e-e_aprox);
cout<<"n="<<n<<"     e_exact="<<e<<"     e_aprox="<<e_aprox<<endl;
n=n+1;
}

return(0);
}
