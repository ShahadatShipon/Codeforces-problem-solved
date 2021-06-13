#include<bits/stdc++.h>
using namespace std;
int main()
{
    int place,count=0;
    vector <int > v;
    int n,k,x;
    cin >> n >>k;
    for(int i=0;i<n;i++){
        cin >>x;
        v.push_back(x);
    }
    place = v.at(k-1) ;
    for(int i=0;i<n;i++){
        if(v[i]>=place && v[i]>0){
            count++;
        }
    }
    cout << count <<endl;
    return 0;

}



