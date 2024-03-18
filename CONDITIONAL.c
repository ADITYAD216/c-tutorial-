//#FORMAT
/*
#include <stdio.h>
int main()
{
    int a=98;
    int b=67;
    if(a>b){
        printf(" do something");
    }else{
        printf("do nothing");
    }
    return 0;
}*/

//#ELSE IF
/*
#include <stdio.h>
int main()
{
    int age ;
    printf("age=");
    scanf("%d",&age);

    if(age<18){
        printf("child");

    }
    else if(age>18 && age <36){
        printf("middle age");
    }
    else{
        printf("old");
    }
    return 0;
}*/


//#CONDITIONAL OPERATORS
//TERNERY 
/*
#include <stdio.h>
int main()
{
    int age;
    printf("age=");
    scanf("%d",&age);

    age>=18 ? printf("adult") : printf("not adult");//TERNERY FORMAT
    return 0;
}*/

//##SWITCH 
/*
#include<stdio.h>
int main()
{
    int day ;
    printf("enter day(1-7)=");
    scanf("%d",&day);

    switch (day){
        case 1 : printf("monday");
                 break;
        case 2 : printf("sunday");
                 break;
        default: printf("not valid");
    }
    return 0;
}    
    
*/

//#pass or fail

#include <stdio.h>
int main()
{
    int marks;
    printf("MARKS=");
    scanf("%d",&marks);

    if(marks>30){
        printf("pass");

    }else{
        printf("fail");
    }
    return 0;
}
