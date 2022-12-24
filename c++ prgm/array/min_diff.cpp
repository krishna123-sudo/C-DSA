#include <bits/stdc++.h>
using namespace std;


int findSmallestDifference(int A[], int B[],
      int m, int n)
{

 sort(A, A + m);
 sort(B, B + n);

 int a = 0, b = 0;


 int result = INT_MAX;


 while (a < m && b < n)
 {
  if (abs(A[a] - B[b]) < result)
   result = abs(A[a] - B[b]);

 
  if (A[a] < B[b])
   a++;

  else
   b++;
 }
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){

           if(abs(A[i]-B[j])==result){
               cout<<A[i]<<" "<<B[j];
           }
       }
   }

   return 0;
 }


int main()
{

 int A[] = {5,10,17,23,30};


 int B[] = {14,19,26,134,135};



 int m = sizeof(A) / sizeof(A[0]);
 int n = sizeof(B) / sizeof(B[0]);



findSmallestDifference(A, B, m, n);

 return 0;
}


// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<climits>
// using namespace std;


// pair<int,int> minDifference(vector<int> A,vector<int> B){
//     //Complete this method
    
//     int m=A.size();
//     int n=B.size();

//     sort(A.begin(),A.end());
//     sort(B.begin(), B.end());

//     int a = 0, b = 0;


//     int result = INT_MAX;


//  while (a < m && b < n)
//  {
//   if (abs(A[a] - B[b]) < result)
//    result = abs(A[a] - B[b]);

 
//   if (A[a] < B[b])
//    a++;

//   else
//    b++;
//  }
 
//     for(int i=0;i<m;i++){
//        for(int j=0;j<n;j++){

//            if(abs(A[i]-B[j])==result){
//                cout<<"("<<A[i]<<","<<B[j]<<")";
//            }
//        }
//    }
    
// }