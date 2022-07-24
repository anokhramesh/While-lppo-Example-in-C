// Print Multiplication Table of any given number -using While loop in C programming

#include <stdio.h>
int main()
{
int c,num,i=0;//c,num and i are int type variable(initial value of i =0)
printf("Enter a number to Display the Multiplication Table\n");// ask user to enter a number
scanf("%d",& num);// taking input from user and storing to num variable
while(i<12)//checking condition-if vale of i is less than 12 or not?
   {
   i++;//incrementing the value of i in every iteration.
   c=num*i;// assigning the value to variable 'c' num multipled by  value of i
   printf("%d * %d = %d\n",i,num,c);// display the result on console.
   }
    return 0;
}
