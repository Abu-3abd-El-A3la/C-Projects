#include <stdio.h>

int NUM1, NUM2;
int x = 7;
int y = 5;
int Z,K,m,L,N;


int main(){


    printf("Please Enter NUM1 :  ");
    scanf("%d", &NUM1 );
    printf("Please Enter NUM2 :  ");
    scanf("%d", &NUM2 );

/* & is a Bitwise operation means 'and' IT NEEDS 2 ONES to give 1 */
printf("NUM1 & NUM2 = %d \n" , NUM1 & NUM2); 

/* | is a Bitwise operation means 'OR' IT NEEDS ONE 1 to give 1 */
printf("NUM1 | NUM2 = %d \n" , NUM1 | NUM2); 

/* ~ is a Bitwise operation means 'not' it converts 0 to 1 and 1 to 0 */
printf("~ NUM1 = %d \n" , ~ NUM1); 
printf("~ NUM2 = %d \n" , ~ NUM2); 

/* ^ is a Bitwise operation means 'XOR' if it's samilar, it gives 0. different ones give 1 */
printf(" NUM1 ^ NUM2 = %d \n" , NUM1 ^ NUM2); 

/* >> is a Bitwise operation means 'Bitwise right shift operator' it moves all zeros and ones to the right
it looks like division by 2^n , n= the number on the other side*/
printf(" NUM1 >> 1 = %d \n" , NUM1 >> 1);    
printf(" NUM1 >> 2 = %d \n" , NUM1 >> 2);
printf(" NUM2 >> 1 = %d \n" , NUM2 >> 1);    
printf(" NUM2 >> 2 = %d \n" , NUM2 >> 2); 

/* << is a Bitwise operation means 'Bitwise left shift operator' it moves all zeros and ones to the left
it looks like multipication by 2^n , n= the number on the other side*/
printf(" NUM1 << 1 = %d \n" , NUM1 << 1);    
printf(" NUM1 << 2 = %d \n" , NUM1 << 2);
printf(" NUM2 << 1 = %d \n" , NUM2 << 1);    
printf(" NUM2 << 2 = %d \n" , NUM2 << 2); 

//TRY SOLVING THOSE ON A PAPER THEN CHECK THEM

printf("Z = %d \n", x&y);
printf("K = %d \n", x|y);
printf("m = %d \n", x^y);
printf("L = %d \n", x>>1);
printf("N = %d \n", y<<2);
 
/* to convert from BINARY to DEC
we start from right to left then we multiply the first number by 2^0, the sec is multiplied by 2^1,..etc. then we sum those numbers.

ex.) 1011=..?
from right 1*(2^0)+1*(2^1)+0*(2^2)+1*(2^3)=1+2+0+8=11
and then. 


to convert from DEC to BINARY
we divide the number and its Quotient by 2 over and over again.If there's a remainder, we put 1. else, put 0.
 WE PUT FIRST ZERO OR ONE ON THE RIGHT TEHN WE CONTINUE TO LEFT. 

Ex.) 20=..? 
20/2=10, R=0, then put 0
10/2=5, R=0, then put 0
5/2=2, R=1, then put 1
2/2=1 , R=0 ,then put 0
1/2=0 , R=1 , then put 1
  
so from right to left we have 10100

*/

/* SOLUTIOUN 
 in binary
 5 = 101
 7 = 111
 Z = 101 =5

 5 = 101
 7 = 111
 K = 111 =7

 5 = 101
 7 = 111
 m = 010 =2

 7 = 111
 L = 011=3

 5 = 101
 N = 10100 =20
 */

return 0;
}
