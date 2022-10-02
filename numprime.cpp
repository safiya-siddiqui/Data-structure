#include<iostream>
using namespace std;
int main(){
    int num ;
    cin>>num;
    for( int i=2; i<=num/2; i++){
        if(num%i==0){
            cout<<"not prime" ;
break;
        }
    
        if(i==num/2){
            cout<<"prime" <<endl;
        }
    }
    return 0;
}