// 1)


// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){

//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     int arr2[n];
//     cout<<"enter the element in array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     //copy the 1st array in to another
//     // copy ( 1st arr start , 1st array last, second array start )
//     copy(arr, arr+n,arr2);
  

//     cout<<"Here is your second array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr2[i]<<" ";
//     }

//     return 0;
// }



// OR



// 1) 




// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     int arr2[n];
//     cout<<"enter the element in array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     //copy the 1st array in to another
//     for(int i=0;i<n;i++){
//         arr2[i]=arr[i];
//     }
  

//     cout<<"Here is your second array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr2[i]<<" ";
//     }

//     return 0;
// }





// 2)




// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     int arr2[n];
//     cout<<"enter the element in array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     //copy the 1st array in to another
//     for(int i=0;i<n;i++){
//         arr2[i]=arr[n-i-1];
//     }
  

//     cout<<"Here is your second array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr2[i]<<" ";
//     }

//     return 0;
// }





// 3)




// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"enter the size of first array: ";
//     cin>>n;
//     int arr[n];
    
//     cout<<"enter the element of first array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     int m;
//     cout<<"enter the size of second array: ";
//     cin>>m;
//     int arr2[m];
  
//      cout<<"enter the element of second array: "<<endl;
//     for(int i=0;i<m;i++){
//         cin>>arr2[i];
//     }
//     int sum1=0;
    
//     for(int i=0;i<n;i++){
//         sum1 += arr[i];
//     }
//     int sum2=0;

//      for(int i=0;i<m;i++){
//         sum2 += arr2[i];
//     }

//     if(sum1 == sum2){
//         cout<<"the sum of both arrays is same.";
//     }else{
//         cout<<"the sum of both arrays is not same.";
//     }


//     return 0;
// }






// 4


// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"enter the size of first array: ";
//     cin>>n;
//     int arr[n];
    
//     cout<<"enter the element of first array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     int m;
//     cout<<"enter the size of second array: ";
//     cin>>m;
//     int arr2[m];
  
//      cout<<"enter the element of second array: "<<endl;
//     for(int i=0;i<m;i++){
//         cin>>arr2[i];
//     }

//     if(n == m){
//         cout<<"both arrays lenght is equal";
//     }else{
//         cout<<"both arrays lenght is unequal";
//     }


//     return 0;
// }







// 5)



// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr[n];
    
//     cout<<"enter the element of first array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
    
//     int arr2[n];
  
//      cout<<"enter the element of second array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr2[i];
//     }

//     for(int i=0;i<n;i++){
//         if(arr2[i]!=arr[i]){
//             cout<<"both arrays elements are diffrent";
//             return 0;
//         }
//     }
//     cout<<"both arrays elements are same";


//     return 0;
// }







// 6)


// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr[n];
    
//     cout<<"enter the element of first array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
    
//     int m;
//     cout<<"enter the size of second array: ";
//     cin>>m;
//     int arr2[m];
  
//      cout<<"enter the element of second array: "<<endl;
//     for(int i=0;i<m;i++){
//         cin>>arr2[i];
//     }


    // if(n==m){
    //     for(int i=0;i<n;i++){
    //     if(arr2[i]!=arr[i]){
    //         cout<<"both arrays elements are diffrent";
    //         return 0;
    //     }
    // }
    // cout<<"both arrays elements are same";
    // return 0;
    // }

    // cout<<"both array are unequal";


//     return 0;
// }









// 7)



// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){

//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr[n];
    
//     cout<<"enter the element of first array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
    
//     int m;
//     cout<<"enter the size of second array: ";
//     cin>>m;
//     int arr2[m];
  
//      cout<<"enter the element of second array: "<<endl;
//     for(int i=0;i<m;i++){
//         cin>>arr2[i];
//     }
//     int arr3[n+m];


//     for(int i=0;i<n;i++){

//         arr3[i]=arr[i];
//     }

//     for(int i=0;i<m;i++){

//         arr3[n+i]=arr2[i];
//     }


//     // OR


//     // for(int i=0;i<n+m;i++){
//     //     if(i<n){
//     //         arr3[i]=arr[i];
//     //     }else{
//     //         arr3[i]=arr2[i - n];
//     //     }
//     // }

    
//     // OR

//     // use algorithm library
//     // merge(arr,arr+n,arr2,arr2+m,arr3);

//     cout<<"element in 3rd array :";
//     for(int i=0;i<n+m;i++){
//         cout<<arr3[i]<<" ";
//     }
//       return 0;
// }




// 8)



// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr[n];
    
//     cout<<"enter the element of first array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     int arr2[n];
  
//      cout<<"enter the element of second array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr2[i];
//     }

//     int k=0 ,j=0;
//         for(int i=0;i<2*n;i++){
//             if(i%2==0){
//                 cout<<arr[j]<<" ";
//                 j++;
//             }else{
//                 cout<<arr2[k]<< " ";
//                 k++;
//             }
//         }
//     return 0;
// }





// 9)


// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr[n];
    
//     cout<<"enter the element of first array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     int arr2[n];
  
//      cout<<"enter the element of second array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr2[i];
//     }
//     int temp[n];
//     for(int i=0;i<n;i++){
//         temp[i]=arr[i];
//     }for(int i=0;i<n;i++){
//         arr[i]=arr2[i];
//     }for(int i=0;i<n;i++){
//         arr2[i]=temp[i];
//     }
     
//     cout<<"element of arr fisrt: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     cout<<"element of arr second: ";
//     for(int i=0;i<n;i++){
//         cout<<arr2[i]<<" ";
//     }

//     return 0;
// }





// 10)





// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr[n];
    
//     cout<<"enter the element of first array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     int arr2[n];
  
//      cout<<"enter the element of second array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr2[i];
//     }
//     int sum1=0;
//     int sum2=0;
     
    
//     for(int i=0;i<n;i++){
//         if(i%2==0){
//             sum1+= arr[i];
//         }
//     }
    
//     for(int i=0;i<n;i++){
//         if(i%2!=0){
//             sum2+= arr2[i];
//         }
//     }

//     cout<<"sum of arr first: "<<sum1<<endl;
//     cout<<"sum of arr second: "<<sum2<<endl;;

//     return 0;
// }
