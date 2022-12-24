#include <iostream>
#include<algorithm>
using namespace std;
int main() {
   int i,j;
   string s[3], temp;
   cout<<"Enter the elements..."<<endl;

   for(i = 0; i < 3; ++i)
   getline(cin, s[i]);
   
   for(i = 0; i < 2; ++i)
   for(j = i+1; j < 3; ++j) {
      if(s[i] > s[j]) {
        //  temp = s[i];
        //  s[i] = s[j];
        //  s[j] = temp;
        swap(s[i],s[j]);
      }
   }
   cout << "The elements in lexicographical order are... " << endl;
   for(int i = 0; i < 3; ++i)
   cout << s[i];
   return 0;
}