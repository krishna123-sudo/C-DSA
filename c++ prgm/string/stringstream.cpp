#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int main (){

    string name;
    cout<<"enter the name of the person"<<endl;
    getline(cin,name);
    cout<<"enter the date of birth of person"<<endl;
    string para;
    getline(cin,para);

    stringstream ss(para);
    string token;
    vector<string> tokens;

    while(getline(ss,token,' '))
    {
        tokens.push_back(token);
    }
    cout<<"the name of the person : "<<name;
    cout<<endl;
    cout<<"the dob is : ";
    for(auto token:tokens){
        cout<<token<<"/";
    }

return 0;
}