#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin >> w;
    for(int i=2;i<w;i+=2){
        int sub=w-i;
        if(sub%2==0){
            cout << "YES" <<endl;
            return 0;
        }
    }
    cout << "NO" <<endl;
}
