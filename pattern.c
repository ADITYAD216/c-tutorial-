//#1 STAR RECTANGLE

/*
#include<stdio.h>
int main(){
    int row;
    printf("row=");
    scanf("%d",&row);

    int col;
    printf("col=");
    scanf("%d",&col);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            printf("*");
        }printf("\n");
    }printf("\n");
    return 0;
}*/

//#2 STAR SQUARE

/*
#include<stdio.h>
int main(){
    int size=3;
    for(int i=1;i<=size;i++){
        for(int i=1;i<=size;i++){
            printf("*");
        }printf("\n");
    }printf("\n");
    return 0;

}*/

//#3 NUMBER SQUARE
/*
#include<stdio.h>
int main(){
    int a;
    printf("a=");
    scanf("%d",&a);

    for(int i=1;i<=a;i++){//
        for(int i=1;i<=a;i++){//1234
            printf("%d",i);   //1234
        }printf("\n");        //1234
    }printf("\n");            //1234
    return 0;

}*/

//#4 STAR TRIANGLE
/*
#include<stdio.h>
int main(){
    int n;
    printf("n=");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }printf("\n");

    }printf("\n");
    return 0;

}*/

//#5 INVERTED STAR TRIANGLE

/*
#include<stdio.h>
 int main(){
    int n=6;
    for(int i=1;i<=n;i++){//no. of rows are incrementing
        for(int j=n;j>=i;j--){//no. of elements in the row is decreasing
            printf("*");
        }printf("\n");
    }printf("\n");
    return 0;
 }*/


//#6 NUMBER TRIANGLE

/*
#include<stdio.h>
int main()
{
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);//j should come 
        }printf("\n");

    }printf("\n");
    return 0;
}*/

//#7 NUMBER TRIANGLE INVERTED
/*
#include<stdio.h>
int main(){
    int n=4;
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d",j);//12345 1234 ...
        }
        printf("\n");
    }printf("\n");
}*/

//# PASCALS TRIANGLE
/*
#include<stdio.h>
 int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }return fact;
 }
int combi(int n,int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main (){
    int n;
    printf("n=");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            printf("%d",combi(i,j));
        }printf("\n");
    }printf("\n");
    return 0;
}*/


