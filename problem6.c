/*Write a C program to read the roll no, name and marks of three subjects and calculate the
total, percentage and division.
Test Data :
Input the Roll Number of the student :784
Input the Name of the Student :James

Input the marks of Physics, Chemistry and Computer Application : 70 80 90
Expected Output :
Roll No : 784
Name of Student : James
Marks in Physics : 70
Marks in Chemistry : 80
Marks in Computer Application : 90
Total Marks = 240
Percentage = 80.00
Division = First
*/
#include<stdio.h>
#include<string.h>

int main()
{
    int p,c,ca,r,tm;
   float per;
   char nm[20],div[20];
   printf("Enter your Roll:");
   scanf("%d",&r);
   printf("Enter your name:");
   scanf("%s",&nm);
   printf("Enter your physics marks:");
   scanf("%d",&p);
   printf("Enter your chemistry marks:");
   scanf("%d",&c);
   printf("Enter your computer Aplication marks:");
   scanf("%d",&ca);
   tm=p+c+ca;
   per=tm/3.0;

    if(per>=60)
    
        strcpy(div, "First");
    
    else if(per<60 && per>=48)
    
     strcpy(div , "second");
    
    else if(per<48 && per>=36)
    
        strcpy(div,"pass");
    
    else
    
        strcpy(div,"fail");
    
    printf("\nRoll no:%d\nName of student:%s\n",r,nm);
    
    printf("Marks in Physics :%d\nMarks in chemistry :%d\nMarks in computer Application :%d\n",p,c,ca);
    
    
    printf("Total marks=%d\npercentence=%.2f\nDivision=%s\n",tm,per,div);
    
    

    

}