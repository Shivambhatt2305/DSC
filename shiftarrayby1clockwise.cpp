#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int temp=a[n-1];
    for(int i=n-1;i>0;i--){
        a[i]=a[i-1]; 
    }
    a[0]=temp;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}
