#include<iostream>
using namespace std;

// fun of print array
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
// increment funcation of array
void inc(int arr[],int size){
    arr[0]=arr[0]+10;
    // print
    PrintArray(arr,size);
}
int main(){


int arr[]={5,6};
 
// array size
int size=2;
// funcation call
inc(arr,size);

// array and array size pass

PrintArray(arr,size);


    return 0;
}



  
