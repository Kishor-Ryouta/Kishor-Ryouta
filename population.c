#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i;
    int n;
    // TODO: Prompt for start size
    do 
    {
       n = get_int("start size : ");
    }
    while(n<9);
        
    
    // TODO: Prompt for end size
    int m;
    do 
    {
        m = get_int("end size : ");
    }
     while (m<n);
        
    
    // TODO: Calculate number of years until we reach threshold
    for (i=0; n<m; i++)
    {
    n = n + (n/3) - (n/4);
    }
  
    // TODO: Print number of years
    {
       printf("years = %i\n", i);
    }
}