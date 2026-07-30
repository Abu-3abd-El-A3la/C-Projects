#include <stdio.h>

int NUM1, NUM2;


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

/* ^ is a Bitwise operation means 'XOR' if it was samilar, it gives 0. different ones give 1 */
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


return 0;}


