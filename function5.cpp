#include<iostream>
using namespace std;
int fib( int n){
    int t1=0;
    int t2=1;
    
    for( int i=1; i<=n ; i++){
            cout<<t1 ;
    
   int next =t1+t2;
   t1=t2;
   t2=next;
    }
  

}
int main(){
    int num ;
    cin>>num;
    

cout<<fib(num);
    
    return 0;

}