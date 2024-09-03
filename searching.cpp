#include<iostream>
using namespace std;
void searching(int key,int arr[],int size){
for(int i=0;i<size;i++){
    if (arr[i]==key)
    {
        cout<<"your key is on "<<i<<"th position";
    }
    }
}

int main(){
    int capacity=10,size=5,key=5;
    int arr[capacity]={2,5,3,8,3};
    cout<<"array: ";
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"search element is: ";
    searching(key,arr,size);   
}
