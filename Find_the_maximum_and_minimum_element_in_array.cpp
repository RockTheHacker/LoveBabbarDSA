#include <bits/stdc++.h>
using namespace std;
void minmax(int arr[],int n){
  int min=arr[0],max=arr[0],temp=1;
  while(temp<n){
    if(min>=arr[temp]){
      min=arr[temp];
    }
    else if(max<=arr[temp]){
      max=arr[temp];
    }
    temp++;
  } 
  cout<<"Minimum:"<<min<<endl<<"Maximum:"<<max;
}
int main() {
  int n,i=0;
  cout << "Find the maximum and minimum element in an array\n...\n..\n.\n";
  cout << "Enter the length of array\n";
  cin>>n;
  int arr[n];
  cout << "Enter the elements of array\n";  
  while(i<n){
    cin>>arr[i];
    i++;
  }
  minmax(arr,n);
}
