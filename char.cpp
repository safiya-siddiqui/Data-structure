#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1] ;
   cin.getline(arr,n);
   cin.ignore();
    int i=0;
    while(arr[i]!='\0')
    {
        cout<<arr[i]<<" ";
        i++;

    }
    return 0;
}