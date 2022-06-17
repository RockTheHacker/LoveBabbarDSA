#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,i=0;
  cout << "Reverse the array\n...\n..\n.\n";
  cout << "Enter length of array\n";
  cin>>n;
  int arr[n];
  cout << "Enter Elements of array\n";
  while(i<n){
    cin>>arr[i];
    i++;
  }
  //reversing
  int start=0,end=(n-1);
  while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
  //printing array
  int j=0;
  while(j<n){
    cout<<arr[j]<<",";
    j++;
}
return 0;
}
