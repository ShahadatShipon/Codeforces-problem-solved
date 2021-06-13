#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i=0,sum;
    cin >> n >>k;
    sum=k;
    while(i<n+1){
        sum=sum +(i*5);
        if(sum>240){
            i--;
            break;
        }
        if(i==n){
            break;
        }
        i++;
    }
    cout << i <<endl;
    return 0;
}





