#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char v[100];
    cin >> s;
    int a=0;
    int l=s.length();
    for(int i=0;i<l;i++){
        if(s[i]!='a'&&s[i]!='A'&&s[i]!='e'&&s[i]!='E'&&s[i]!='i'&&s[i]!='I'&&s[i]!='o'&&s[i]!='O'&&s[i]!='u'&&s[i]!='U'&&s[i]!='y'&&s[i]!='Y'){
            v[a]=s[i];
            a++;
        }
    }
    for(int i=0;i<a;i++){
        cout <<".";
        if(v[i]>='A' && v[i]<='Z'){
           char c=v[i]+32;
           cout << c;
        }
        else{
        cout << v[i] ;
        }
    }
    cout <<endl;

    /*for(int i=0;i<l;i++){
        if(s[i]!='a'&&s[i]!='o'&&s[i]!='u'){
            cout << s[i]  << " ";
        }
    }*/

}

