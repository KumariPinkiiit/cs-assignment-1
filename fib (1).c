#include <stdio.h>

int main() {
    
    int num=10,a,b,next ,add;
    a=-1;
    b=1;
    for(int i=0;i<10;i++)
    {add=a+b;
    a=b;
    b=add;
    printf("%d",add);        
    }

    return 0;
}
