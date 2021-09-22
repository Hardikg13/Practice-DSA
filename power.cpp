#include<iostream>
using namespace std;

int power(int a, int n){
    if(n==0){
    return 1;
    }

   return a*power(a,n-1) ;
}
int fastpower(int a, int n){
    if(n==0){
    return 1;
    }
int subpower = fastpower(a,n/2);
int subpowersq = subpower * subpower;
    if(n&1){
    return a*subpowersq;
    }
    else{
    return subpowersq;
    }
}


int main(){
    int a,n;
    cin>>a>>n;
    cout<<power(a,n)<<endl;
    cout<<fastpower(a,n)<<endl;
    return 0;
}