#include <stdio.h>
int     main(int argc, char *argv[])
{
    if (argc == 2)
        printf("%i", ft_isalnum(argv[1][0]));
}