// 1)

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
//     cout<<"Primes numbers are: "<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=1; j<i; j++){
//             if(j%i!=0){
//                 cout<<i<<" ";
//             }
//         }
//     }



//     return 0;
// }


// #include <iostream>
// #include <cmath>
// using namespace std;

// // Function to check if a number is prime
// bool isPrime(int num) {
//     if (num <= 1) return false; // Numbers less than or equal to 1 are not prime
//     if (num == 2) return true;  // 2 is the only even prime number
//     if (num % 2 == 0) return false; // Exclude other even numbers
//     for (int i = 3; i <= sqrt(num); i += 2) { // Check only odd divisors up to the square root of num
//         if (num % i == 0) return false;
//     }
//     return true;
// }

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter " << n << " elements of the array:" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Prime numbers in the array are: ";
//     bool foundPrime = false;
//     for (int i = 0; i < n; i++) {
//         if (isPrime(arr[i])) {
//             cout << arr[i] << " ";
//             foundPrime = true;
//         }
//     }
//     if (!foundPrime) {
//         cout << "None";
//     }
//     cout << endl;

//     return 0;
// }


//  2) composite number

//     #include<iostream>
//     #include<cmath>
//     using namespace std;
//     int main(){
//         cout<<"enter the size of array: ";
//         int n;
//         cin>>n;
//         int arr[n];
//         cout<<"enter the elements of array: "<<endl;
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         cout<<"index of composite numbers : "<<endl;
//         for(int i=0;i<n;i++){
//             for(int j=2;j<sqrt(arr[i]);j++){
//                 if(arr[i] % j == 0){
//                     cout<<i<<" ";
//                     break;
//                 }
//             }
//         }


//         return 0;
//     } 



//  3) perfect number = ex. 6 , becuase divisor of 6 are 1,2,3 and 1+2+3=6,  like that other ex are 6,28,496 etc... 

    // #include<iostream>
    // #include<cmath>
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
        
    //     for(int i=0;i<n;i++){
    //         int sumDivisor=0;
    //         for(int j=1;j<arr[i];j++){
    //             if(arr[i]%j==0){
    //                 sumDivisor+=j;
    //             }
    //         }
    //         if(arr[i]==sumDivisor){
    //             cout<<"Array contains perfect number"<<endl;
    //             return 0;
    //         }
    //     }

    //     cout<<"Array doesn't contains perfect number"<<endl;

    //     return 0;
    // }




// 4) factorial

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

//     for(int i=0;i<n;i++){
//         int fact=1;
//         int j=arr[i];
//         while(j>1){
//             fact=fact*j;
//             j--;
//         }
//         cout<<fact<<" ";
//     }

//     return 0;
// }





// 5) count of digits


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

//     for(int i=0;i<n;i++){
//         int count=0;
//         int j=arr[i];
//         while(j>0){
//            count++;
//             j=j/10;
//         }
//         cout<<count<<" ";
//     }

//     return 0;
// }




// 6) sum of digits



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

//     for(int i=0;i<n;i++){
//         int sum=0;
//         int j=arr[i];
//         while(j>0){
//             int k=j%10;
//            sum=sum+k;
//             j=j/10;
//         }
//         cout<<sum<<" ";
//     }

//     return 0;
// }



// 7) strong number , ex 145 = 1! + 4! + 5! = 1+ 24 + 120 =145


// error


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
//     for(int i=0;i<n;i++){
//         int sumFact=0;
//         int j=arr[i];
//         while(j>0){
//             int k=j% 10;
//             int fact=1;
//             while(k>0){
//                 fact = fact * k;
//                 k--;
//             }
//             sumFact += fact; 
//             j = j/10;
//         }
//         if(sumFact==arr[i]){
//             cout<<"array contains a strong numbre.";
//             return 0;
//         }
//     }
//      cout<<"array does't contains a strong numbre.";
//     return 0;
// }





//  8) palondorme or not exof palindrome 1221,45654,967769 ect

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
//     for(int i=0;i<n;i++){
//         int original = arr[i];
//         int reversed=0;
//        while(arr[i]>0){
//             int digit = arr[i]%10;
//             reversed = reversed * 10 + digit;
//             arr[i] /= 10;
//         }
//         if(original == reversed){
//             cout<<"Array conatines Palindrome number"<<endl;
//             return 0;
//         }
//     }

//     cout<<"Array doesn't conatines Palindrome number"<<endl;
//     return 0;
// }



//  9)  check where array is increasing or decresing order


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
//         if(arr[i]>arr[i+1]){
//             cout<<"this is not an increasing Array"<<endl;
//             return 0;
//         }
//     }

//     cout<<"this is an increasing Array"<<endl;
//     return 0;
// }



//  10) find Factors of a number



// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter the number: ";
//     int n;
//     cin>>n;
//     cout<<"factors of the number is: ";
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
   

//     return 0;
// }