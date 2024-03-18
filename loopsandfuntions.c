/*
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i=i+1){//initialisation,condition updation
        printf("aditya\n");
    }return 0;
}*/
/*
#include <stdio.h>
int main()
{
    for ( int i=1;i<=10;i=i+1){//i+=1  i++
        printf("%d\n",i);
    }return 0;
}



#include <stdio.h>
int main()
{
    int i=1;//WHEN USED INDIVIDUALLY
    //printf("%d\n",++i);//=2 INCREASE THEN USE
    //printf("%d\n",i++);//1  USE TGEN INCREASE
    //printf("%d",i--);//1 USE THEN DECREMENT
    //printf("%d",--i);//0 DECREASE THEN USE
    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    for(float i=1.0;i<=5;i++){
         printf("%f\n",i);//RETURN 1 TO 5 IN FLOAT FORMAT
    }
    for(char ch='a';ch<='z';ch++){
        printf("%c\n",ch);//RETURN LETTERES FROM A TO Z
    }
    return 0;

}*/

/*
// #WHILE LOOP
#include<stdio.h>
int main()
{
    int i=1;
    while(i<=5){
        printf("%d\n",i);// 1 2 3 4 5
        i++;
    }return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("n=");
    scanf("%d",&n);
    while (i<=n){
        printf("%d\n",i);
        i++;
    }return 0;
}*/

// # DO WHILE
/*
#include<stdio.h>
int main()
{
    int i=1;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=5);

    return 0;
}*/

/*
//# SUM OUTSIDE AND INSIDE THE LOOP
#include<stdio.h>
int main()
{
    int sum =0,i,n;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        //printf("%d\n",sum);// 0 1 3 6
        sum+=i;
    } printf("%d\n",sum);//6

    return 0;

}*/


//#REVERSE PRINT
/*
#include <stdio.h>
int main()
{
    int i,n=5;
    for(i=n;i>=0;i--){
        printf("%d\n",i);
    }return 0;
}*/

//#TABLE
/*
#include<stdio.h>
int main()
{
    int a,i,product;
    printf("a=");
    scanf("%d",&a);

    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",a,i,a*i);
    }return 0;
}*/


//#BREAK
/*
#include<stdio.h>
int main()
{
    for(int i=1;i<=7;i++){
        if (i==5){
            break;
        }
     printf("%d\n",i);//1 2 3 4
    }
        
    return 0;
}*/

//#BREAK WHEN ODD IS FOUND
/*
#include <stdio.h>
int main()
{
    int i,n;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2 != 0){
            printf("%d\n",i);
            break;
        }printf("end");

    }return 0;
}*/

//# TAKING NO. AS INPUT AND FIND WHETHER IT IS  MULTIPLE OF 7

#include <stdio.h>
int main()
{
    int n;
    do{
        printf("enter n=");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n%7==0){
            break;
        }
    }while(1);
    printf("thank you\n");
    return 0;
    
}


//#CONTINUE
/*
#include<stdio.h>
int main()
{
    for (int i=i;i<=10;i++){
        if(i==6){//skip 6
            continue;
        }printf("%d\n",i);

    }
}*/

//PRINT ODD NUMBERS FROM 5 TO 50
/*
#include<stdio.h>
int main()
{
    for(int i=5;i<=50;i++){
        if(i%2==0){
            continue;
        }     printf("%d\n",i);
        
    }return 0;
}*/

//FACTORIAL
/*
#include<stdio.h>
int main()
{
    int n,product=1;
    printf("n=");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        product*=i;

    }printf("%d\n",product);
    return 0;
}*/

//#REVERSE OF A TABLE
/*
#include<stdio.h>
int main()
{
    int a,i,p;
    printf("a=");
    scanf("%d\n",&a);
    for (i=10;i>0;i--){
        p=a*i;
        printf("%d x %d = %d\n",a,i,p);
    }return 0;
    
}*/




