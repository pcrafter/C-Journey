#include<stdio.h>
#define con(x,y) y##x;

//Written code will not work
/*int main()
{
    int x =34,y =45,z;
    z =con(x,y);
    printf("Return value is %d",z);
}
*/


//Following is the write way to concatenate  two variable with Macro

int main()
{
    int z;
    z =con(34,45);
    printf("Return value is %d",z);
}
