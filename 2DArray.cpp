// problem => 01




// #include<iostream>
// using namespace std;

// int main(){
//     int m,n;
//     cout<<"Enter the number of Rows: ";
//     cin>>m;
//     cout<<"Enter the number of Columns: ";
//     cin>>n;
//     cout<<"Enter the elements of the array: ";
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"array are: "<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//            cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }











// problem => 02




// #include<iostream>
// using namespace std;

// int main(){
//     int m,n,sum=0;
//     cout<<"Enter the number of Rows: ";
//     cin>>m;
//     cout<<"Enter the number of Columns: ";
//     cin>>n;
//     cout<<"Enter the elements of the array: ";
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             sum+=arr[i][j];
//         }
//     }
//     cout<<"sum of array are: "<<sum<<endl;
    
//     return 0;
// }










// problem => 03




// #include<iostream>
// using namespace std;

// int main(){
//     int m,n;
//     cout<<"Enter the number of Rows: ";
//     cin>>m;
//     cout<<"Enter the number of Columns: ";
//     cin>>n;
//     cout<<"Enter the elements of the array: ";
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         int sum=0;
//         for(int j=0;j<n;j++){
//             sum+=arr[i][j];
//         }
//         cout<<"sum of "<< i+1<< " th are: "<<sum<<endl;
//     }
    
//     return 0;
// }









// problem => 04




// #include<iostream>
// using namespace std;

// int main(){
//     int m,n;
//     cout<<"Enter the number of Rows: ";
//     cin>>m;
//     cout<<"Enter the number of Columns: ";
//     cin>>n;
//     cout<<"Enter the elements of the array: ";
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         int sum=0;
//         for(int j=0;j<n;j++){
//             sum+=arr[i][j];
//         }
//         if((i+1)%2!=0){
//             cout<<"sum of "<< i+1<<" th are: "<<sum<<endl;
//         }
//     }
    
//     return 0;
// }









// // problem => 05




// #include<iostream>
// using namespace std;

// int main(){
//     int m,n;
//     cout<<"Enter the number of Rows: ";
//     cin>>m;
//     cout<<"Enter the number of Columns: ";
//     cin>>n;
//     cout<<"Enter the elements of the array: ";
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         int sum=0;
//         for(int j=0;j<n;j++){
//             sum+=arr[j][i];
//         }
//         cout<<"sum of "<< i+1<<" th column are: "<<sum<<endl;
        
//     }
    
//     return 0;
// }












// // problem => 06




// #include<iostream>
// using namespace std;

// int main(){
//     int m,n;
//     cout<<"Enter the number of Rows: ";
//     cin>>m;
//     cout<<"Enter the number of Columns: ";
//     cin>>n;
//     cout<<"Enter the elements of the array: ";
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }cout<<"Elements which are divisible by 3:  ";
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i][j]%3==0){
//                 cout<<arr[i][j]<<" "<<endl;
//             }
//         }
//     }
//     return 0;
// }







// // problem => 07




// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number of Rows/Columns: ";
//     cin>>n;
//     cout<<"Enter the elements of the array: ";
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int prod=1;
//     cout<<"Product of primary diagonal elements are: ";
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j){
//                 prod*=arr[i][j];
//             }
//         }
//     }
//     cout<<prod;
//     return 0;
// }








// // problem => 08




// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number of Rows/Columns: ";
//     cin>>n;
//     cout<<"Enter the elements of the array: ";
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int sum=0;
//     cout<<"secondary diagonal elements are: ";
//     for(int i=0;i<n;i++){
//         sum+=arr[i][n-1-i];
//         cout<<arr[i][n-1-i]<<" ";
        
//     }
//     cout<<"sum of secondary diagonal elements are: ";
//     cout<<sum;
//     return 0;
// }




// // problem => 09




// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number of Rows/Columns: ";
//     cin>>n;
//     cout<<"Enter the elements of the array: ";
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int primsum=0,secsum=0;
//     for(int i=0;i<n;i++){
//         primsum+=arr[i][i];
//         secsum+=arr[i][n-i-1];
//     }
//     cout<<"sum of primary diagonal elements are: "<<primsum<<endl;
//     cout<<"sum of secondary diagonal elements are: "<<secsum<<endl;

//     cout<<"product of secondary diagonal elements are: "<<primsum*secsum;
    
//     return 0;
// }





// problem => 10




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