// THIS PROGRAM WAS DEVELOPED BY MUKESH SINGH
//DATE:2JUNE,2021
//GRADE ASSIGNMENT
/*THE MARKS FOR 5 SUBJECTS(EACH 100 MAX)OF 
A STUDENT ARE INPUT THROUGH KEYBOARD.
(1) Grade 'A' - PRECENTAGE 80 OR ABOVE
(2) Grade 'B' - PRECENTAGE 70 TO 79
(3) Grade 'C' - PRECENTAGE 60 TO 69
(4) Grade 'D' - PRECENTAGE 50 TO 59
(5) Grade 'E' - PRECENTAGE BELOW 50*/
#include <stdio.h>

int main()
{
int m1,m2,m3,m4,m5,total;
float precentage;
    printf("\nEnter marks in 5 subjects:");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    precentage=total/5;
    printf("\nTotal marks = %d",total);
    scanf("\nPercentage = %.2f",precentage);
    if(precentage>=80)
    printf("\nGrade A");
    else if(precentage>=70)
        printf("\nGrade B");
    else if(precentage>=60)
        printf("\nGrade C");
    else if(precentage>=50)
        printf("\nGrade D");
    else if(precentage<=50)   
        printf("\nGrade E");
     printf("\n\n\n THANKS FOR WATCHING THIS PROGRAM!");
    
    return 0;
}
