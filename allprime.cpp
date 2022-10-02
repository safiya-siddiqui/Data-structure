#include<iostream>
using namespace std;
int main(){
int a,b ,f=0;
cin>>a>>b;
for(int num=a ;num<b ;num++)
{
for(int i=2 ;i<num; i++){
    if(num%i==0){
        f=f+1;
        break;
    }
    if(f==0){
    
}

  cout<<num ;  
}

}
return 0;
}


