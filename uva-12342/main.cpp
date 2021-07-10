#include <iostream>

using namespace std;

int main()
{
    int t, i;
    long long int n, y;
    double x;
    cin >> t;
    for(i=0; i<t; i++){
        cin >> n; x=0; y=0;

        if(n<=180000)
            x=0.0;

        else if(n>180000 && n<=480000){
            x=(10.0*(n-180000.0)/100.0);
            if(x<2000)
                x=2000.0;
        }

        else if(n>480000 && n<=880000)
            x=(15.0*(n-480000.0)/100.0)+30000.0;

        else if(n>880000 && n<=1180000)
            x=(20.0*(n-880000.0)/100.0)+90000.0;

        else{
            x=(25.0*(n-1180000.0)/100.0)+150000.0;
        }
        y=(long long int)(x);
        if(y<x)
            y=y+1;
        cout << "Case " << i+1 << ": " << y << endl;
    }

    return 0;
}
