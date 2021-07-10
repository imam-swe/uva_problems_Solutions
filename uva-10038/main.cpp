#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main()
{
    int n, j=1, k[1000], a[1000], f=0;
    while(cin>>n){
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        for(int i=1; i<n; i++){
            k[j++]=abs(a[i]-a[i-1]);
        }

        sort(k+1, k+j);
        for(int i=1; i<j; i++){
            if(k[i]!=i){
                f=1; break;
            }
        }

        if(f==0)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;

        f=0; j=1;
    }

    return 0;
}
