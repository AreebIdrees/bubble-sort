#include<iostream>
using namespace std;
int main(){
int arr[5]={1, 2, 66, 54,  5};
for(int j=0;j<5;j++){

for(int i=0;i<5-j-1;i++){

if(arr[i]>arr[i+1]){
int x=0;
x=arr[i];
arr[i]=arr[i+1];
arr[i+1]=x;
}
}
}
for(int i=0;i<5;i++){
cout<<arr[i]<<" ";
}
}
