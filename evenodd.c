#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num%2==0){
        printf("%d number is even",num);
    }
    else{
        printf("%d number is odd",num);
    }
    
    return 0;
}

