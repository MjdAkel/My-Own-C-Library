#include "libft.h"
#include <stdio.h>   // for printf
#include <fcntl.h>   // for open
#include <unistd.h>  // for close

int main(void)
{
    /* Character checks */
    printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));
    printf("ft_isdigit('5') = %d\n", ft_isdigit('5'));
    printf("ft_isalnum('Z') = %d\n", ft_isalnum('Z'));
    printf("ft_isascii(127) = %d\n", ft_isascii(127));
    printf("ft_isprint(' ') = %d\n", ft_isprint(' '));

    /* String length */
    printf("ft_strlen(\"Hello\") = %zu\n", ft_strlen("Hello"));

    /* Memory functions */
    char buf[20];
    ft_memset(buf, 'A', 5);
    buf[5] = '\0';
    printf("ft_memset result: %s\n", buf);

    /* String functions */
    char str[] = "Hello World";
    printf("ft_strchr(str, 'o') = %s\n", ft_strchr(str, 'o'));
    printf("ft_strrchr(str, 'o') = %s\n", ft_strrchr(str, 'o'));
    printf("ft_strncmp(\"abc\", \"abd\", 3) = %d\n", ft_strncmp("abc", "abd", 3));

    /* Conversion */
    printf("ft_atoi(\"1234\") = %d\n", ft_atoi("1234"));

    /* Allocation */
    char *dup = ft_strdup("libft");
    printf("ft_strdup(\"libft\") = %s\n", dup);
    free(dup);

    /* Substring and join */
    char *sub = ft_substr("HelloWorld", 0, 5);
    printf("ft_substr(\"HelloWorld\",0,5) = %s\n", sub);
    free(sub);

    char *join = ft_strjoin("Hello", "42");
    printf("ft_strjoin(\"Hello\",\"42\") = %s\n", join);
    free(join);

    /* Trim */
    char *trim = ft_strtrim("   Hello   ", " ");
    printf("ft_strtrim(\"   Hello   \",\" \") = %s\n", trim);
    free(trim);

    /* Split */
    char **split = ft_split("a,b,c", ',');
    for (int i = 0; split[i]; i++)
        printf("ft_split part[%d] = %s\n", i, split[i]);
    // free split parts
    for (int i = 0; split[i]; i++) free(split[i]);
    free(split);

    /* I/O functions */
    ft_putchar_fd('X', 1);
    ft_putstr_fd(" <- ft_putstr_fd\n", 1);
    ft_putendl_fd("ft_putendl_fd adds newline", 1);
    ft_putnbr_fd(12345, 1);
    ft_putchar_fd('\n', 1);

    return 0;
}
