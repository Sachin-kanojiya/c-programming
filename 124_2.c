#include<stdio.h>
#include<conio.h>
void main(){

    int n,count=0;

    printf("enter a number till you want no from 1 =");
    scanf("%d",&n);
    while(n){

        count++;
        n--;
        printf("%d\n",count);
    }

}