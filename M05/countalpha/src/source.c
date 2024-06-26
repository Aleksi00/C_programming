#include "source.h"
#include <ctype.h>

/**
 * \brief Counts alphabetical characters in a string
 *
 * \param str The string to be processed
 * \return The number of alphabetical characters
 */
int count_isalpha(const char *str)
{
    int alphabet = 0;
    while (*str)
    {
       alphabet += !!isalpha(*str++);
    }

   return alphabet;
}
