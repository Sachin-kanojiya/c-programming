//  sum and average of natural no 
/*  
      it means 1+2+3+4+5= 15
      and
      15 /5= 3    
      
*/
#include<stdio.h>
#include<conio.h>
void main(){
int n,sum,avg;
    printf("Enter digit of a natura number till you want average ");
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    avg=sum/n;
    printf("value of sum = %d \n",sum);
    printf("value of avg = %d",avg);

}