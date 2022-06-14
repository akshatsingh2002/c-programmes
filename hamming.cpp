#include<iostream>
using namespace std;
int main(){
    int arr[8],arr2[8],c1,c2,c3,pos;
  cout<<"Enter the binary code to convert it into hamming code";
  cin>>arr[3]>>arr[5]>>arr[6]>>arr[7];
  arr[1]=(arr[3]^arr[5])^arr[7];cout<<arr[1];
  arr[2]=arr[3]^arr[6]^arr[7];cout<<arr[2];
  arr[4]=arr[5]^arr[6]^arr[7];cout<<arr[4];
  cout<<endl;
  for(int i=1;i<=7;i++){
cout<<arr[i];
  }
    return 0;
}