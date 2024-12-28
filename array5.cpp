// 1) find the number at give index

// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"enter the size of array: ";
//     int n;
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements of array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"enter the index: ";
//     int m;
//     cin>>m;

//     cout<<"the number is: "<<arr[m]<<endl;
//     return 0;
// }



// 2) find the number in array and print index of the fisrt occurance

// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"enter the size of array: ";
//     int n;
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements of array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"enter the number: ";
//     int m;
//     cin>>m;

//     for(int i=0;i<n;i++){
//         if(arr[i]==m){
//             cout<<"index is: "<<i<<endl;
//             return 0;
//         }
//     }
//     cout<<"number not found"<<endl;
//     return 0;
// }




// 3)print count of odd and even numbers

// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"enter the size of array: ";
//     int n;
//     cin>>n;
//     int eventCount=0;
//     int oddCount=0;
//     int arr[n];
//     cout<<"enter the elements of array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==0){
//             eventCount++;
//         }else{
//             oddCount++;
//         }
//     }
//     cout<<"numver of even numbers is: "<<eventCount<<endl;
//     cout<<"numver of odd numbers is: "<<oddCount<<endl;
//     return 0;
// }





// 4) take char input and print triangle 


// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"enter the size of array: ";
//     int n;
//     cin>>n;
//     char arr[n];
//     cout<<"enter the character of array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<arr[j]<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }




// 5) diff bet sum of sq of even and sum of sq of odd



// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"enter the size of array: ";
//     int n;
//     cin>>n;
//     int evensum=0;
//     int oddsum=0;
//     int arr[n];
//     cout<<"enter the elements of array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==0){
//             evensum += arr[i]*arr[i];
//         }else{
//             oddsum+= arr[i]*arr[i];
//         }
//     }
//     cout<<"diffrence is: "<<evensum - oddsum<<endl;
//     return 0;
// }


// 6) print separet array even and odd



// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"enter the size of array: ";
//     int n;
//     cin>>n;
//     int eventCount=0;
//     int oddCount=0;
//     int arr[n];
    
//     cout<<"enter the elements of array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int m=0,p=0;
//     for(int i=0;i<n;i++){
//             if(arr[i]%2==0){
//                 m++;
//             }else{
//                 p++;
//             }
//         }

//     int evenArr[m];
//     int oddArr[p];
//     int j=0,k=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==0){
//             evenArr[j]=arr[i];
//             j++;
//         }else{
//             oddArr[k]=arr[i];
//             k++;
//         }
//     }
//     cout<<"even array is: "<<endl;
//     for(int i=0;i<m;i++){
//         cout<<evenArr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"odd array is: "<<endl;
//     for(int i=0;i<p;i++){
//         cout<<oddArr[i]<<" ";
//     }
//     return 0;
// }



// 7)


// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"enter the number: ";
//     int n;
//     cin>>n;
//     int arr[10];
    

//     for(int i=1;i<=10;i++){
//         arr[i-1]=n*i;
//     }

//     for(int i=0;i<10;i++){
        
//         cout<<arr[i]<<endl;
//     }
    
//     return 0;
// }



// 8)  check where array is decresing order or not


// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter the size of array: ";
//     int n;
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements of array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     for(int i=0;i<n-1;i++){
//         if(arr[i]<arr[i+1]){
//             cout<<"this is not an decreasing Array"<<endl;
//             return 0;
//         }
//     }

//     cout<<"this is an decreasing Array"<<endl;
//     return 0;
// }




// 9) print common elements betw two arrays




// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter the size of array: ";
//     int n;
//     cin>>n;
//     int arr1[n];
//     int arr2[n];
//     cout<<"enter the elements of array 1: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr1[i];
//     }
//     cout<<"enter the elements of array 2: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr2[i];
//     }
//     cout<<"common elements are: "<<endl;
//     for(int i=0;i<n;i++){
//         if(arr1[i]==arr2[i]){
//             cout<<arr1[i]<<endl;
//         }
//     }

//     return 0;
// }




// 10)



#include<iostream>
using namespace std;
int main(){
    cout<<"enter the size of array 1: ";
    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    cout<<"enter the elements of array 1: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"enter the elements of array 2: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=arr1[n-i-1];
    }
    for(int i=0;i<n;i++){
        arr1[i]=arr2[n-i-1];
    }
    for(int i=0;i<n;i++){
        arr2[i]=arr[i];
    }
    
    cout<<"first elements are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"second elements are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }

    return 0;
}
