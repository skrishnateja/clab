
#include <assert.h>
#include <string.h>
	
int match ( char text[], char pattern[]);

int main()
{
	
	assert(match("krishnateja\0", "hna\0")==4);
	assert(match("sharathkrishna\0", "hna\0")==11);
	assert(match("sharathnakrishna\0", "hna\0")==6);
	assert(match("\0", "jkl\0")==-1);
	assert(match("krishanateja\0", "hna\0")==-1);
	assert(match("krishnateja\0", "hna\0")==4);
	
  return 0;
}
int match ( char text[20], char pattern[5]){

	int c,d, text_len, pattern_len,position=-1;
	text_len = strlen(text);
	pattern_len = strlen(pattern);

	if (pattern_len > text_len)
	{
		return -1;
	}

	for ( c = 0; c <= text_len - pattern_len; ++c)
	{
		position = c;
		for ( d = 0; d < pattern_len; ++d)
		{
			if (pattern[d] == text[c])
			{
				c++;
				
			}
			else {
				break;
			}
		}
		if (d==pattern_len)
				{
					return position;
				}
	}



	return -1;
	
} 