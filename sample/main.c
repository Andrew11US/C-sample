//
//  main.c
//  sample
//
//  Created by Agent X on 2/19/18.
//  Copyright © 2018 Andrii Halabuda. All rights reserved.
//

#include <stdio.h>
#include <math.h>

// func declaration
double circle_area(double x)
{
    return M_PI * x * x;
}

// 3 arguments
double triangle_area(double a, double b, double c)
{
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
    // select figure
    printf("1. Circle\n2. Triangle\n");
    int selected;
    scanf("%i", &selected);
    
    switch (selected)
    {
        case 1:
        {
            printf("Type radius:\t");
            double r;
            
            scanf("%lg", &r);
            if (r >= 0)
            {
                printf("Circle area:\t%lg\n", circle_area(r));
            }
            else
            {
                printf("Input < 0");
            }
            
            break;
        }
        case 2:
        {
            printf("Type 3 sides of triangle:\n");
            double a, b, c;
            
            scanf("%lg%lg%lg", &a, &b, &c);
            printf("Triangle area:\t%lg\n", triangle_area(a, b, c));
            //double s = (a + b + c) / 2;
            //printf("Pole trojkata:%lg\t", sqrt(s * (s - a) * (s - b) * (s - c)));
            
            break;
        }
        default:
        {
            printf("Wrong number!");
        }
            
    }
    /*
     printf("Podaj promien kola:\t");
     double r;
     double area;
     
     // read double from keyboard
     scanf("%lg", &r);
     area = M_PI * r * r;
     
     if (r >= 0)
     {
     printf("Pole kola: %lg\n", area);
     printf("Pole: %lg\n", circle_area(r));
     }
     else
     {
     printf("Input < 0");
     }
     */
    
    return 0;
}
