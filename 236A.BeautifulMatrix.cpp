#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,o,max,min;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>m;
            if(m==1){
                n=i-3;
                o=j-3;
                max =abs(n);
                min = abs(o);
            }
        }
    }
    cout << max+min <<endl;
    return 0;
}

