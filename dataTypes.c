//1)

#include <stdio.h>

int main() {
    int intVal;
    char charVal;
    float floatVal;
    double doubleVal;

    printf("Size of int: %zu bytes\n", sizeof(intVal));
    printf("Size of char: %zu byte\n", sizeof(charVal));
    printf("Size of float: %zu bytes\n", sizeof(floatVal));
    printf("Size of double: %zu bytes\n", sizeof(doubleVal));

    return 0;
}





// 2)

#include<stdio.h>

int main(){

    int num1=2;
    int num2=100;

    printf("Addition of two numbers is:%d \n",num1+num2);
    printf("Subtraction of two numbers is:%d \n",num1-num2);
    printf("Multiplication of two numbers is: %d\n",num1*num2);
    printf("division of two numbers is: %d\n",num1/num2);

    return 0;
}





// 3)

#include<stdio.h>

int main(){

    int x=19;
    int y= x++ + --x - x++;
    int z= --x + x-- - x++ + ++x;
     
    printf("%d\n",y);
    printf("%d\n",z);

    return 0;
}



// 4)


#include<stdio.h>

int main(){

    printf("450 / 10: %d \n",450/10);
    printf("59632 modulo 10: %d \n",59632%10);
    printf("72 / 6: %d \n",72/8);
    printf("56 modulo 8: %d \n",56%8);

    return 0;
}







// 5)

#include<stdio.h>

int main(){
    int num1=10;
    int num2=20;

    num2= num1 + num2;
    num1 = num2 - num1;
    num2 = num2- num1;

    printf("num1: %d\n",num1);
    printf("num2: %d\n",num2);

    return 0;
}





// 6)


#include<stdio.h>

int main(){
    int num=10;

    if(num>5){
        printf("number is grater than 5");
    }

    return 0;
}




// 7)


#include<stdio.h>

int main(){
    int num=99;

    if(num<100){
        printf("number is less than 100");
    }

    return 0;
}








// 8)


#include<stdio.h>

int main(){
    int num=44;

    if(num%2==0){
        printf("number is even");
    }else{
        printf("number is odd");
    }

    return 0;
}





// 9)



#include<stdio.h>

int main(){
    int num=33;

    if(num<10){
        printf("number is less than 10");
    }else if(num>10 && num<20){
        printf("number is greater than 10 but less than 20");
    }else{
        printf("Happy coding");
    }

    return 0;
}





// 10)



#include<stdio.h>

int main(){
    int num=17;

    if(num%3==0){
        printf("number is divisible by 3");
    }else{
        printf("number is not divisible by 3");
    }

    return 0;
}
