// CHARACTER ARRAY 
/*#include<stdio.h>
int main(){
    char arr[5]={'a','d','s','f','u'};
    printf("%c",arr[1]);//d
    return 0;

}*/

//ASCI VALUE 
//A=65 a=97
//'0'=48 ,'9'=57
/*#include<stdio.h>

int main(){
    char a='a';
    int x=(int)a;//type casting 
    printf("%c\n",a);//a
    printf("%d\n",a);//97(ascii value)
    printf("%d",x);
    return 0;
}*/

//#null character (\0) asciii value=0
// '\' is off no use

//#STRING INITIALISATION
/*#include<stdio.h>
int main(){
    char arr[]="hello\0";
    int i=0;
    while(i<5){
        printf("%c",arr[i]);
        i++;
    }
    while(arr[i]!='\0'){
        printf("%d",arr[i]);
        i++;
    }
    return 0;
}*/

//#size of a string
//CORRECT= arr[]="aditya" and arr[7]="aditya" and arr[50]="aditya"
//INCORRECT= arr[6]"aditya" 

//#WAYS TO PRINT
/*#include<stdio.h>
int main(){
    char arr[]="aditya";//size=6
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        printf("%c",i[arr]);
        printf("%c",*(arr+i));
        i++;
    }
}*/

//#GETS(),PUT()
/*#include<stdio.h>
#include<string.h>
int main(){
    char str[]="aditya";
    printf("%s\n",str);
    puts(str);
    return 0;
}*/
#include<stdio.h>
#include<string.h>
/*int main(){
    char str[40];
    scanf("%s",&str);//if aditya dandhare
    //printf("%s\n",str);//print->aditya
    gets(str);//skips first string before space
    printf("%s",str);
    return 0;
}*/
/*int main(){
    char str[40];
    scanf("%[^\n]",str);
    printf("%s",str);
    return 0;
}*/


//#REVERSE A STRING
/*#include<stdio.h>
#include<string.h>
int main(){
    char str[15];
    //puts("enter a string");// \n 
    scanf("%[^\n]",str);//multi line input
    //reversing 
    int size=0;
    int i=0;
    while(str[i] !='\0'){
        size++;
        i++;
    }printf("%d",size);
    for(int i=0,j=size-1;i<j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts(str);
    //printf("%s",str);
    //gets(str);
    //puts(str);
    return 0;
}*/



//# CHARACTER ARRAY AS POINTERS
/*#include<stdio.h>
#include<string.h>
int main(){
    char str[]="adi tya";
    char* ptr =&str[0];
    printf("%p",ptr);
    return 0;
}*/

//#COPY STRING
/*#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="aditya";
    char* s2=s1;
    s1[0]='m';
    printf("%s",s2);
    return 0;
}*/



