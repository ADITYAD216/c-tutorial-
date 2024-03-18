//COLLECTION OF SIMILAR DATA TYPES STORED AT CONTAGIOUS MEMORY LOCATIONS
/*#include <stdio.h>
int main()
{
    int mark1=97;
    int mark2=98;
    int mark3=89;
    int marks[3]={97,98,89};
    printf("%d",marks[1]);//98
    return 0; 
}*/
//ZERO BASE INDEXING
/*
#include<stdio.h>
int main()
{
    int marks[3];
    printf("enter phy");
    scanf("%d",&marks[0]);

      printf("enter che");
    scanf("%d",&marks[1]);

      printf("enter math");
    scanf("%d",&marks[2]);
    printf("phy= %d che = %d math = %d",marks[0],marks[1],marks[2]);
    return 0;
}*/

//FINAL PRICE WITH GST
/*
#include<stdio.h>
int main()
{
  float price[3];
  //float price[3]={100,200,300};
  //float price[]={100,200,300};both are same
  printf("price:");
  scanf("%f",&price[0]);
  scanf("%f",&price[1]);
  scanf("%f",&price[2]);
  printf("total price %f",(price[0]+(0.18)*price[0]));
  printf("total price %f",(price[1]+(0.18)*price[1]));
  printf("total price %f",(price[2]+(0.18)*price[2]));
  return 0;
}
 */

//POINTERS IN ARRAYS
/*
#include<stdio.h>
int main()
{
int age=18;
int* ptr =&age;
printf("%u\n",ptr);//,,,,,596
ptr++;//4 bytes will increase in the memory address
printf("%u\n",ptr);//......600

float price=20.00;
float* p=&price;
printf("%u\n",p);
p++;
printf("%u\n",p);//will increase by 4 byte
}*/

//subtract and comparison
/*
#include<stdio.h>
int main()
{
  int age =18;
  int _age =23;
  int *ptr=&age;
  int *_ptr=&_age;
  printf("difference= %u",ptr-_ptr);//1 due to one integer diff 
}*/


//#ARRAY IS A POINTER
//int *ptr= &arr[0];
//int *ptr=arr;
/*
#include<stdio.h>
int main()
{
  int aadhar[5];

  //input
  int *ptr=&aadhar[0];
  for(int i=0;i<5;i++){
    printf("%d index =",i);
    scanf("%d\n",(ptr +i));
  }
  
  //output
  for(int i=0;i<5;i++){
    printf("%d index =%d\n",i,*(ptr+i));
  }
  return 0;

}*/

//#ARRAY AS FUNCTION ARGUMENT
/*
#include<stdio.h>
void print(int arr[],int n);
int main()
{
  int arr[]={1,2,3,4};
  print(arr,4);
  return 0;
}

void print(int arr[],int n){
  for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
  }
}*/

//MULTIDIMENTIONAL ARRAYS 
//2D ARRAYS 
//int arr[][]={{1,2},{3,4}};
//arr[0][0]=1
//arr[0][1]=2
//arr[1][0]=3
//arr[1][1]=4
/*
#include<stdio.h>
int main()
{
  int marks[2][3];
  marks[0][0] = 90;
  marks[0][1] = 89;
  marks[0][2] = 86;
  marks[1][0] = 90;
  marks[1][1] = 89;
  marks[1][2] = 86;
  printf("%d",marks[0][0]);
}*/

//FUNCTION TO COUNT THE NO. OF ODD NO.
/*
#include<stdio.h>
int countodd(int arr[],int n);

int main()
{
  int arr[]={1,2,3,4};
  printf("%d",countodd(arr,4));
  return 0; 
}
int countodd(int arr[],int n){
  int count =0;
  for(int i=0;i<n;i++){
    if(arr[i]% 2 !=0){
      count++;//2 no. aree odd
    }
  }return count;
}*/

//#reverse the array
/*
#include<stdio.h>
int reverse(int arr[],int n);
void printcd(int arr[],int n);
int main()
{
  int arr[]={1,2,3,4,5};
  reverse(arr,5);
  printcd(arr,5);
  return 0;
}

void printcd(int arr[],int n){
  for (int i=0;i<n;i++){
    printf("%d\t",arr[i]);
  }
}
int reverse(int arr[],int n){
  for (int i=0;i<n/2;i++){
    int firstval=arr[i];
    int secondval=arr[n-i-1];
    arr[i]=secondval;
    arr[n-i-1]=firstval;
  }
}*/