#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,b,c,heap;
    cin >> t;
    for(i=0;i<t;i++){
        heap=0;
        cin >>a >>b >>c;
            while(b>=1&&c>=2){
                heap+=3;
                b--;
                c-=2;
            }


            while(a>=1&&b>=2){
                heap+=3;
                a--;
                b-=2;
            }
        cout << heap <<endl;
    }
}

