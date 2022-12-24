#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main (){
    char input[100];
    cin.getline(input,100);

    char *token=strtok(input," ");

    while(token!=NULL){
        cout<<token<<endl;
        token =strtok(NULL," ");
    }

    return 0;
}
