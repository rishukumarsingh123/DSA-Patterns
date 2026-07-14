#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxSum=INT_MIN;
    int maxIdx=0;
    int preSum=0;
    for(int i=0;i<k;i++){
        preSum+=arr[i];
    }
    maxSum=preSum;
    int i=1;
    int j=k;
    while(j<n){
        int curSum=preSum+arr[j]-arr[i-1];
        if(maxSum<curSum){
            maxSum=curSum;
            maxIdx=i;
        }
        preSum=curSum;
        i++;
        j++;
    }
    cout<<maxSum<<endl;
    cout<<maxIdx<<endl;
}
