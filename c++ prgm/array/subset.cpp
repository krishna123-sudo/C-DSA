#include<iostream>
#include<cstring>
using namespace std;

bool is_subset(string s1,string s2){
    int i=s1.length()-1;
    int j=s2.length()-1;

    while(i>=0 && j>=0){
        if(s2[j]==s1[i])
        {
            i--;
            j--;
        }else
        {
            i--;
        }
    }
    if(j==-1){
        cout<<"true"<<endl;
    }else
    {
        cout<<"false"<<endl;
    }
   
}

int main (){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    is_subset(s1,s2);
     return 0;
}