#include<stdio.h>


void dec_to_hex(int n){//recursive function
    if(n==0){
        return;
    }
    int hex_digit=n%16;
    if(hex_digit==10){
        dec_to_hex(n/16);
        printf("A");
    }
    else if(hex_digit==11){
        dec_to_hex(n/16);
        printf("B");
    }
    else if(hex_digit==12){
        dec_to_hex(n/16);
        printf("C");
    }
    else if(hex_digit==13){
        dec_to_hex(n/16);
        printf("D");
    }
    else if(hex_digit==14){
        dec_to_hex(n/16);
        printf("E");
    }
    else if(hex_digit==15){
        dec_to_hex(n/16);
        printf("F");
    }
    else{
    dec_to_hex(n/16);
    printf("%d",hex_digit);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    dec_to_hex(n);
}