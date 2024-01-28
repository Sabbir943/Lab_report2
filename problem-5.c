/*5. Write a C program to determine eligibility for admission to a professional course based
on the following criteria:
Marks in Maths>=65
Marks in Phy >=55
Marks in Chem>=50
Total in all three subject>=190
or
Total in Math and Physics >=140
Test data:
Input the marks obtained in Physics :65
Input the marks obtained in Chemistry :51
Input the marks obtained in Mathematics :72
Total marks of Maths, Physics and Chemistry : 188
Total marks of Maths and Physics : 137 The candidate is not eligible.
Expected Output :
The candidate is not eligible for admission.
*/
#include<stdio.h>
int main()
{
    int m,p,c;
    printf("Enter math marks:");
    scanf("%d",&m);
    printf("Enter physics marks:");
    scanf("%d",&p);
    printf("Enter chemistry marks:");
    scanf("%d",&c);
    if(m>=65 && p>=55 && c>=50 && m+p+c>=180)
    {
        printf("The candidate is eligible for admission.");
    }
    else if(m+p>137)
    {
         printf("The candidate is eligible for admission.");
    }

    else 
    {
        printf("The candidate is not eligible for admission.");
    }

}