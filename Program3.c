//Prime checking 2
#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("The given number is Prime");
    }else{
       printf("The given number is Non-Prime");
    }
}