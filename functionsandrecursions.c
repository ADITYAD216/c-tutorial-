/*#include<stdio.h>
//decreration prototype
void printhello();

int main(){
    printhello();//function call
    printhello();
    printhello();
    return 0;
}
//function definition
void printhello(){
    printf("hello\n");
    printf("aditya\n");
}*/

//#two functions hello and goodbye
/*
#include<stdio.h>
void hello();
void printgoodbye();

int main()
{
    hello();
    printgoodbye();
    return 0;
}
void hello(){
    printf("hello\n");
}
void printgoodbye(){
    printf("goodbye");
}*/




//#FUNCTION
/*
#include<stdio.h>
void namaste();
void bonjour();
int main()
{
    printf("enter f or i=");
    char ch;
    scanf("%c",&ch);

    if(ch=='i'){
        namaste();
    }else{
        bonjour();
    }
    return 0;
}
void namaste(){
    printf("namaste\n");
}
void bonjour(){
    printf("bonjour");
}*/

//#SUM(int a,int b)
/*
#include<stdio.h>
int sum(int a,int b);
int main(){
    int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    int s =sum(a,b);
    printf("sum is %d",s);
    return 0;
}
int sum(int a,int b){
    return a+b;
}*/
/*
#include<stdio.h>
void table(int n);
int main()
{
    int n;
    printf("num=");
    scanf("%d",&n);

    table(n);//actual parametre// argument
    return 0;
}
void table(int n){//parametre //format parametre
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
}*/


//#SQUARE USING FUNCTION LIBRARY
/*
#include<stdio.h>
void library(int a);
int main()
{
    int a;
    printf("a=");
    scanf("%d",&a);
    library(a);
    return 0;
}
void library(int a){
    printf("the square is %d",a*a);
}*/

//#RECURSION
 
#include<stdio.h>
/*
void printhw(int count);
int main()
{
    printhw(5);
    return 0;
}

//recursive function
void printhw(int count){
    if (count ==0){
        return ;
    }
    printf("hello world\n");
    printhw(count -1);
}*/

//#SUM OF FIRST N NATURAL NUMBER
/*
int sum(int n);
int main()
{
    printf("sum is %d",sum(5));
   
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumnm1 =sum(n-1) ;//sum of 1 to n
    int sumN = sumnm1 + n;
    return sumN;
}*/

//#FACTORIAL OF N fac(n)=fac(n-1)*n
/*
#include<stdio.h>
int  fact(int n);
int main(){
    printf("factorial is %d",fact(4));
}

int fact(int n){
    if(n==1){
        return 1;
    }
    int factnm1=fact(n-1);
    int factN=fact(n-1)*n;
    return factN;
}*/

//#PERCENTAGE
/*
#include<stdio.h>
int percentage(int science,int math, int sanskrit);
int main()
{
    printf("percentage is %d",percentage(56,72,86));
}
int percentage(int science, int math, int sanskrit){
    return ((science+math+sanskrit)/3);
}*/

//#FIBONACCI SEQUENCE
/*
#include<stdio.h>
int fibo(int n);
int main(){
    printf("%d",fibo(5));
    return 0;

}
int fibo(int n){
    if(n==0){
        return 0;
    }if(n==1){
        return 1;
    }
    int fibnm1=fibo(n-1);
    int fibnm2=fibo(n-2);
    int fib=fibnm1 + fibnm2;
    //printf("fib of %d is %d\n",n,fib);
    return fib;

}*/


