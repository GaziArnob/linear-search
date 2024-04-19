#include<iostream>
using namespace std;

bool findKey(int arr[],int n,int key){
    for(int i=0;i<n;n++){
        if(arr[i]==key){
            return 1;
        }

    }
    return 0;
}
int main() {
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
cin>>arr[i];
}
int key;
cin>>key;
int found=findKey(arr,n,key);
if(found){
    cout<<"key is present"<<endl;
}else{
    cout<<"key is absent"<<endl;
}



}