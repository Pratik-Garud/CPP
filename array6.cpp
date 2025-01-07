// quetion -> 1


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements in array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }cout<<"elements which have same index number as their value: ";
//     for(int i=0;i<n;i++){
//         if(i==arr[i]){
//             cout<<arr[i]<<" ";
//         }
//     }
//     return 0;
// }








// quetion -> 2


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements in array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum;
//     cout<<"enter the sum: ";
//     cin>>sum;
//     for(int i=0;i<n;i++){
//         int a=sum-arr[i];
//         for(int j=i;j<n;j++){
//             if(arr[j]==a){
//                 cout<<"index: "<<i<<" and index: "<<j<<endl;
//                 return 0;
//             }
//         }
        
//     }
//     return 0;
// }















// quetion -> 3


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements in array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int maxNumber=INT8_MIN;
//     for(int i=0;i<n;i++){
//         maxNumber = max(maxNumber,arr[i]);
//     }
//     cout<<"maximun number is: "<<maxNumber;

//     return 0;
// }





// quetion -> 4


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements in array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int minNumber=INT8_MAX;
//     for(int i=0;i<n;i++){
//         minNumber = min(minNumber,arr[i]);
//     }
//     cout<<"minimun number is: "<<minNumber;

//     return 0;
// }










// quetion -> 5


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements in array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int ele;
//     cout<<"enter the element: ";
//     cin>>ele;
//     int freq=0;
//     for(int i=0;i<n;i++){
//         if(ele==arr[i]){
//             freq++;
//         }
//     }
//     if(freq==0){
//         cout<<ele<<" is not present in the array";
//     }else{
//     cout<<"frequency of "<<ele<<" is "<<freq;
//     }
//     return 0;
// }














// quetion -> 6


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements in array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int st,end;
//     cout<<"enter the start of the range: ";
//     cin>>st;
//     cout<<"enter the end of the range: ";
//     cin>>end;
//     cout<<"Elements of an array that fall in between "<<st<<" and "<<end<<" are: ";
//     for(int i=st-1;i<end;i++){
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }









// quetion -> 7   error


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr1[n],arr2[n];
//     cout<<"enter the elements in first array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr1[i];
//     }
//     cout<<"enter the elements in second array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr2[i];
//     }
//     cout<<"uncomman elements: ";
    
//     for(int i=0;i<n;i++){
//         bool a=true;
//         for(int j=0;j<n;j++){
//             if(arr1[i]==arr2[j]){
//                 a=false;
                
//             }  
//         }
//         if(a==true){
//                 cout<<arr1[i]<<" ";
//             }
//     }
//     for(int i=0;i<n;i++){
//         bool a=true;
//         for(int j=0;j<n;j++){
//             if(arr2[i]==arr1[j]){
//                 a=false;
                
//             }  
//         }
//         if(a==true){
//                 cout<<arr2[i]<<" ";
//             }
//     }
//     return 0;
// }







// // problem - 8

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements in array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     cout<<"elements which have even sum of their digits are: ";
   
//     for(int i=0;i<n;i++){
//         int sumOfDigits=0;
//         int a=arr[i];
//         while(a>0){
//             sumOfDigits+=(a%10);
//             a/=10;
//         }
//         if(sumOfDigits%2==0){
//             cout<<arr[i]<<" ";
//         }
//     }
    
//     return 0;
// }









// // problem - 9

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements in array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     cout<<"elements which have even sum of their digits are: ";
   
//     for(int i=0;i<n;i++){
//         int reversNumber=0;
//         int a=arr[i];
//         while(a>0){
//            reversNumber = (reversNumber * 10) + (a%10);
//            a/=10;
//         }
//         cout<<reversNumber<<" ";
//     }

//     return 0;
// }











// problem - 10

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements in array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     cout<<"array elements are: ";
   
//     for(int i=0;i<n;i++){
//         if(n%2==0){
//             cout<<arr[i]<<" ";
//             i++;
//         }else{
//             cout<<arr[i]<<" ";
//         }
//     }

//     return 0;
// }









