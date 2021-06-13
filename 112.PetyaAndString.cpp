#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if(a.compare(b)==0){
        cout << "0" <<endl;
    }
    else{
        for(int i=0;i<a.length();i++){
            if(a[i]!=b[i]){
                if(a[i]>b[i]){
                    cout <<"1" <<endl;
                    return 0;
                }
                else{
                    cout << "-1" <<endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}

