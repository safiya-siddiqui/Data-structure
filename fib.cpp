#include<iostream>
using namespace std;
int main(){
    int t1=0,t2=1, n, next, fib;
    cin>>n;
    cout<<t1<<t2;
    for( int i=2; i<=n; i++){

    
     int next=t1+t2;
    t1=t2;
    t2=next;
    
    cout<<next;
    }
    return 0;
}