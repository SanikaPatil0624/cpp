#include<stdio.h>
#include<math.h>
#define SIZE 5

struct stComplex
{
    int re, im; 
}; 

typedef struct stComplex Complex; 

float absc(float[]);
float find_max(float[]);

int main()
{
    Complex inputs[SIZE]; //Array for inputs

    int i;
    float max;

    for(i = 0; i < SIZE; i++
        printf("Enter real part of complex number: ");
        scanf("%d", &inputs[i].re);
        printf("Enter imaginary part of complex number: ");
        scanf("%d", &inputs[i].im);

        if(inputs[i].re != 0 and inputs[i].im != 0)
        {
            continue;
        }
        else
        {
            return 1;
        }   
    }

    max = absc(Complex inputs[SIZE]); //Sending the real and imaginary parts to calculate absolute value

    printf("The biggest absolute value is %f", max);

    return 0;
}

float absc(Complex x[SIZE]) 
{
    int i;
    float absolute[SIZE], max; 
    for(i = 0; i < SIZE; i++)
    {
        absolute[i] = sqrt(pow(inputs[i].re, 2) + pow(inputs[i].im, 2));
    }
    max = find_max(absolute[SIZE]); 

    return max; 
}

float find_max( float array[SIZE] )
{
    int i, max;
    max = array[0];
    for( i = 1; i < SIZE; i++ ) 
    {
        if( max < array[ i ] )
            max = array[ i ];
    }
    return max;
}
