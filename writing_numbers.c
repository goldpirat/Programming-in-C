/*
CH-230-A
a3 p1.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

int main(){
    //We create a float x.
    float x;
    //We create an integer variable y.
    int n;

    //We scan for both x and y to check if an input has been typed.
    scanf("%f",&x);
    scanf("%d",&n);

    /*Create a while loop which runs for as long as n is less than 0.
     This ensures that the loop won't end if someone types '0'*/
    while(n<=0){
        //prints input is invalid if value entered is 0
        printf("Input is invalid, reenter value\n");
        scanf("%d",&n);
    }
    /*for loop which repeats for all instances of i which are less than n.
    And it prints the value of x 'n' times.
    */
    for(int i=0;i<n;i++){
        printf("%f\n",x);
    }
    return 0;
    // The code is done.
}
