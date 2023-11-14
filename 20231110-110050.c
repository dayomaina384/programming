#include<stdio.h>

int main()
{
/*A program to store and manage student details*/    

char firstName[30];
char registrationNumber[20];
char lastName[30];
float intro_To_Programming;
float networking;
float accounting;
float operatingSystem;
float computerApplication;

    printf("enter your firstName\n");
    scanf("%s",&firstName);
    
    printf("enter your registrationNumber\n");
    scanf("%s",&registrationNumber);
    
    printf("enter your lastName\n");
    scanf("%s",&lastName);
    
    printf("enter intro_to_programming\n");
    scanf("%f",&intro_To_Programming);
    
    printf("enter networking\n");
    scanf("%f",&networking);
    
    printf("enter accounting\n");
    scanf("%f",&accounting);
    
    printf("enter operatingSystem\n");
    scanf("%f",&operatingSystem);
    
    printf("enter computerApplication\n");
    scanf("%f",&computerApplication);
    
    
    return 0;
}




    