#include <cs50.h>
#include <stdio.h>

void brick (int n);

int main(void) 
{    
    int n;

    do
    {   
        int n = get_int("Height: ");
        
        //check if n is in the range [1,8]
        if (n <= 8 && n >= 1)
            {   
            // print brick pyramid
            brick (n);
            break;
            }

    // if n not in [1,8] reprompt the user for Height
    } while (n > 8 || n < 1);
}


void brick (int n)
{
    for (int i = 1; i <= n; i++)
        {
            //printing " " i.e. blank 
            for (int k = n ; k > i; k--)
            {
                printf(" ");
            }

            //printing "#" 
            for (int j = 0; j < i; j++)
            {
                printf("#");
            }

            printf("\n");
        }
}