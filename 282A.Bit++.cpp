#include<bits/stdc++.h>
using namespace std;
int main()
{
    string in="X++";
    string inc="++X";
    string dec="--X";
    string de="X--";
    string s;
    int n,i,x=0;
    cin >> n;
    for(i=0;i<n;i++){
        cin>>s;
        if(s.compare(in)==0 || s.compare(inc)==0){
            x++;
        }
        if(s.compare(de)==0 || s.compare(dec)==0){
            x--;
        }
    }
    cout << x <<endl;
    return 0;
}
