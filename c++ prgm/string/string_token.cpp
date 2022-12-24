#include<iostream>
#include<cstring>
#include<vector>
#include<sstream>
using namespace std;

int main (){

    string name;
    cout<<"enter the name of the student :"<<endl;
    getline(cin,name);
    cout<<"enter the dob of the student"<<endl;
    string dob;
    getline(cin,dob);

    stringstream ss(dob);
    string token;
    vector<string> tokens;

    while(getline(ss,token,' ')){
        tokens.push_back(token);
    }
   cout<<name<<endl;
    for(auto token: tokens){
        cout<<token<<"/";
    }
}