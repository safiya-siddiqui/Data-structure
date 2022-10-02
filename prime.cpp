#include<iostream>
using namespace std;

bool isPrime(int num);
int main(){
    int num ,f=0 ;
    cin>>num;
    // for( int i=2; i<=num/2; i++){
    //     if(num%i==0){
    //         f=f+1;
    //         break;
    //     }

        
    // }
    //     if(f==0){
    //         cout<<num<<"is a prime number";

    //     }

    //     return 0;


if(isPrime(num)){
      cout<<"prime";
  }
  else{
      cout<<"not prime";
  }

}

bool isPrime(int num){
    
    if(num==1) return false;

    if(num==2 || num==3) return true;

    if(num%2==0 || num%3==0 ) return false;

    for(int i=5;i*i<=num;i=i+6){
        if(num%i==0 || num%(i+2)) return false;
    }

    return true;
}
    

