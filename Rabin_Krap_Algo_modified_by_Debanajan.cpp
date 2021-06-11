#include<bits/stdc++.h>
using namespace std;

void pattern(string s,string p)
{
    int j=0;
    string st="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==p[j]&&j<=p.length()-1)
            j++;
       else if(s[i]!=p[j]) {
            j = 0;
            continue;
        }
        if(j>=p.length()-1){
            cout<<i-p.length()+2<<endl;
            j=0;
        }
    }
   // return -1;
}
int main() {
    string s;
    string p;
    getline(cin, s);
    getline(cin, p);
    pattern(s, p);
}
