#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count=0;
    int l=s.length();
    for(int i=0;i<l;i++){
        if(s[i]=='+'){
            count++;
        }
    }
    int v=count;
    sort(s.begin(),s.end());
    cout <<s[v];
    for(int i=v+1;i<l;i++){
        cout <<"+";
        cout <<s[i];
    }
    cout <<endl;
    /*char c=s[0];
    */
    return 0;
}

