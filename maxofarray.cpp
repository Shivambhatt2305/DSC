#include<iostream>
using namespace std;


int main(){
//declare an array and get input from user
int a[5];
int i,max=0;
cout<<"enter array"<<endl;
for(i=0;i<5;i++){
    cin>>a[i];
}
for(i=0;i<10;i++){
   
    cout<<a[i]<<endl;
}
for(i=0;i<5;i++){
    if(a[i+1]>a[i]){
        max=a[i+1];
    }
    else{
        max=a[i];
    }

}
cout<<"max is : "<<max<<endl;
}
