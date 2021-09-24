#include<iostream>
#include<vector>
using namespace std;

void finding_subsets(char *input,char *output, int i , int j){
   //base case
    if(input[i] =='\0'){
        output[j] = '\0';
        cout<<output<<endl;
        return;

    }
    //recursive case
     output[j]= input[i];
     finding_subsets(input,output,i+1,j+1);
     finding_subsets(input,output,i+1,j);

}
int main(){
    char input[100];
    char output[100];
    cin>>input;
    finding_subsets(input,output,0,0);
    return 0;

}
