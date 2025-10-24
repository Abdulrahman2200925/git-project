
#include <stdio.h>
int mul(int x,inty){


    return x*y;
}

int sub(int a, int b)
{
    return a-b;
}

int add(int a , int b)
{
	return (a+b);
}

int mod(int a,int b)
{
   return(a%b);
}


int main(){
   

    int x=3,y=5;
    printf("There add = %d\n", add(x,y));
    printf("There sub = %d\n", sub(x,y));
    printf("There mul = %d\n", mul(x,y));
    printf("There mod = %d\n", mod(x,y));

    return 0; 
}