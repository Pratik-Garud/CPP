// // problem => 01




// #include<iostream>
// using namespace std;

// int main(){
//     int n,m;
//     cout<<"Enter the number of Rows: ";
//     cin>>n;
//     cout<<"Enter the number of Columns: ";
//     cin>>m;
//     cout<<"Enter the elements of the array: ";
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Even Position elements are: ";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(i%2==0 && j%2==0){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
//     return 0;
// }








// // problem => 02




// #include<iostream>
// using namespace std;

// int main(){
//     int n,m;
//     cout<<"Enter the number of Rows: ";
//     cin>>n;
//     cout<<"Enter the number of Columns: ";
//     cin>>m;
//     cout<<"Enter the elements of the array: ";
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int sum=0;
//     cout<<"sum of Even elements are: ";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i][j]%2==0){
//                 sum+=arr[i][j];
//             }
//         }
//     }
//     cout<<sum;
//     return 0;
// }




// problem => 03




// #include<iostream>
// using namespace std;

// int main(){
//     int n,m;
//     cout<<"Enter the number of Rows: ";
//     cin>>n;
//     cout<<"Enter the number of Columns: ";
//     cin>>m;
//     cout<<"Enter the elements of the array: ";
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Enter the target element: ";
//     int target;
//     cin>>target;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i][j]==target){
//                 cout<<"elements found at row: "<<i<<" column: "<<j<<endl;
//             }
//         }
//     }
//     return 0;
// }




// // problem => 04




// #include<iostream>
// using namespace std;

// int main(){
//     int n,m;
//     cout<<"Enter the number of Rows: ";
//     cin>>n;
//     cout<<"Enter the number of Columns: ";
//     cin>>m;
//     cout<<"Enter the elements of the array: ";
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int index=INT8_MAX;
//     int maxSum=INT8_MIN;
//     for(int i=0;i<n;i++){
//         int rowSum=0;
//         for(int j=0;j<m;j++){
//             rowSum+=arr[i][j];
            
//         }
//         maxSum=max(maxSum,rowSum);
//         if(maxSum==rowSum){
//             index=i+1;
//         }
//     }
//     cout<<"Maximum sum of row are: "<<maxSum<<" at the index: "<<index;
//     return 0;
// }







// problem => 05




#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the number of Rows: ";
    cin>>n;
    cout<<"Enter the number of Columns: ";
    cin>>m;
    cout<<"Enter the elements of the array: ";
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int index=-1;
    int maxSum=INT_MIN;
    for(int i=0;i<m;i++){
        int colSum=0;
        for(int j=0;j<n;j++){
            colSum+=arr[j][i];
        }
        maxSum=max(maxSum,colSum);
        if(maxSum==colSum){
            index=i+1;
        }
    }
    cout<<"maximum col sum: "<<maxSum;
    return 0;
}









// problem => 06




// #include<iostream>
// using namespace std;

// int main(){
//     int n,m;
//     cout<<"Enter the number of Rows: ";
//     cin>>n;
//     cout<<"Enter the number of Columns: ";
//     cin>>m;
//     cout<<"Enter the elements of the array: ";
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"corener elements are: ";
//     cout<<arr[0][0]<<" ";
//     cout<<arr[0][m-1]<< " ";
//     cout<<arr[n-1][0]<<" ";
//     cout<<arr[n-1][m-1]<<" ";
    
    
//     return 0;
// }






// // problem => 07




// #include<iostream>
// using namespace std;

// int main(){
//     int n,m;
//     cout<<"Enter the number of Rows: ";
//     cin>>n;
//     cout<<"Enter the number of Columns: ";
//     cin>>m;
//     cout<<"Enter the elements of the array: ";
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"other than corener elements are: ";

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i][j]!=arr[0][0] && arr[i][j]!=arr[0][m-1] && arr[i][j]!= arr[n-1][0] && arr[i][j]!=arr[n-1][m-1]){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
    
    
//     return 0;
// }







// problem => 08




// #include<iostream>
// #include<cmath>
// using namespace std;

// int main(){
//     int n,m;
//     cout<<"Enter the number of Rows: ";
//     cin>>n;
//     cout<<"Enter the number of Columns: ";
//     cin>>m;
//     cout<<"Enter the elements of the array: ";
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"non prime elements are: ";

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             for(int k=2;k<sqrt(arr[i][j]);k++){
//                 if(arr[i][j]%k==0){
//                     break;
//                 }
//                 cout<<arr[i][j]<<" ";
//             }
            
//         }
//     }
    
    
//     return 0;
// }