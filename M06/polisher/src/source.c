#include <stdlib.h>
#include "source.h"
#include <string.h>
/**
 * \brief Removes the C comments from the input C code.
 *
 * \details The function polishes the code by */
//          - removing the block comments delimited by /* and */.
/*            These comments may span multiple lines.You should remove only */
//            characters starting with /* and ending with */. The characters,
/*            including white space characters (' ', \n, \r, \t), */
//            after */ should not be removed.
/*
 *          - remove the line comments starting with // until and including the
 *            newline character \n.
 *
 * \param input A code segment that contains some comments.It is a dynamically
 *              allocated string(array of characters).
 * \return A pointer to the polished code
 */

char *delete_comments(char *input)
{
    int i = 0;
    int j = 0;
    char *string = calloc((strlen(input)+1), sizeof(char));
    while(input[j] != '\0')
    {
        if(input[j] == '/' && input[j+1] == '*')
        {
           j=j+2;
            while(!(input[j] == '*' && input[j+1] == '/'))
            {
                j++;
            }
            j=j+2;
 
        }
        if(input[j] == '/' && input[j+1] == '/' )
        {
            j=j+2;
            while(input[j] != '\n')
            {
                j++;
            }
            j++;
        }
        else
        {
            string[i] = input[j];
            i++;
            j++;
        }
    }
    free(input);
    return string;
}
