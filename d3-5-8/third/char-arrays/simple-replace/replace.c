/*
 * replaces each space character in 'str' by a '$' across first 'len' chars.
 * returns the count of characters thus affected.
 * 
 * Note: this computes two results employing a side-effect.
 *
 */
int replace_space_by_dollar(char str[], unsigned int len)
{
    int i;
    int c;

    for (i = 0, c = 0; i < len; ++i) {
        if (str[i] == ' ') {
            str[i] = '$';
            ++c;
        }
    }

    return c;
}
