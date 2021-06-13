#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l=s.length();
    int w=0,z=0,o=0;
    while(w<l){
        if(s[w]=='0'){
            while(w<l){
                z++;
                w++;
                if(z==7){
                    cout << "YES" <<endl;
                    return 0;
                }
                if(s[w]=='1' ||s[w]=='\n'){
                    break;
                }
            }
            z=0;
        }
        if(s[w]=='1'){
            while(w<l){
                o++;
                w++;
                if(o==7){
                    cout << "YES" <<endl;
                    return 0;
                }
                if(s[w]=='0' ||s[w]=='\n'){
                    break;
                }
            }
            o=0;
        }
    }
    cout << "NO" <<endl;
    return 0;
}

