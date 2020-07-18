/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
int x;

int main(void)
{
    x=125;
    if(x)
    {
        printf("Case #1 where 'x' is non-zero (value=125)\n");
        printf("%d\n\n", x);
    }

    //Special case because x=0
    x=0;
    if(x)
    {
        // neither of these lines are printed because the "if statement" here evaluated to "false"
        // because x=0
        printf("Case #2 where 'x' is zero\n");
        printf("%d\n\n", x);
    }
    else
        printf("Case #2 does not print anything out because expression evaluates as '0'\n\n");

    x=-1;
    if(x)
    {
        // this case still prints because x is not zero; any other number including
        // negative numbers are evaluated to 'true'
        printf("Case #3 where 'x' is -1\n");
        printf("%d\n\n", x);
    }

    x=-345;
    if(x)
    {
        // this case still prints because x is not zero; any other number including
        // negative numbers are evaluated to 'true'
        printf("Case #4 where 'x' is -345\n");
        printf("%d\n", x);
    }

return 0;

}

