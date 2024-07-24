#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++) {
        int a,b,c,res;
        cin>>a>>b>>c;
        if(a>b && a>c) {
            if(b>c) {
                res = b;
            }
            else {
                res = c;
            }
        }
        else if(b>a && b>c) {
            if(a>c) {
                res = a;
            }
            else {
                res = c;
            }
        }
        else if(c>a && c>b) {
            if(a>b) {
                res = a;
            }
            else {
                res = b;
            }
        }

        cout<<"Case "<<i<<": "<<res<<"\n";
    }
    return 0;
}