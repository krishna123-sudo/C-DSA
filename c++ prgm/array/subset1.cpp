#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

bool issubset(string s1,string s2){
    int i,j;
    i=s1[0];
    j=s2[0];

    while(i<=s1.length()-1 && j<=s2.length()-1){
        if(s2[j]==s1[i]){
            j++;
            i++;
        }else
        {
            i++;
        }
    }
    if(j==s2.length()){
        //cout<<"true"<<endl;
        return 1;
    }else
    {
       // cout<<"false"<<endl;
       return 0;
    }

    // int found=s1.find(s2);
    // if(found!=string::npos){
    //     return 1;
    // }else
    // {
    //     return 0;
    // }
}

int main (){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int ans=issubset(s1,s2);
    cout<<ans;
     return 0;
}