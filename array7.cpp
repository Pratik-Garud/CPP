// problem - 1

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
    
//     int min_element=INT8_MAX;
//     int max_element=INT8_MIN;
   
//     for(int i=0;i<n;i++){
//         min_element=min(min_element,arr[i]);
//         max_element=max(max_element,arr[i]);
//     }
//     cout<<"minimun element is: "<<min_element<<endl;
//     cout<<"maximun element is: "<<max_element<<endl;
//     return 0;
// }







// problem -2   using sort



// #include<iostream>
// #include<algorithm>

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
//     sort(arr,arr+n);
    
//     cout<<"second last maximun element is: "<<arr[n-2]<<endl;
//     return 0;
// }






// problem - 3  



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
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 cout<<"the first repeting element in array is: "<<arr[i];
//                 return 0;
//             }
//         }
//     }
//     cout<<"not repeting element in array"<<endl;
//     return 0;
// }





// problem -4   using sort



// #include<iostream>
// #include<algorithm>

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
//     sort(arr,arr+n);
    
//     cout<<"second minimun element is: "<<arr[1]<<endl;
//     return 0;
// }








// problem - 5   using sort



// #include<iostream>
// #include<algorithm>

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
//     sort(arr,arr+n);
    
//     cout<<"majority element is: "<<arr[n/2]<<endl;
//     return 0;
// }






// problem - 6   using sort


// #include<iostream>
// #include<algorithm>

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
//     sort(arr,arr+n);
//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=i;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         cout<<"element "<<arr[i]<<": "<<count<<" times"<<endl;
//         i=i+count-1;
//     }
//     return 0;
// }



// problem - 7




// #include<iostream>
// #include<algorithm>

// using namespace std;
// int main(){
//     int n,sum;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements in array"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"enter the sum: ";
//     cin>>sum;
//     for(int i=0;i<n;i++){
//         int a=sum-arr[i];
//         for(int j=i;j<n;j++){
//             if(a==arr[j]){
//                 cout<<arr[i]<<" "<<arr[j]<<endl;
//             }
//         }
        
//     }


//     return 0;
// }







// // problem - 8




// #include<iostream>
// #include<algorithm>

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
//     for(int i=0;i<n;i++){
//         int a=arr[i];
//         int newEle=0;
//         int c=1;
//         while(a>0){
//             int b=a%10;
//             if(b==0){
//                 b=5;
//             }
//             newEle=newEle+b*c;
//             a/=10;
//             c*=10;
//         }
//         cout<<newEle;
//         cout<<endl;
//     }


//     return 0;
// }








// problem - 9  using swap




// #include<iostream>
// #include<algorithm>

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
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]<arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
       
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }






// problem - 10  using swap




// #include<iostream>
// #include<algorithm>

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
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
       
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }