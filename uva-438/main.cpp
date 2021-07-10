#include <iostream>
#include <stdio.h>
#include <cmath>

#define PI 3.141592653589793

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3;
    double a, b, c, s, area, r;

    while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
        a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
        c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));

        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        r=(a*b*c)/(4*area);

        printf("%.2lf\n", 2*PI*r);
    }

    return 0;
}
