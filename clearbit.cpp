#include<iostream>
using namespace std;
int clearbit( int n ,int position){
    int mask = ~(1<<position);
return (n & mask);
}
int main()
{
    cout<<clearbit( 5,1);
return 0;
}