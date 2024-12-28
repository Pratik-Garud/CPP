// 1)

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     if(n<0){
//         cout<<"enter the valid size";
//         return 0;
//     }
//     int arr[n];
//     char ch;
//     cout<<"You can enter the element(y/n): ";
//     cin>>ch;
//     if(ch==n){
//         return 0;
//     }
//     for(int i=0;i<n; i++){
//         cout<<"enter "<<i<<"th element: ";
//         cin>>arr[i];
//     }
//     cout<<"the element in array in reverse order: ";
//     for(int i=n-1; i>=0;i--){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }





// 2)


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter size of array: ";
//     cin>>n;
//     char arr[n];
    
//     for(int i=0;i<n;i++){
//         cout<<"enter "<<i<<"th character in array: ";
//         cin>>arr[i];
//     }
//     cout<<"ascii value of your character in array : ";
//     for(int i=0;i<n;i++){
//         cout<< static_cast<int>(arr[i])<<" ";

//     }

//     return 0;
// }




// 3)

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter size of array: ";
//     cin>>n;
//     int arr[n];
    
//     for(int i=0;i<n;i++){
//         cout<<"enter "<<i<<"th character in array: ";
//         cin>>arr[i];
//     }
//     int sum=0;
//     cout<<"Sum of squares in array : ";
//     for(int i=0;i<n;i++){
//         sum += (arr[i]*arr[i]);
//     }
//     cout<<sum;

//     return 0;
// }




// 4)



// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter number of students: ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter student id's in sorted way: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int id;
//     cout<<"enter id to search: ";
//     cin>>id;
//     for(int i=0;i<n;i++){
//         if(arr[i]==id){
//             cout<<"id "<<id<< " found at index "<<i<<endl;
//             return 0;
//         }
//     }
//     cout<<"please enter valid id to search.";
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
//     cout<<"enter the age of children: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         if(arr[i]>5){
//             cout<<"age should not be greater than 5"<<endl;
//             cout<<"re-enter the age: "<<endl;
//             i=-1;
//             continue;
//         }

//     }

//     cout<<"ages are: "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }





// 6)



// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     float arr[n];
//     cout<<"enter the height: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         if(arr[i]>6 || arr[i]<5.5){
//             cout<<"height should not be greater than 6ft and less tha 5.5ft"<<endl;
//             cout<<"re-enter the height: "<<endl;
//             i=-1;
//             continue;
//         }

//     }

//     cout<<"heights are: "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }





// 7)


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter size of array: ";
//     cin>>n;
//     int arr[n];
//     int el;
//     cout<<"enter element of array: ";
//     for(int i=0;i<n;i++){
//         cin>>el;
//         if(el%2==0){
//             arr[i]=el*el;
//         }else{
//             arr[i]=el*el*el;
//         }
//     }
//     cout<<"element of array ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }


//     return 0;
// }





// 8)


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter size of array: ";
//     cin>>n;
//     char arr[n];
//     cout<<"enter character of array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"alternate character of array ";
//     for(int i=0;i<n;i++){
//         if(i%2==0){
//             cout<<arr[i]<<" ";
//         }else{
//             continue;
//         }
//     }


//     return 0;
// }




// 9)


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter size of array: ";
//     cin>>n;
//     int arr[n];
//     int index;
//     cout<<"enter element of array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
        
//     }
//     cout<<"enter the index up to which you want to print the element: ";
//     cin>>index;
//     cout<<"element of array ";
//     for(int i=0;i<index;i++){
//         cout<<arr[i]<<" ";
//     }


//     return 0;
// }






// 10)


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter element of array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
        
//     }
//     cout<<"element of array ";
//     for(int i=n-1; i>=0; i = i-2){
//         cout<<arr[i]<<" ";
//     }


//     return 0;
// }