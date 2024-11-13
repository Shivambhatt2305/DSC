#include<iostream>
using namespace std;

void prinnt_array(int arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[min_index]>arr[j]){
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}

int main(){
    int arr[]={1,2,3,6,8,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array";
    print_array(arr,size);
    cout<<"sorted array";

}

//array,linkedlist,stack-2,queue-4,double ended queue , priority queue, circuler queue , 