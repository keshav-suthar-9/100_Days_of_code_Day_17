/*Q33: Write a program to check if a number is an Armstrong number.


Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>


int main(){
    
    int n,m,sum=0;

    scanf("%d",&n);
    m=n;
    while(n!=0){
        sum=((n%10)*(n%10)*(n%10))+sum;
        n=n/10;
        
    }

    if(m==sum){
        printf("yes");
    }else{
        printf("no");
    }

    

    return 0;
}