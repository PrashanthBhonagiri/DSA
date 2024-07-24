//https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=3431
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,tc=1;
    cin>>n;
    while(n) {
        int a=0,b=0,t = n,x;
        while(t--) {
            cin>>x;
            if(x==0) {
                b++;
            }
            else {
                a++;
            }
        }
        cout<<"Case "<<tc++<<": "<<a-b<<"\n";
        cin>>n;
    }
    return 0;
}