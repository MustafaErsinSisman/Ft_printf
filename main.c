#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
        printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
        printf("\n");
        ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
        printf("\n");
        return 0;
}
