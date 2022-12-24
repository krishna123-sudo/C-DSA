#include<iostream>
#include<unordered_map>
using namespace std;
int main (){
// insert key value in the hash table in the order of 1
int flag=0;
    unordered_map<string,int> menu;
    menu["chicken"]=235;
    menu["fish"]=180;
    menu["mutton"]=700;
    menu["paneer"]=400;

//price updation
    menu["chicken"]=(1+1.2)*menu["chicken"];

//for erasing the value
    menu.erase("chicken");
//SERCH ITEM IN THE GIVEN VALUE IN O(1);
    string item;
    cout<<"enter ur item that has to be search :"<<endl;
    cin>>item;

    if(menu.count(item)==0)
    {
        cout<<"not availabe"<<endl;
    }else
    {
        cout<<item<<"is avalabe and its cost is :"<<menu[item]<<endl;
        flag=1;
    }

    if(flag==0)
    {cout<<"chosse another item from these :"<<endl;
    for(pair<string,int> value:menu){
        cout<<value.first<<"-"<<value.second<<endl;
    }}

    return 0;
}