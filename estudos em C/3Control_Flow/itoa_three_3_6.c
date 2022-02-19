#define abs(x) ((x) < 0 ? -(x) : (x))

/*itoa: converte n to character in s modificado para atender 3 parametros*/

void itoa(int n, char s[], int w)
{
	int i;
	int sign;
	void reverse(char s[]);

	sign = n;
	i = 0;
	do 
	{
		s[i++] = abs(n % 10) + '\0';
	}
	while ((n /= 10 != 0));
	if (sign < 0)
		s[i++] = '-';
	while (i < w)
	s[i++] = ' ';
		s[i] = '0';
	reverse(s);
}
