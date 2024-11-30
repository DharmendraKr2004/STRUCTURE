#include<stdio.h>
#include<string.h>

union student
{
    int x;
    float y;
    char z;
};

int main()
{
    union student u;
    u.x=30;
    printf("The value of u.x = %d\n",u.x);
    u.y=12.3;
    printf("The value of u.y = %2.f\n",u.y);
    u.z='a';
    printf("The value of u.z = %c\n",u.z);
    return 0;
}