<<<<<<< HEAD
#include<stdio.h> 
#include<math.h> 
#include<conio.h>
int main() 
{ 
    int ope, a, b, sum, sub, mul, div, rem, i, esum=0, f=1; 
    double m, n, p, root; 
    // Introduction 
    printf("--------------------------------------\n"); 
    printf("-: Welcome To Mr. Calculator :-\n"); 
    printf("--------------------------------------\n"); 
    printf("Select An Operation\n"); 
    printf("1. Add\n2. Sub\n3. Multiply\n4. Div\n5. Add of all Even Number given range\n6. Add of all odd Number given range\n7. Factor\n8. Which is Greater\n9. Power\n10. Root\n:"); 
    scanf("%d",&ope); 
 
    // Addition 
    if(ope==1) 
    { 
    printf("You Select Add\n"); 
    printf("Enter First Value::"); 
    scanf("%d", &a); 
    printf("Enter Last Value::"); 
    scanf("%d", &b); 
    sum=a+b; 
    printf("Sum = %d", sum); 
    } 
 
    // Subtraction 
    else if(ope==2) 
    { 
    printf("You Select Sub\n"); 
    printf("Enter First Value::"); 
    scanf("%d", &a); 
    printf("Enter Last Value::"); 
    scanf("%d", &b); 
    sub=a-b; 
    printf("Sub = %d", sub); 
    } 
 
    // Multiplication 
    else if(ope==3) 
    { 
    printf("You Select Multiply\n"); 
    printf("Enter First Value::"); 
    scanf("%d", &a); 
    printf("Enter Last Value::"); 
    scanf("%d", &b); 
    mul=a*b; 
    printf("Result = %d", mul); 
    } 
 
    // Division 
    else if(ope==4) 
    { 
    printf("You Select Division\n"); 
    printf("Enter Dividend Value::"); 
    scanf("%d", &a); 
    printf("Enter Divisor Value::"); 
    scanf("%d", &b); 
    sub=a/b; 
    rem=a%b;     
    printf("Quotient = %d\nRemainder=%d", sub, rem); 
    } 
 
 
    // Add of all Even Number given range 
    else if(ope==5) 
    { 
    printf("You Select Add of Even Number given range\n"); 
    printf("Enter First Value::"); 
    scanf("%d", &a); 
    printf("Enter Last Value::"); 
    scanf("%d", &b); 
    for(i=a; i<=b; i++) 
    { 
        if(i%2==0) 
        { 
            printf("%d\n",i); 
            esum=esum+i; 
        } 
    } 
    printf("Sum of all even numbers = %d", esum); 
    } 
 
    // Add of all odd Number given range 
    else if(ope==6) 
    { 
    printf("You Select Add of Even Number given range\n"); 
    printf("Enter First Value::"); 
    scanf("%d", &a); 
    printf("Enter Last Value::"); 
    scanf("%d", &b); 
    for(i=a; i<=b; i++) 
    { 
        if(i%2!=0) 
        { 
            printf("%d\n",i); 
            esum=esum+i; 
        } 
    } 
    printf("Sum of all even numbers = %d", esum); 
    } 
 
    // Factor 
    else if(ope==7) 
    { 
    printf("You Select Factor\n"); 
    printf("Enter Value::"); 
    scanf("%d", &a); 
    for(i=1; i<=a; i++) 
    { 
        f*=i; 
    } 
        printf("Factor =%d", f); 
    } 
 
 
    // Which is Greater 
    else if(ope==8) 
    { 
        printf("You Select Which is Greater\n"); 
        printf("Enter Value of a::"); 
        scanf("%d", &a); 
        printf("Enter Value of b::"); 
        scanf("%d", &b); 
 
       if (a>b) 
        { 
            printf("%d is Greater", a); 
=======
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include <stdlib.h>
int main()
{
    int ope, a, b, sum, sub, mul, div, rem, i, esum=0, f=1;
    double m, n, p, root;
    // Introduction
    printf("--------------------------------------\n");
    printf("-: Welcome To Mr. Calculator :-\n");
    printf("--------------------------------------\n");
    printf("Select An Operation\n");
    printf("1. Add\n2. Sub\n3. Multiply\n4. Div\n5. Add of all Even Number given range\n6. Add of all odd Number given range\n7. Factor\n8. Which is Greater\n9. Power\n10. Root\n:");
    scanf("%d",&ope);

    // Addition
    if(ope==1)
    {
    printf("You Select Add\n");
    printf("Enter First Value::");
    scanf("%d", &a);
    printf("Enter Last Value::");
    scanf("%d", &b);
    sum=a+b;
    printf("Sum = %d", sum);
    }

    // Subtraction
    else if(ope==2)
    {
    printf("You Select Sub\n");
    printf("Enter First Value::");
    scanf("%d", &a);
    printf("Enter Last Value::");
    scanf("%d", &b);
    sub=a-b;
    printf("Sub = %d", sub);
    }

    // Multiplication
    else if(ope==3)
    {
    printf("You Select Multiply\n");
    printf("Enter First Value::");
    scanf("%d", &a);
    printf("Enter Last Value::");
    scanf("%d", &b);
    mul=a*b;
    printf("Result = %d", mul);
    }

    // Division
    else if(ope==4)
    {
    printf("You Select Division\n");
    printf("Enter Dividend Value::");
    scanf("%d", &a);
    printf("Enter Divisor Value::");
    scanf("%d", &b);
    sub=a/b;
    rem=a%b;    
    printf("Quotient = %d\nRemainder=%d", sub, rem);
    }


    // Add of all Even Number given range
    else if(ope==5)
    {
    printf("You Select Add of Even Number given range\n");
    printf("Enter First Value::");
    scanf("%d", &a);
    printf("Enter Last Value::");
    scanf("%d", &b);
    for(i=a; i<=b; i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            esum=esum+i;
>>>>>>> 5cc40fed00487a4959895e68471f0edbd5e32fa7
        }
        else{
          printf("%d is Greater", b);
        } 
    } 
 
    // Power 
    else if(ope==9) 
    { 
        printf("You Select Power\n"); 
        printf("Enter Number::"); 
        scanf("%lf", &m); 
        printf("Enter Power::"); 
        scanf("%lf", &n); 
 
        p = pow(m,n); 
    printf("%.2lf\n", p); 
    } 
 
    // Root 
    else if(ope==10) 
    { 
    printf("You Select Root\n"); 
    printf("Enter Number::"); 
    scanf("%lf", &m); 
    root = sqrt(m);
    printf("Root = %.2lf\n", root);  
    } 
    
 
    printf("\n-------------------------------------\n"); 
    printf("-: Thanks For Using Mr. Calculator :-\n"); 
    printf("-------------------------------------\n"); 

    int restart;
    printf("For Restart Enter 1 \nFor Exit Enter 0\n:");
    scanf("%d", &restart);
    if(restart==1){
        main();
    }
    else{
        return 0;
    }
 
    getch();
}
