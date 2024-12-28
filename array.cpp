// 1)


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter number of element in array: ";
//     cin>>n;
//     int arr[n];

//     for(int i=0; i<n; i++){
//         cout<<"enter "<<i+1<<"th element: ";
//         cin>>arr[i];
//     }

//     for(int i=0;i<n; i++){
//         if(i%2==0){
//             cout<<"element of "<<i<<"th index of array "<<arr[i]<<endl;
//         }
//     }
//     return 0;
// }






// 2)

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter number of element in array: ";
//     cin>>n;
//     int arr[n];

//     char ans;
//     cout<<"you have to give input or not (y/n) ";
//     cin>>ans;

//     if(ans == 'y'){
//         for(int i=0; i<n; i++){
//         cout<<"enter "<<i+1<<"th element: ";
//         cin>>arr[i];
//     }
//     }
//     int sum=0;

//     for(int i=0;i<n; i++){
//         if(i%2==0){
//             sum += arr[i];
//         }
//     }
//     if(ans=='y'){
//         cout<<"sum is: "<<sum<<endl;
//     }
//     return 0;
// }





//  3)


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter number of element in array: ";
//     cin>>n;
//     int arr[n];

//     char ans;
//     cout<<"you have to give input or not (y/n) ";
//     cin>>ans;

//     if(ans == 'y'){
//         for(int i=0; i<n; i++){
//         cout<<"enter "<<i+1<<"th element: ";
//         cin>>arr[i];
//     }
//     }
//     cout<<"even numbers is: "<<endl;
//     for(int i=0;i<n; i++){
//         if(arr[i]%2==0){
//             cout<<arr[i]<<endl;
//         }
//     }
    
//     return 0;
// }







// 4)


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter number of element in array: ";
//     cin>>n;
//     int arr[n];

//     char ans;
//     cout<<"you have to give input or not (y/n) ";
//     cin>>ans;

//     if(ans == 'y'){
//         for(int i=0; i<n; i++){
//         cout<<"enter "<<i+1<<"th element: ";
//         cin>>arr[i];
//     }
//     }
//     int prod=1;

//     for(int i=0;i<n; i++){
//         if(arr[i]%2==0){
//             prod *=arr[i];
//         }
//     }
//     if(ans=='y'){
//         cout<<"product is: "<<prod<<endl;
//     }
    
//     return 0;
// }




// 5)


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter number of element in array: ";
//     cin>>n;
//     int arr[n];

//     char ans;
//     cout<<"you have to give input or not (y/n) ";
//     cin>>ans;

//     if(ans == 'y'){
//         for(int i=0; i<n; i++){
//         cout<<"enter "<<i+1<<"th element: ";
//         cin>>arr[i];
//     }
//     }
//     int prod=1;

//     for(int i=0;i<n; i++){
//         if(arr[i]%2!=0){
//             prod *=arr[i];
//         }
//     }
//     if(ans=='y'){
//         cout<<"product is: "<<prod<<endl;
//     }
    
//     return 0;
// }





//6)


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter number of element in array: ";
//     cin>>n;
//     int arr[n];

//     char ans;
//     cout<<"you have to give input or not (y/n) ";
//     cin>>ans;

//     if(ans == 'y'){
//         for(int i=0; i<n; i++){
//         cout<<"enter "<<i+1<<"th element: ";
//         cin>>arr[i];
//     }
//     }
//     int sum=0;
//     for(int i=0;i<n; i++){
//         sum += arr[i];
//     }
//     if(ans=='y'){
//         cout<<"sum of all element in array is: "<<sum<<endl;
//     }
    
//     return 0;
// }






// 7)



// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter number of element in array: ";
//     cin>>n;
//     int arr[n];

//     char ans;
//     cout<<"you have to give input or not (y/n) ";
//     cin>>ans;

//     if(ans == 'y'){
//         for(int i=0; i<n; i++){
//         cout<<"enter "<<i+1<<"th element: ";
//         cin>>arr[i];
//     }
//     }
//     int evenSum=0;
//     int oddSum=0;
//     for(int i=0;i<n; i++){
//         if(i%2==0){
//             evenSum += arr[i];
//         }else{
//             oddSum += arr[i];
//         }
//     }
//     int diffSum = evenSum - oddSum;
//     if(ans=='y'){
//         cout<<"the sum diffrenc is: "<<diffSum<<endl;
//     }
    
//     return 0;
// }






// 8)


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter number of element in array: ";
//     cin>>n;
//     int arr[n];

//     char ans;
//     cout<<"you have to give input or not (y/n) ";
//     cin>>ans;

//     if(ans == 'y'){
//         for(int i=0; i<n; i++){
//         cout<<"enter "<<i+1<<"th element: ";
//         cin>>arr[i];
//     }
//     }
//     int prod=1;
//     for(int i=0;i<n; i++){
//         if(i%2!=0){
//            prod *= arr[i];
//         }
//     }
    
//     if(ans=='y'){
//         cout<<"product of odd indexed element is: "<<prod<<endl;
//     }
    
//     return 0;
// }







// 9)



// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter number of element in array: ";
//     cin>>n;
//     int arr[n];

//     char ans;
//     cout<<"you have to give input or not (y/n) ";
//     cin>>ans;

//     if(ans == 'y'){
//         for(int i=0; i<n; i++){
//         cout<<"enter "<<i+1<<"th element: ";
//         cin>>arr[i];
//     }
//     }
//     for(int i=0;i<n; i++){
//         if(arr[i]%5==0){
//            cout<<"First element divisible by 5 fount at index "<<i<<endl;
//            break;
//         }
//     }
    
    
//     return 0;
// }





// 10)







// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter number of element in array: ";
//     cin>>n;
//     char arr[n];

//     char ans;
//     cout<<"you have to give input or not (y/n) ";
//     cin>>ans;

//     if(ans == 'y'){
//         for(int i=0; i<n; i++){
//         cout<<"enter "<<i+1<<"th character: ";
//         cin>>arr[i];
//     }
//     }
//     for(int i=0;i<n; i++){
//         if(arr[i] == 'a' || arr[i] == 'A'||arr[i] == 'e'||arr[i] == 'E'||arr[i] == 'i'||arr[i] == 'I'||arr[i] == 'o'|| arr[i] == 'O' ||arr[i] == 'u' || arr[i] == 'U' ){
//           cout<<arr[i]<<" "<<i<<endl;
//         }
//     }
    
    
//     return 0;
// }