#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>

int RFib(int n){
    if(n==0){return 0;}
    if(n==1){return 1;}
    return (RFib(n-1)+RFib(n-2))%2025;
}

int CleverFib(long int n){
    long double sq5 = sqrt(5.0);
    long double l1 = (1.0+sq5)/2.0;
    long double l2 = (1.0-sq5)/2.0;
    return (int)(round((long double)((long double)pow(l1,n) - (long double)pow(l2,n))/sq5))%2025;
    
}

int TrivialGCD(int a, int b){
    if(a==0||b==0){return 0;}
    if(a==1||b==1){return 1;}
    int smaller_number = a<b?a:b;
    for(int i=smaller_number; i>0;i--){
        if((a%i==0)&&(b%i==0)){return i;}
    }
    return 1;
}

long int EuclidGCD(long int a, long int b){
    if(a==b){return a;}
    if(a==0){return b;}
    if(b==0){return a;}
    long int larger = a>b?a:b;
    long int smaller = a<b?a:b;
    if(larger%smaller==0){return smaller;}
    return EuclidGCD(larger % smaller, smaller);
}

/*
int main(){
    clock_t start = clock();

    int a = EuclidGCD(31,15);
    printf("%d \n",a);
    clock_t end = clock();
    double execution_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", execution_time);
    return 0;
}
*/