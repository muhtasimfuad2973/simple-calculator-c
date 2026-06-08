// This is a very simple calculator. Few of the functions can be operated here such as: general arithmetic, quadratic equation solve, trigonometry, logarithms, exponents, square roots and factorial. To execute them some instructions has to be followed. This calculator is valid  for only two inputs. This calculator cannot process the complex values. Soon more functions will be added and it will be developed

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() 
{
    int a,b;
    char process[20];
    printf("Enter what you want to do: ");
    
    //Here for general arithmetic, you have to write sum/subtraction/multiplication/division. For other operations, you need to write exponent, sqroot(for square root), factorial, log(for logarithms ), trigonometry, quadeqn(for quadratic equations)
    
    scanf("%s", process);
    if (strcmp(process,"sum")==0)
    {
        printf("Enter a: ");
        scanf("%d",&a);
        printf("Enter b: ");
        scanf("%d",&b);
        printf ("Ans %d",a+b); 
        
        //sum ends here
    }
    
    else if (strcmp(process,"substraction")==0)
    {
        printf("Enter a: ");
        scanf("%d",&a);
        printf("Enter b: ");
        scanf("%d",&b);
        printf("Ans %d",a-b); 
        
        // substraction ends here
    }
    
    else if (strcmp(process,"multiplication")==0)
    {
        printf("Enter a: ");
        scanf("%d",&a);
        printf("Enter b: ");
        scanf("%d",&b);
        printf("Ans %d",a*b);
        
        //product ends here
    }
    
    else if (strcmp(process,"division")==0)
    {
        float x,y;
        printf("Enter divisor: ");
        scanf("%f",&x);
        printf("Enter dividend: ");
        scanf("%f",&y);
        if (y==0)
        {
            printf("Undefined\n");
        }
        //The denominator can never be 0
        
        else 
        { 
        printf("Ans %.2f",x/y);
        }
       
        // division ends here
    }
    
    else if (strcmp(process,"exponent")==0)
    {
        printf ("Enter a: ");
        scanf ("%d",&a);
        printf ("Enter b: ");
        scanf("%d",&b);
        if (a==0 && b==0)
        {
            printf ("Undefined\n");
        }
        //0 to the power 0 is not defined
        
        else
        {
        printf("Ans %.0f",pow(a,b)); 
        }   
        
        // exponent ends here
    }
    
    else if (strcmp(process,"sqroot")==0)
    {
        printf ("Enter a: ");
        scanf ("%d",&a);
        if (a<0)
        { 
            printf ("Complex Value!\n");
        }
        else 
        {
        printf ("Ans %.2f",sqrt(a));
        }
        
        //square root ends here
    }
    
    else if (strcmp(process,"factorial")==0)
    {
        int i,a,fact=1;
        printf("Enter a: ");
        scanf("%d",&a);
        if (a<0)
        { 
        printf("Math error!\n");
        }
        // factorial is not defined for negative numbers
        
        else
        { 
        for(i=1;i<=a;i++)
        {  
           fact=fact*i;
        }
        printf("%d!= %d\n",fact);
        }
    }
    //factorial ends here
    
    else if (strcmp(process,"log")==0)
    {
        double a, base;
        printf("Enter a: ");
        scanf("%lf", &a);
        printf("Enter base: ");
        scanf("%lf", &base);

        if (a <= 0 || base <= 0 || base == 1)
        {
        printf("Undefined \n");
        }
        //log is not defined for negative numbers and it's base cannot be 0 and 1
        
     else
     {
        double ans = log(a) / log(base);
        printf("Ans %lf\n",ans);
     }
        
    }
        //log ends here
        
    else if (strcmp(process, "trigonometry")==0)
        {
            int x;  
            //x in degree but in c, only radian is taken
            
            float rad;
            printf ("Enter value in degree: ");
            scanf("%d",&x);
            rad= x*(M_PI/180);
            
            float s= sin(rad);
            float c= cos(rad);
            float t= tan(rad);
          
            
            printf("sin(x)= %.2f\n",s);
            printf ("cos(x)= %.2f\n",c);
            printf ("tan(x)= %.2f\n",t);
            printf ("cosec(x)= %.2f\n",1.0/s);
            printf ("sec(x)= %.2f\n",1.0/c);
            printf ("cot(x)= %.2f\n",1.0/t);
            
            
        }
        
        
     //trigonometry ends here

     else if (strcmp(process,"quadeqn")==0)
    {
        
    double a, b, c;
    double d, x1, x2;

    printf("Enter a: ");
    scanf("%lf" , &a);
    // a means coefficient of x^2
    
    printf ("Enter b: ");
    scanf ("%lf" , &b);
    // b is the coefficient of x
    
    printf ("Enter c: ");
    scanf ("%lf", &c);
    //c is the constant 

    // check if it's really quadratic
    if (a == 0)
    {
        printf("Math Error!\n");
        return 0;
    }
    // if a becomes 0 then the term of x^2 also becomes 0, so it's not a quadratic equation anymore

    d = b*b - 4*a*c;
    // here d indicates discriminant on which the nature of roots of quadratic equation depends

    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);

        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }
    else if (d == 0) 
    {
        x1 = -b / (2*a);
        printf("x = %.2lf\n", x1);
        // if d is 0, only one real root is found
        
    }
    else if (d<0)
    {
        printf("Math Error!");
        // if d is less than 0, the roots are complex
    }
        
}
    
    return 0;
    
}

// program ends here