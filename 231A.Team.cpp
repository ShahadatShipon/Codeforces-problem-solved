#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,team=0,a[3];
    cin >>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin >> a[j];
            if(a[j]==1){
                count++;
            }
        }
        if(count>=2){
            team++;
        }
        count=0;
    }
    cout << team <<endl;
}
