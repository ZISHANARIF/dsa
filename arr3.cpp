#include<iostream>
using namespace std;

int main(){


// int arr[3][3];
// int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// {
// cout<<brr[2][2]<<endl;
// cout<<brr[1][1]<<endl;
// cout<<brr[0][2]<<endl;
// cout<<brr[2][1]<<endl;
// }

// row wise print

//     for(int i=0;i<3;i++){
        
//         for(int j=0;j<3;j++){
//             cout<<brr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// // column wise print
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<brr[j][i]<<" ";
//         }
//         cout<<endl;
//     }

//******************* matrix print***************
int arr[3][3];
int sum=0;
cout<<"press number for matrix"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
}
cout<<"matrix is "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
           
        }
        cout<<endl;
    }


    return 0;
}