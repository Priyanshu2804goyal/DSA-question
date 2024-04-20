#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
 //vector<vector<int>>arr(3,vector<int>(4));
 
 int main(){
     int n;
     n=3;
vector<vector<int>>arr(n,vector<int>(n));
     int i,j;
   /* for(i=0;i<3;i++){
          for(j=0;j<4;j++){
               cin>> arr[i][j];
          }  
     }

     */
    int sum1=0,sum2=0;
    arr={{1,9,8},{4,2,10},{9,11,3}};
    // sum of diagonal matrix;
     for(int i=0;i<n;i++){
        sum1+=arr[i][i];
     }
     // for second diagonal;
     for(int i=0;i<n;i++){
           sum2+=arr[i][n-1-i];
     }
     int result;
       if(n%2==1){
          result=sum1+sum2-arr[n/2][n/2];
       }
       else{
               result=sum1+sum2;
       }
     cout << result;
/*
     for(int i=0;i<3;i++){
       for(int j=0;j<4;j++){
           cout << arr[i][j];
       }   
     }
     */
 }
 