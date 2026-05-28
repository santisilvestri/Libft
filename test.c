
#include<stddef.h>

char *ft_strrchr(const char *s, int c)
{
	int i;

	i=0;
	if(c == '\0')
		return((char *)&s[i]);
	while(s[i])
		i++;
	while( i > 0)
	{
		if(s[i] == c)
			return((char *)&s[i]);
		i--;
	}
	return(NULL);
}

#include<stdio.h>

int main(void)
{
	char s[] = "Hello World";

	printf("%p",ft_strrchr(s, 'l'));
	return(0);
}