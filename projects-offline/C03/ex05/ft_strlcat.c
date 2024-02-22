#include <unistd.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int nb)
{
    char cp[nb];
    int i = 0;
    while(*src)
    {
        cp[i] = *src;
        i++;
        src++;
    }
    while(*dest)
    {    
        cp[i] = *dest;
        dest++;
        i++;
    }
    cp[i+1] = '\0';
    src = &cp[0];
    return ((unsigned)i);
}

/*int main() {
    char a[] = "Born to code"; // Initialize array a
    char b[] = "1337 42";
    unsigned int res = ft_strlcat(a, b, sizeof(a));
    write(1, a, res); // Write only the concatenated string, not the entire buffer
    return 0;
}*/

