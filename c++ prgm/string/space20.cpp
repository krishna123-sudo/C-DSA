#include<iostream>
#include<string.h>
using namespace std;

void replace_string(char *str){

    int space=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            space++;
        }
    }

    int index=strlen(str)+2*space;
    str[index]='\0';
    for(int i=strlen(str)-1;i>=0;i--)
    {
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
char input[1000];
cin.getline(input,1000);

replace_string(input);
cout<<input<<endl;


}

// #include <iostream>
// #include<cstring>
// using namespace std;

// void replace_space(char *str){

//     //1. calc spaces 
//     int spaces = 0;
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]==' '){
//             spaces += 1;
//         }
//     }

//     int idx = strlen(str) + 2*spaces;
//     str[idx] = '\0';

//     for(int i= strlen(str)-1;i>=0;i--){
//         if(str[i]==' '){
//             str[idx-1] = '0';
//             str[idx-2] = '2';
//             str[idx-3] = '%';
//             idx = idx - 3;
//         }
//         else{
//             str[idx-1] = str[i];
//             idx--;
//         }
//     }

// }


// int main() {
//     char input[10000];
//     cin.getline(input,1000);
//     replace_space(input);
//     cout<<input <<endl;

//     return 0;
// }