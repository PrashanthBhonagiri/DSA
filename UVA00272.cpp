// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=208
#include<bits/stdc++.h>
using namespace std;
int main() {
    string line;
    int count=0;
    bool flag = false;
    while(getline(cin,line)) {
        // if(flag) {
        //     cout<<"\n";
        // }
        // flag  = true;
        for(char x : line) {
            if(x=='"') {
                count++;
                if(count%2) {
                    cout<<"``";
                }
                else {
                    cout<<"''";
                }
            }
            else {
                cout<<x;
            }
        }
        cout<<"\n";
    }
    return 0;
}