#include<iostream>
#include<vector>
using namespace std;

int main(){

// create vector

vector<char>arr;

int ans= (sizeof(arr)/sizeof(char));

cout<<ans<<endl;

cout<<arr.size()<<endl;
cout<<arr.capacity()<<endl;

// insert
arr.push_back(2);
arr.push_back(3);

// print
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

// remove
arr.pop_back();

// print

for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
int n;
cout<<"enter the value of n"<<endl;
cin>>n;

vector<int> brr(n,-9);

cout<<"size of b"<<brr.size()<<endl;
cout<<"capacity of b"<<brr.capacity()<<endl;

for(int i=0; i<brr.size();i++){
    cout<<brr[i]<<" ";
}
cout<<endl;

// int m;
cout<<"print crr"<<endl;
// cin>>m;

vector<int> crr{10,20,30,40};
for(int i=0; i<crr.size();i++){
    cout<<crr[i]<<" ";
}
cout<<endl;

    return 0;
}
