#include<iostream>
using namespace std;
bool isprime(int num){
    for(int i=2; i<num; i++){
        if(num%i==0){
            return false;
        }
    }

            return true;
        

    
}
int main(){
    int n;
    cin>>n;
if(isprime(n) )
cout << n<<"is prime";
 else
 
     cout<< n<<"not prime";
     
 

    return 0;
}