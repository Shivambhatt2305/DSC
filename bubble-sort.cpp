#include<iostream>
using namespace std;

void bubble_sort(int arr[],int size){
    //cout<<"sorted array";
    
    int flag=1;
    while(flag){
        flag=0;
        for(int j=0;j<size-1;j++){
            if(arr[j+1]<arr[j]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag++;
            }
            
        }
    }
    return;
}
void print_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    int arr[]={1,2,3,6,8,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,size);

     print_array(arr,size);   
    return 0;
}