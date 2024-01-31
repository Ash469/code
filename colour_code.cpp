#include<stdio.h>
int main(){
    char a,b,c;
    long int f,s,t;
    scanf("%c\n",&a);
    scanf("%c\n",&b);
    scanf("%c",&c);
    switch(a){
        case 'k':
              f=0;
              break;
        case 'b':
             f=1;
               break;
        case 'r':
            f=2;
             break;
        case 'o':
              f=3;
              break;
        case 'y':
              f=4;
              break;
        case 'g':
             f=5;
               break;
        case 'B':
            f=6;
             break;
        case 'v':
              f=7;
              break;
    }
    switch(b){
        case 'k':
              s=0;
              break;
        case 'b':
             s=1;
               break;
        case 'r':
            s=2;
             break;
        case 'o':
              s=3;
              break;
        case 'y':
              s=4;
              break;
        case 'g':
             s=5;
               break;
        case 'B':
            s=6;
             break;
        case 'v':
              s=7;
              break;
            

    }
    switch(c){
        case 'k':
              t=1;
              break;
        case 'b':
             t=10;
               break;
        case 'r':
            t=100;
             break;
        case 'o':
              t=1000;
              break;
        case 'y':
              t=10000;
              break;
        case 'g':
             t=100000;
               break;
        case 'B':
            t=1000000;
             break;
        case 'v':
              t=10000000;
              break;
    }
    long int res=(f*10+s)*t;
    printf("%ld",res);
    
    return 0;
}