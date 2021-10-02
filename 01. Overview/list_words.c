#include <stdio.h>
#define MAXWORD 100

int main()
{
    FILE *file;
    file = freopen("word_list", "r", stdin);

    char *find_next(), word[MAXWORD];
    void capitalize(char *p);
    int char_count = 0, word_count = 0, word_length = 0;

    while (find_next(word) != NULL)
    {
        capitalize(word);
        ++word_count;
        word_length = strlen(word);
        char_count += word_length;
        printf("\n%12d    %s", word_length, word);
    }

    printf("\n\n%12d characters in %d  words\n\n", char_count, word_count);

    fclose(file);
    return 0;

}

char *find_next(char word[])
{
    int c, i;

    while(
        (c = getchar()) == ' ' ||
        c == '\n' ||
        c == '\t'
    )
    {
        // used to skip white space. weird
    }

    if (c != EOF)
    {
        i = 0;
        while (c != ' ' && c != '\n' && c != '\t' && c != EOF)
        {
            word[i++] = c;
            c = getchar();
        }

        word[i] = '\0';
        return (word);
    }

    return (NULL);
}

void capitalize(char *p)
{
    for (; *p != '\0'; ++p)
    {
        if ('a' <= *p && *p <= 'z')
        {
            *p += 'A' - 'a';
        }
    }
}