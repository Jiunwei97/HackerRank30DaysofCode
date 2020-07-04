#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void oddnum(string s){
    int ss;
    ss=s.length();
    for(int i=0; i<ss;i++){
        if(i%2!=0)
            cout<<s[i];
    }
}

void evennum(string s){
    int ss;
    ss=s.length();
    for(int i=0; i<ss;i++){
        if(i%2==0)
            cout<<s[i];
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s;
    int t;
    cin>>t;
    for(int i =0;i<t;i++){
        cin>>s;
        evennum(s);
        cout<<" ";
        oddnum(s);
        cout<<endl;
    }
    return 0;
}
