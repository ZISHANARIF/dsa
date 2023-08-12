#include<iostream>
#include<vector>
using namespace std;
int main (){
// find unique elements

// int findUnique(vector<int> arr){
//     int ans=0;

//     for(int i=0;i<arr.size();i++){

//         ans=ans^arr[i];
//     }
//     return ans;
// }

// int main(){

// int n;
// cout<<"Enter the size of array";
// cin>>n;

// vector<int>arr(n);

// cout<<"Enter the elements"<<endl;
// // taking input
// for(int i=0; i<arr.size(); i++){
//     cin>>arr[i];
// }

// int uniqueElement = findUnique(arr);
// cout<<"Unique element is "<< uniqueElement <<endl;
 
// union of array

// int arr[]={1,2,3,4,5};
// int sizea=5;
// int brr[]={6,7,8,90};
// int sizeb =4;
// vector<int>ans;

// for(int i=0;i<sizea;i++){
//     ans.push_back(arr[i]);
// }

// for(int i=0;i<sizeb;i++){
//     ans.push_back(brr[i]);
// }
// cout<<"printing an array"<<endl;
// for(int i=0; i<ans.size();i++){
//     cout<<ans[i]<<" ";
// }

// *************intersection of array**************

// vector<int> arr{1,2,3,4,5};
// vector<int> brr{3,4,5};
// vector<int>ans;

// // outer loop on arr vector

// for(int i=0;i<arr.size();i++){
//     int element=arr[i];
//     // for every element run loop on brr
//     for(int j=0;j<brr.size();j++){
//         if(element==brr[j]){
//             ans.push_back(element);
//         }
//     }
// }

// // print ans
// for(auto value:ans){
//     cout<<value<<" ";
// }

// **************pair sum******************

// vector<int> arr{10,20,30,40,50,60,};
// int sum=100;

// // print all pairs
// // outer loop will traverse for each element
// for(int i=0;i<arr.size();i++){
//     int element=arr[i];

//     // for every element will traverse on aage wale element
//     for(int j=i+1;j<arr.size();j++){
//         cout<<"("<<element<<","<<arr[j]<<")"<<endl;
//         if(element+arr[j]==sum){
//             cout<<"pair found"<<element<<","<<arr[j]<<endl;
//         }
//     }
// }
// ****************triplate find ********************

// vector<int> arr{10,20,30,40,50};
// int sum=80;

// // print all pairs

// for(int i=0;i<arr.size();i++){
//     int element=arr[i];

//     for(int j=i+1;j<arr.size();j++){
//         int element2=arr[j];
//         for(int k=j+1;j<arr.size();k++){
//             int element3=arr[k];

//             if(element+element2+element3==sum){
//                 cout<<"("<<element<<","<<element2<<","<<element3<<")"<<endl;
//             }

        
//         }
//     }
// }

// // 4th late sum find out
// vector<int>arr{10,20,30,40,50,60,};


// int sum=110;
// int sum2=120;

// for(int i=0;i<arr.size();i++){
//     int element1=arr[i];

//     for(int j=i+1;j<arr.size();j++){
//         int element2=arr[j];

//         for(int k=j+1;j<arr.size();k++){
//             int element3=arr[k];

//             for(int l=k+1;k<arr.size();l++){
//                 int element4=arr[l];
   
//                 if(element1+element2+element3+element4==sum){
//                     cout<<"("<<element1<<","<<element2<<","<<element3<<","<<element4<<")"<<endl;
//                 }
//                   if(element1+element2+element3+element4==sum2){
//                     cout<<"("<<element1<<","<<element2<<","<<element3<<","<<element4<<")"<<endl;
//                 }

//             }
//         }
//     }
// }

// sort 0 and 1

vector<int>arr{0,1,1,0,1,0,0,1,1,0,1};

int start=0;
int end=arr.size()-1;

int i=0;

while(i!=end){
    if(arr[i]==0){
        // swap from left
        swap(arr[start],arr[i]);
        i++;
        start++;
    }
    else{
        // swap from right
        swap(arr[i],arr[end]);
        end--;
      
    }
}
for(auto value:arr){
    cout<<value<<" ";
}


    return 0;
}