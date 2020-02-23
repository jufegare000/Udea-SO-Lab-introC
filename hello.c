#include<stdio.h>
 
int main()
{
    int i;
 
    char ch_arr[3][10] = {
                             "spike",
                             "tom",
                             "jerry"
                         };
    
   for(i = 0; i<3; i++)
    {
        printf("\n Element is %s", ch_arr[i]);
    }
 
    // signal to operating system program ran fine
    return 0;
}