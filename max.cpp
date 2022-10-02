#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++)
    cin>>arr[i];
  int  MaxNo=INT_MIN;
   int MiniNo=INT_MAX; 
    for(int i=1; i<=n; i++)
    if(arr[i]>MaxNo)
  int  Max=arr[i];
     if(arr[i]<MiniNo)
     int Mini=arr[i];

    cout<<MaxNo <<MiniNo<<" ";
    return 0;

}