#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main (){
    string s;
    s="how my self krishna sekhar.my rromate isa divyam kr jha who is madarchod one of my friend ratnesh is also madarchod";

    string word;
    getline(cin,word);
    for(char x:word){
        cout<<x<<",";
    }

    int index=s.find(word);
    if(index!=-1){
        cout<<"the first occurce of word "<<word<<":"<<index<<endl;
    }
    index=s.find(word,index+1);
    if(index!=-1){
        cout<<"the second occurence of word "<<word<<":"<<index<<endl;
    }

    return 0;

}
