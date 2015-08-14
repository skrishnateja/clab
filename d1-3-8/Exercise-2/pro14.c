
#include <assert.h>
#include <string.h>

	
char* change_to_roman ( long);
void predigit(char num1, char num2);

void postdigit(char c, int n);

 

char romanval[1000];

int i = 0;


int main()
{

	printf("%s\n", change_to_roman(501));
	assert(strcmp(change_to_roman (500),"D"));
	//assert(change_to_roman (5)==);
	//assert(change_to_roman ('6')=='6');
	
  return 0;
}
char* change_to_roman ( long decimal){
	
	

   
    
    if (decimal <= 0)

    {

        
        return 0;

    }

    while (decimal != 0)

    {

        if (decimal >= 1000)

        {

            postdigit('M', decimal / 1000);

            decimal = decimal - (decimal / 1000) * 1000;

        }

        else if (decimal >= 500)

        {

            if (decimal < (500 + 4 * 100))

            {

                postdigit('D', decimal / 500);

                decimal = decimal - (decimal / 500) * 500;

            }

            else

            {

                predigit('C','M');

                decimal = decimal - (1000-100);

            }

        }

        else if (decimal >= 100)

        {

            if (decimal < (100 + 3 * 100)) 

            {

                postdigit('C', decimal / 100);

                decimal = decimal - (decimal / 100) * 100;

            }

            else

            {

                predigit('L', 'D');

                decimal = decimal - (500 - 100);

            }

        }

        else if (decimal >= 50 )

        {

            if (decimal < (50 + 4 * 10))

            {

                postdigit('L', decimal / 50);

                decimal = decimal - (decimal / 50) * 50;

            }

            else

            {

                predigit('X','C');

                decimal = decimal - (100-10);

            }

        }

        else if (decimal >= 10)

        {

            if (decimal < (10 + 3 * 10))

            {

                postdigit('X', decimal / 10);

                decimal = decimal - (decimal / 10) * 10;

            }

            else

            {

                predigit('X','L');

                decimal = decimal - (50 - 10);

            }

        }

        else if (decimal >= 5)

        {

            if (decimal < (5 + 4 * 1))

            {

                postdigit('V', decimal / 5);

                decimal = decimal - (decimal / 5) * 5;

            }

            else

            {

                predigit('I', 'X');

                decimal = decimal - (10 - 1);

            }

        }

        else if (decimal >= 1)

        {

            if (decimal < 4)

            {

                postdigit('I', decimal / 1);

                decimal = decimal - (decimal / 1) * 1;

            }

            else

            {

                predigit('I', 'V');

                decimal = decimal - (5 - 1);

            }

        }

    }

    
    return romanval;

}

 

void predigit(char num1, char num2)

{

    romanval[i++] = num1;

    romanval[i++] = num2;

}

 

void postdigit(char c, int n)

{

    int j;

    for (j = 0; j < n; j++)

        romanval[i++] = c;

}