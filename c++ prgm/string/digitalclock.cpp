#include<iostream>
#include<string>
using namespace std;
string convert_to_digital_time(int minutes){

    int hr= minutes/60;

    int min= minutes%60;

    string hour;

    if(hr==0)

    {

        hour="00";

    }else{

        hour=to_string(hr);

    }

    string minut;

    if(min==0)

    {

        minut="00";

    }else if(min>=0&&min<10){

        minut="0"+to_string(min);

    }else{

        minut=to_string(min);

    }
    string clock=hour+":"+minut;

    return clock;

}

int main (){
    int value;
    cin>>value;
    string ans=convert_to_digital_time(value);
    cout<<ans;
}