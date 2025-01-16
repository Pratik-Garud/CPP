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




// #include<iostream>
// #include<algorithm>
// #include<climits>
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
//     int index=-1;
//     int maxSum=INT_MIN;
//     for(int i=0;i<m;i++){
//         int colSum=0;
//         for(int j=0;j<n;j++){
//             colSum+=arr[j][i];
//         }
//         maxSum=max(maxSum,colSum);
//         if(maxSum==colSum){
//             index=i+1;
//         }
//     }
//     cout<<"maximum col sum: "<<maxSum<<" at the index: "<<index;
//     return 0;
// }

















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
// bool isPrime(int num){
//     if(num<=1) return false;
//     if(num == 2) return true;
//     if(num%2==0 ) return false;
//     for(int i=3;i<=sqrt(num);i+=2){
//         if(num%i==0){
//             return false;
//         }
//     }
//     return true;
// }


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
//     cout<<"prime elements sum are: ";
//     int sum=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             for(int k=2;k<=sqrt(arr[i][j]);k++){
//                 if(!isPrime(arr[i][j])){
//                     sum+=arr[i][j];
//                 }
//             }
//         }
//     }
//     cout<<sum;
//     return 0;
// }











// problem => 09




// #include<iostream>
// using namespace std;

// int digitSum(int num){
//     int sum=0;
//     while(num>0){
//         int a=num%10;
//         sum+=a;
//         num/=10;
//     }
//     return sum;
// }

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
//             cout<<digitSum(arr[i][j])<<" ";
//         }
//     }
//     return 0;
// }











// problem => 10




// #include<iostream>
// using namespace std;

// bool isPalindrome(int num){
//     int reversNum =0;
//     int original = num;
//     while(num>0){
//         reversNum = reversNum *10 + (num%10);
//         num/=10;
//     }
//     if(reversNum==original){
//         return true;
//     }
//     return false;
// }

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
//             if(isPalindrome(arr[i][j])){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
//     return 0;
// }

