#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

void replace(char *str){
    int space=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '){
            space++;
        }
    }
    int index=strlen(str)+2*space;
    str[index]='\0';

    for(int i=strlen(str)-1;i>=0;i--){
        if(str[i]==' '){
            str[index-1]='0';
            str[index-2]='2';
            str[index-3]='%';

            index=index-3;
        }else
        {
            str[index-1]=str[i];
            index--;
        }
    }
}

int main (){
    char s[1000];
    cin.getline(s,1000);
    replace(s);
    cout<<s;

}