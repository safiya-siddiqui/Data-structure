#include<iostream>
using namespace std;
int getbit(int n,int position){
    return(n |(1<<position));
    
}
int main(){
cout<<getbit(5,1)<<endl;
return 0;
}