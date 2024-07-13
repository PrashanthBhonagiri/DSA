// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2113
#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        int a,b;
        cin>>a>>b;
        if(a>b) {
            cout<<">";
        }
        else if(a<b) {
            cout<<"<";
        }
        else {
            cout<<"=";
        }
        cout<<"\n";
    }
    return 0;
}