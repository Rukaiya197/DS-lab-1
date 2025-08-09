#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter array size:";
   cin>>n;
   
   int arr[100];
   cout<<"enter array elements:"<<endl;
   for(int i=0;i<n; i++){
       cin>>arr[i];
   }
   
   cout<<"Reverse array elements:";
   for(int i= n-1;i>=0;i--)
 {
     cout<<arr[i]<<" ";
 }
     
}