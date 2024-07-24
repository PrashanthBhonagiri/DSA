#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    map<string,string> mp;
    mp["HELLO"] = "ENGLISH";
    mp["HOLA"] = "SPANISH";
    mp["HALLO"] = "GERMAN";
    mp["BONJOUR"] = "FRENCH";
    mp["CIAO"] = "ITALIAN";
    mp["ZDRAVSTVUJTE"] = "RUSSIAN";
    int tc=1;
    while(s!="#") {
        if(mp.find(s)!=mp.end()) {
            cout<<"Case "<<tc++<<": "<<mp[s]<<"\n";
        }
        else {
            cout<<"Case "<<tc++<<": "<<"UNKNOWN"<<"\n";
        }
        cin>>s;
    }
    return 0;
}