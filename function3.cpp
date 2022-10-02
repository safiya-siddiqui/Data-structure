#include<iostream>
using namespace std;
int fact(int num){
    int res =1;
    for(int i=1; i<=num; i++){
        res=res*i;
    }
 return res;   
}
int main(){
    int n;
    cin>>n;
    fact(n);
    cout<<fact(n);
    return 0;
}