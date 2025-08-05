int   is_separator (char c , char *str)
{
    int  i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}

int  count_words(char *str, char *charset)
{
    int count = 0;
    int i = 0;
    int in_word = 0;
    while (str[i])
    {
        if (is_separator(str[i],charset) == 1)
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            count++;
            in_word = 1;
        }
        i++;
    }
    return count;
}

char *malloc_word (char *str, char *charset)
{
    int i = 0;
    int len  =0;
    while (str[len]&& is_separator(str[i],charset)== 0)
            len++;
    char *tab = malloc (len+1);
    if (tab ==  NULL)
        return NULL;
    while (i < len)
    {
        tab[i]=str[i];
        i++;
    }
    tab[i] = '\0';
    return tab;
}
char **ft_split (char *str,char *charset)
{
    int i =0;
    char **result;
    int in_word = 0;
    int len = count_word (str,charset);
    result = malloc (len + 1);
    if (result == NULL)
        return NULL;
    while (str[i])
    {
        if (in_word = 0 && is_separator(str[i] ,charset)==0)
        {
                result[i]= malloc (&str[i],charset);
                in_word = 1;
        }else if (is_separator(str[i] ,charset)== 1 )
        {
            in_word = 0;
        }            
        i++;
    }
    result[i]=NULL;
    return result;
}

/*#include <stdio.h>

char **ft_split(char *str, char *charset);

int	main(void)
{
	char **result;
	
	result = ft_split("bonjour,le;monde:test", ",;:");

	printf("%s\n", result[0]); // bonjour
	printf("%s\n", result[1]); // le
	printf("%s\n", result[2]); // monde
	printf("%s\n", result[3]); // test

	return (0);
}
*.
