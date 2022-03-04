#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<vector>
int main(){
    
    vector<int> arr={2,3,4,5,5,44,3,2,244,55};
    int n=arr.size();
    
    //for(int i=0;i<20;){
        //i++;
      //  cout<<i<<endl<<endl;
   // }
   arr.push_back(23);
    arr.push_back(233);
     arr.pop_back();

    // sort a vector 
   sort(arr.begin(),arr.end());

   for(int i=0;i<=n;i++){
      // cout<<i<<endl;
       cout<<arr[i]<<endl;
   }
   // cout<<arr.size()<<endl;
    

    return 0;

}