#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b){
    return a>b;
}

void bubble_sort_rec(int a[],int n){
    if(n==1){
        return;
    }
for(int j=0;j<n;j++){
    if(a[j]>a[j+1])
    swap(a[j],a[j+1]);
}
bubble_sort_rec(a,n-1);
}
int main(){
    int arr[6] = {4,7,5,2};
    int n = sizeof(arr)/sizeof(int);

    bubble_sort_rec(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}

