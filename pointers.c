//POINTERS = A VARIABLE THAT STORES THE MEMORY ADDRESSOF ANOTHER VARIABLE
//int*ptr=& age; // "*"=value at address operator
//int _age=*ptr;//&= address of variable
//int*ptr; char*ptr;float*ptr;
/*
#include<stdio.h>
int main()
{
    int age =22;
    int *ptr=&age;
    int _age=*ptr;
    printf("%d\n",_age);//22
    printf("%d\n",ptr);//1868560400
    printf("%u\n",&age);//hexa decimal to unsigned int 
    return 0;
}*/
//FORMAT SPECIFIER PRINTF("%P",&PTR);

//SIMILAR OUTPUT
/*
#include<stdio.h>
int main()
{
    int age =22;
    int* ptr =&age;
    printf("%d\n",age);//22
    printf("%d\n",*ptr);//22
    printf("%d",*(&age));//22
    return 0;
}*/

//PRACTICE
/*
#include<stdio.h>
    int main()
    {
        int* ptr ;//
        int x;//initial x
        ptr =&x;//ptr will store x's address
        *ptr =0;//ultimately x=0
        printf("x= %d\n",x);
        printf("*ptr =%d\n",*ptr);
        *ptr+=5;
        printf("x= %d\n",x);//5
        printf("*ptr = %d\n",*ptr);//5
        return 0;
    }*/

//POINTER TO POINTER
//int **pptr;
//char **pptr;
//float **pptr;
/*
#include<stdio.h>
int main()
{
    int price=5;
    int *ptr =&price;
    int **pptr =&ptr;
    //PRINT THE VALUE OF i FROM ITS POINTER TO POINTER
    int i=2;
    int  *k =&i;
    int **l=&k;
    printf("%d\n",**l);
    return 0;
}*/
//POINTERS IN FUNCTION CALL
//CALL BY VALUE =we pass value of variable as arg
//CALL BY REFERENCE=we pass address of varible as arg
/*
#include<stdio.h>
void square(int n);
void _square(int* n);
int main()
{
    int num=4;
    square(num);
    _square(&num);
    return 0 ;
}
//call by value
void square(int n){
    n=n*n;
    printf("square = %d\n",n);
}
void _square(int* n){
    (*n)= (*n)*(*n);
    printf("%d\n",_square);
}*/

//#SWAP 2 NUMBERS A&B
/*
#include<stdio.h>
int main()
{
    int a,b,c;
    c=0;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("a; %d b:%d",a,b);
    return  0;
}*/

/*
#include<stdio.h>

//void swap(int a,int b);
void _swap(int *a,int *b);
int main()
{
    int a=3,b=5;
    _swap(&a,&b);
    //swap(a,b);
    printf("a=%d b=%d",a,b);
    return 0;
}
/*
//CALL BY VALUE
void swap(int a,int b){
    int c=a;
    a=b;
    b=c;
    printf("a=%d b=%d",a,b);
    
}
//CALL BY REFERENCE
void _swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    
}*/
/*
#include<stdio.h>
void printadd(int n);
int main()
{
    int n=4;
    printf("%p\n",&n);
    printadd(n);//calling the function
    return 0;
}
void printadd(int n){
    printf("%p\n",&n);
}*/

