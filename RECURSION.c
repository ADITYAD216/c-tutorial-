//#FACTORIAL
/*#include<stdio.h>
int fact(int  n){
    if (n==0|| n==1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    int k=fact(n);
    printf("%d",k);
    return 0;
}*/



//# PRINTING N TO 1

/*#include<stdio.h>
int dec(int n){
    if (n==1){
        return 1;
    }
    printf("%d \n",n);
    
    return dec(n-1);
}
int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    printf("%d",dec(n));
    return 0;
}*/

//# PRINT 1 TO N
/*#include<stdio.h>
 int inc(int n, int x){
    
    if (x==n){
        return n;
    }
    printf("%d\n",x);
    return inc(n,x+1);
 }
int main(){
    int n=5;
    printf("%d/n",inc(5,1));
    return 0;
}*/


//# SUM 1 TO N
/*#include<stdio.h>
void sum(int n,int s){
    if(n==0){
        printf("%d\n",s);
    } 
    sum(n-1,s+n);//decrementing n as well as incrementing s
    return ;
}
int main(){
    int n=5;
    sum(n,0);
    return 0;
}*/
//ANOTHER METHOD 
/*#include<stdio.h>
int sum(int n){
    if (n==0) return 0 ;
    return n+sum(n-1);
}
int main(){
    int n=8;
    printf("%d",sum(n));
    return 0;
}*/

//#POWER OF A RAISED TO B
/*#include<stdio.h>
int power(int a,int b){
    if(b==0){
        return 1;
    }    
    return a*power(a,b-1);
}
int main(){
    int a=2,b=8;
    printf("%d",power(a,b));
    return 0;
}*/

//#FIBONACCI
/*#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n=7;
    printf("%d",fibo(n));
    return 0;
}*/


//#STAIR PATH (0 TO 5)
//(EITHER 1 OR 2 STEP AND NO. OF WAYS TO REACH 5 )
/*#include<stdio.h>
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    int totalways=stair(n-1)+stair(n-2);
    return totalways;

}
int main(){
    int n=5;
    printf("%d",stair(n));
    return 0;
}*/

//# 2D ARRAY 
/*#include<stdio.h>
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }return 0;
}*/

//#roll no. and marks
/*#include<stdio.h>
int main(){
    int a[4][2];
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    }return 0;
}*/


//# ADD TWO MATRICES
/*#include<stdio.h>
int main(){
    int n=3,a[n][n],b[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }printf("\n");
    }
    int c[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+ b[i][j];
            printf("%d ",c[i][j]);
        }printf("\n");
    }
}*/

//FIND THE SUM OF THE GIVEN NXM MATRIX
/*#include<stdio.h>
int main(){
    int n=3,a[n][n],s=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            s+=a[i][j];
        }
    }printf("%d ",s);
    return 0;
}*/


//#max and mini element of a matrix
/*#include<stdio.h>
int main(){
    int n=3,a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int max=a[0][0],mini=a[0][0];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (a[i][j]>max){
                max=a[i][j];
            }
            if (a[i][j]<mini){
                mini=a[i][j];
            }  
        }
    }printf("max=%d and min=%d",max,mini);
    return 0;

}*/


//#ROW WITH MAX SUM
/*#include<stdio.h>
int main(){
    int n=3,a[n][n],s=0,m=0,k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            s=s+a[0][j];
            m=m+a[1][j];
            k=k+a[2][j];
            printf("%d ",a[i][j]);
        }printf("\n");
    }if (s>m && s>k){
        printf("1 row ");
    }else if (m>k && m>s)
    {
       printf("2 row ");
    }else{
        printf("3 row");
    }
    return 0;
}*/


//#find row with max 1
/*#include<stdio.h>
int main(){
    int n=3,a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int maxcount=0;
    int maxindex=-1;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if (a[i][j]==1) count++;
        }if(maxcount<count){
            maxcount=count;
            maxindex=i;
        }
    }printf("%d",maxindex);
    return 0;
}*/

//#TRANSPOSE OF A MATRIX
/*#include<stdio.h>
int main(){
    int a[2][3]={{1,2,3},{4,5,6}};
  
    for(int i=0;i<3;i++){//change no of row
        for(int j=0;j<2;j++){//change col
            printf("%d",a[j][i]);//swap i and j
        }printf("\n");
    }
    return 0;
}*/


//#WRITE A PROGRAM TO ROTATE A MATRIX BY 90
//clockwise
/*#include<stdio.h>
 int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    //# first transpose
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){//new
           int temp=a[i][j];
           a[i][j]=a[j][i];
           a[j][i]=temp;
        }
    }
    //rotate(remind it)
    for(int i=0;i<3;i++){
        int j=0;
        int k=3-1;
        while(j<k){
            int temp=a[i][j];
            a[i][j]=a[i][k];
            a[i][k]=temp;
            j++;
            k--;
        }
    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",a[i][j]);
        }printf("\n");}
    return 0;

 }*/

 //# MATRIX MULTIPLICATION 
 
/* #include<stdio.h>
 int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    int c[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }printf("\n");
    }
    return 0;

 }*/


 //#matrix multi(if m!=n)
 /*#include<stdio.h>
 int main(){
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[3][2]={{1,0},{0,1},{0,1}};
    int c[2][2]={{0,0},{0,0}};
    for(int i=0;i<2;i++){//row
        for(int j=0;j<3;j++){//col
            for(int k=0;k<3;k++){//col
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("%d ",c[i][j]);
        }printf("\n");
    }
    return 0;

 }*/

 //#GIVEN A NXM MATRIX ,PRINT ALL ELEMENTS OF THE MATRIX IN SPIRAL ORDER
//# wave print 1
//123
//456   print->123654789
//789

/*#include<stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i%2==0){
                printf("%d",a[i][j]);
            }else{
                printf("%d",a[i][3-1-j]);
            }
        }printf("\n");
    }return 0;

}*/

//#wave print 2
//123
//456    print -> 147258369
//789

/*#include<stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},n=3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(n%2!=0){
                printf("%d",a[j][i]);
            }else{
                printf("%d",a[j][3-1-i]);//reverse
            }
        }
    }return 0;

}*/

//#SPIRAL
//123
//456   output-> 123698754(clock wise)
//789


//#SPIRAL LEFT