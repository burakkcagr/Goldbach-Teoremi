/*
2’den büyük tüm çift sayılar iki asal sayının toplamı biçiminde yazılabilir(Goldbach teoremi).
Klavyeden bir çift sayı alan ve bunu iki asal sayının toplamı biçiminde yazdıran programı yazınız.
Örneğin:
		Sayı: 16
			11 + 5
		Sayı: 24
			17 + 7
Daha sonra aynı programı tüm asal toplamları yazdıracak biçimde de yazınız.
Örneğin:
		Sayı: 16
			3 + 13
			5 + 11
			11 + 5
			13 + 3
		Sayı: 24
			5 + 19
			7 + 17
			11 + 13
			13 + 11
			17 + 7
			19 + 5
*/

#include <stdio.h>
#include <math.h>

int isprime(int	val);

int main()
{
	int val;
	double val_sqrt;

	printf("Bir cift sayi giriniz:");
	scanf("%d", &val);
	for	(int i = 2; i < val; ++i)
		if (isprime(i) && isprime(val-i))
			printf("%d + %d\n", i, val-i);

	return 0;
}

int isprime(int val)
{
	double val_sqrt;

	if (val	% 2 == 0)
		return val == 2;

	val_sqrt = sqrt(val);

	for	(int i = 3; i <= val_sqrt; i += 2)
		if (val	% i == 0)
			return 0;

	return 1;
}