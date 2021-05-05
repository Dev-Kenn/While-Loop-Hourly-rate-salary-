#include <stdio.h>
#define p printf
#define s scanf

/*Mark Kenneth O. Ferrer DICT 1-3*/

int main()
{
    int hours;
    float rate,salary,total;
    hours=0;
    
    while(hours>-1)
    {
        p("\nEnter hours worked (-1 TO END): ");
        s("%d",&hours);
        
        if(hours >-1)
        {
            p("\nEnter hourly rate of the worker ($00.00): ");
            s("%f",&rate);
            
            if(hours <=40)
            {
                salary = hours * rate;
                p("The salary is: $%.2f",salary);
            }
            
            else if(hours >40)
            {
                salary = (hours * rate)  + (rate /2);
                p("The salary is: $%.2f",salary);
            }
            
            total = salary + total;
        }
    }
    
    p("\nTthe total salary of the empoyees: $%.2f",total);
    p("\nThank you for using the system!");
    
    return 0;
}
