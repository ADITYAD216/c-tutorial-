//##STRING 
//A CHARACTER ARRAY TERMINATED BY A '\O'
//END ME '\O' LAGEGA
//char name[]={'a','d','i','\O'};//adi

/*
#include <stdio.h>
int main()
{
    char name[]={'a','d','i','t','y','a','\0'};
    char class[]="aditya";//both are same
    printf(name);//aditya
    printf(class);
    return 0;
}*/


//##CHANGE IN MEMORY
 //A D I T Y A \0
 //1 2 3 4 5 6  7

//#CREATE A STRING USING LOOP AND PRINT  CH USING LOOP
/*
#include<stdio.h>

void printstring(char arr[]);


int main()
{
    char firstname[]="aditya";
    char lastname[]="dandhare";
    printstring(firstname);
    printstring(lastname);
    return 0;
}

void printstring(char arr[]){
    for (int i=0;arr[i] !='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");//for the next line 
}*/

//STRING FORMAT SPECIFIER 
//"%s"=string 

#include<stdio.h>

void printstring(char arr[]);

int main()
{
    char name[50];
    scanf("%s",name);
    printf("your name is %s",name);
    return 0;
}

void printstring(char arr[]){
    for(int i=0;arr[i] !='\0';i++){
        printf("%c",arr[i]);
    }
}7:36:58