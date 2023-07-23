#include<stdio.h>

int main(){
    int length;
    int breadth;

    scanf("%d",&length);
    scanf("%d",&breadth);

    int area = length * breadth;

    prntf("%d", area);
    
    return 0;
}