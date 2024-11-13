#include <stdio.h>
#include "ft_printf.h"

int main(int argc, char const *argv[])
{
        printf("   %% %s ", "a");
        printf("\n");
        ft_printf("   %% %s ", "a");
        printf("\n");
        return 0;
}
