#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter array size:";
   cin>>n;
   
   int arr[100];
   cout<<"Enter array elemnts:"<<endl;
   for(int i=0; i<n; i++){
       cin>>arr[i];
   }
   cout<<"Even array elements:";
   for(int i=0;i<n;i++){
   if(arr[i]%2==0){
       cout<<arr[i]<<" ";
   }}
   cout<<endl;
   cout<<"Odd array elements:";
   for(int i=0; i<n; i++){
  if(arr[i]%2!=0){
      cout<<arr[i]<<" ";
  }}
   
  
}