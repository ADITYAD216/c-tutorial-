/*@constants

integer = 1,3,-3
real = +6.2,-9.2
character ='a','g'single quotes only

#keywords[you cant name them as variable ]
int break else 

#()=parenthesisis

#comments
single line =//
multiple line =/*  */

/*
#for new line 
printf("kuch bhi\n")
 

#output[format specifiers]
integers= printf("value is %d",variable)
real=printf("value is %f",variable)
character=printf("value is %c",variable)*/
/*

#include <stdio.h>
int main()
{
    int num =34;
    printf("the value of num is %d",num);
    return 0;
}*/


//#scanf("%d",& age )& refers to the address 
//                   %d species the format
//                  age is the variableX


/*
#include <stdio.h>
int main()
{
    int age ;
    printf("the age is ");
    scanf("%d",& age);
    printf("the age of x is %d",age);
    return 0;
}
*/


//@SUM OF TWO NUMBERS

/*#include <stdio.h>
int main()
{
    int a,b;
    printf("enter a :");
    scanf("%d",& a);

    printf("enter b:");
    scanf("%d",&b);

    int sum=a+b;
    printf("the sum is %d",sum);

    return 0;
}
*/

//@COMPILATION = TRANSLATES C CODE INTO MACHINE CODE
//               AND CONVERTS INTO A.exe(in windows)
// a.out (linux and mac)



//#AREA OF SQUARE
/*
#include <stdio.h>
int main()
{
    float side;
    printf("side =");       //taking input
    scanf("%f",& side);

    float area=side*side;

    //scanf("%f", & area);
    printf("area is %f",area);
    return 0;
}
*/



//$AREA OF CIRCLE

/*
#include<stdio.h>
int main()
{
    const float pi=3.14;
    float radius;
    printf("the radius is =");
    scanf("%f",&radius);

     float area=pi*radius*radius;
     printf("the area is %f",area);
     return 0;

} */


//$PERIMETRE OF RECTANGLE
/*
#include <stdio.h>
int main()
{
    int a,b ;
    printf("a is=");
    scanf("%d",&a);

  
    printf("b is =");
    scanf("%d",&b);

    int perimetre=(2*(a+b));
    printf("the perimetre is %d",perimetre);
    return 0;
}
*/



//#INSTRUCTIONS-STATEMENTS

//@1 TYPE DECLARATION =DECLARE VARIABLE BEFORE USING IT
/*
here 
    int a=76;      //int b=a+65
    int b=a+46;    //int a=90  #its wrong 

    int a,b,c;
    a=b=c=2;

//@2 ARITHMETIC  a+b[operand1 operator operand2]
     int x,y=a*b //(y=a*b only)
                 //LHS should have only one variable
    pow(x,y), % modular operator*/

// HEADER FILE #include <math.h>



//TYPE CONVERSION[OP = OPERATION]
/*INT OP INT = INT 
INT OP FLOAT = float
FLOAT OP FLOAT = float

#include<stdio.h>
int main()
{
    int a =(int) 1.999999;//conversion of float into int
    printf("%d" , a );
    return 0;
}*/

//##operator precedence
//*,/,% -- +,- -- =
/*#include <stdio.h>
int main()
{
    float a=4*3/6*2;///IT WORKS SIDE BY SIDE[LEFT TO RIGHT]
    printf("%f",a);//ASSOCIATIVITY(FOR SAME PRECEDENCE)
    return 0;//==4.000000

}*/



//##CONTROL INSTRUCTIONS 
/*
@1SEQUENCE CONTROL
@DESISION CONTROL
@LOOP CONTROL
@CASE CONTROL*/


//#OPERATORS
//@1 RELATIONAL OPERATORS
//==,<,>,!=
//@2LOGICAL && AND , || OR , ! NOT
//@OPERATOR PRECEDENCE
//!,-- *,/,% -- +,- -- <,>,>= -- ==,!= -- && -- || -- =

//@3 ASSIGNMENT OPERATOR 
//=,+=,-=,*=,/=,%=



//#DIVISIBLE BY 2 OR NOT
/*#include <stdio.h>
int main()
{
    int a;
    printf("a=");
    scanf("%d",&a);

    printf("%d",a%2==0);

    if(a%2==0){
        printf("no. is divisible");

    }else{
        printf("no. is not divisible");
    }
    return 0;//result = 1 or 0
}
*/


//#IF ITS A SUNDAY AND ITS SNOWING PRINT TRUE
/*
#include<stdio.h>
int main()
{
    int issunday=1;
    int issnowing =1;

    printf("%d",issunday && issnowing);
    
    return 0;
    
}*/


//#SMALLEST

#include <stdio.h>
int main()
{
    int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    int smallest=a>b;
    printf("b is smallest (0 or 1) %d",smallest);
    
    return 0;
}







