#include <iostream>
using namespace std;

int help(int n)
{
    if (n <= 0) return 0;
	if(n == 2 || n == 1) return n;
	return help(n - 1) + (n - 1) * help(n - 2);
}

int friendsPairing(int n){
    
    return help(n);
    
}

int main(){
    int n;
    cout<<help(3)<<endl;
    return 0;
}