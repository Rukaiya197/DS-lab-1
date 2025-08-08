#include<iostream>
using namespace std;
int main(){
  
  int n;
 cout<<"enter array size";
 cin>>n;
 int arr[n];
 for(int i=0;i<n-1;i++){
 cin>> arr[i];
}

for(int i=0, j = n-1; i<j; i++, j-- ){
  int temp= arr[i];
  arr[i]=arr[j];
  arr[j]=temp;}
  
  cout<<"reverse array=";
  for(int j=0; j<n; j++)
  {cout<<arr[j]<<" "<<endl;}
}