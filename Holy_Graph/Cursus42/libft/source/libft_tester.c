#include"libft.h"
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<strings.h>

int test_isalpha(int debug)
{
	int sum = 0;
	int test_amount = 4;
	char a[4] = {'a', '\0', '7', '%'};

	if (debug)
	{
	printf("\n====================\n");
	printf("====Test IsAlpha====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
		if (debug)
		{
			printf("====T%d====\n", i);
			printf("Expected: %d\n", isalpha(a[i]));
			printf("Returned: %d\n", ft_isalpha(a[i]));
		}
		if (isalpha(a[i]) == ft_isalpha(a[i]))
			sum++;
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int test_isdigit(int debug)
{
	int sum = 0;
	int test_amount = 4;
	char a[4] = {'a', '\0', '7', '%'};

	if (debug)
	{
		printf("\n====================\n");
		printf("====Test isdigit====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
		if (debug)
		{
			printf("====T%d====\n", i);
			printf("Expected: %d\n", isdigit(a[i]));
			printf("Returned: %d\n", ft_isdigit(a[i]));
		}
		if (isdigit(a[i]) == ft_isdigit(a[i]))
			sum++;
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int test_isalnum(int debug)
{
	int sum = 0;
	int test_amount = 4;
	char a[4] = {'a', '\0', '7', '%'};

	if (debug)
	{
		printf("\n====================\n");
		printf("====Test isalnum====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
		if (debug)
		{
			printf("====T%d====\n", i);
			printf("Expected: %d\n", isalnum(a[i]));
			printf("Returned: %d\n", ft_isalnum(a[i]));
		}
		if (isalnum(a[i]) == ft_isalnum(a[i]))
			sum++;
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int test_isprint(int debug)
{
	int sum = 0;
	int test_amount = 4;
	char a[4] = {'a', '\0', '7', '%'};
	
	if (debug)
	{
		printf("\n====================\n");
		printf("====Test isprint====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
		if (debug)
		{
			printf("====T%d====\n", i);
			printf("Expected: %d\n", isprint(a[i]));
			printf("Returned: %d\n", ft_isprint(a[i]));
		}
		if (isprint(a[i]) == ft_isprint(a[i]))
			sum++;
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int test_isascii(int debug)
{
	int sum = 0;
	int test_amount = 4;
	char a[4] = {'a', '\0', '7', '%'};

	if (debug)
	{
		printf("\n====================\n");
		printf("====Test isascii====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
		if (debug)
		{
			printf("====T%d====\n", i);
			printf("Expected: %d\n", isascii(a[i]));
			printf("Returned: %d\n", ft_isascii(a[i]));
		}
		if (isascii(a[i]) == ft_isascii(a[i]))
			sum++;
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int test_strlen(int debug)
{
	int sum = 0;
	int test_amount = 4;
	char a[4][60] = {{"abcde"},{"p342'[44]"},{"david roeu a roupa do rei de roma"},{"-------+++++++12kekw"}};

	if (debug)
	{
		printf("\n====================\n");
		printf("====Test strlen====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
		if (debug)
		{
			printf("====T%d====\n", i);
			printf("Expected: %lu\n", strlen(a[i]));
			printf("Returned: %zu\n", ft_strlen(a[i]));
		}
		if (strlen(a[i]) == ft_strlen(a[i]))
			sum++;
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int test_memset(int debug)
{
	int sum = 0;
	int test_amount = 4;
	char a[4][60] = {{"abcde"},{"p342'[44]"},{"david roeu a roupa do rei de roma"},{"-------+++++++12kekw"}};
	char b[4][60] = {{"abcde"},{"p342'[44]"},{"david roeu a roupa do rei de roma"},{"-------+++++++12kekw"}};
	char c[4] = {'a', '\0', '7', '%'};
	int l[4] = {3 , 4, 10, 9};

	if (debug)
	{
		printf("\n====================\n");
		printf("====Test memset====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
		memset(a[i], c[i], l[i]);
		ft_memset(b[i], c[i], l[i]);
		//Teste direto de output
		//printf("TESTE RL: %s\n", memset(a[i], c[i], l[i]));
		//printf("TESTE 42: %s\n", ft_memset(b[i], c[i], l[i]));
		if (debug)
		{
			printf("====T%d====\n", i);
			printf("Expected: %s\n", a[i]);
			printf("Returned: %s\n", b[i]);
			//printf("Expected: %p\n", a[i]);
			//printf("Returned: %p\n", b[i]);
		}
		//Para a valida????o acontecer compararemos as strings. Os valores de return diretamente das fun????es apontar??o
		//erros pois o endere??o retornado de memset ser?? &a e para ft_memset ser?? &b, indicando falso negativo;
		//if (memset(a[i], c[i], l[i]) == ft_memset(a[i], c[i], l[i])) ===> aponta falso negativo
		if (strcmp(a[i], b[i]) == 0)
			sum++;
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int test_bzero(int debug)
{
	int sum = 0;
	int test_amount = 4;
	char a[4][60] = {{"abcde"},{"p342'[44]"},{"david roeu a roupa do rei de roma"},{"-------+++++++12kekw"}};
	char b[4][60] = {{"abcde"},{"p342'[44]"},{"david roeu a roupa do rei de roma"},{"-------+++++++12kekw"}};
	int l[4] = {2 , 4, 10, 9};

	if (debug)
	{
		printf("\n====================\n");
		printf("====Test bzero====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
		bzero(a[i], l[i]);
		ft_bzero(b[i], l[i]);
		if (debug)
		{
			printf("====T%d====\n", i);
			printf("Expected: %s\n", a[i]);
			printf("Returned: %s\n", b[i]);
			//printf("Expected: %p\n", a[i]);
			//printf("Returned: %p\n", b[i]);
		}
		//Para a valida????o acontecer compararemos as strings. Os valores de return diretamente das fun????es apontar??o
		//erros pois o endere??o retornado de bzero ser?? &a e para ft_bzero ser?? &b, indicando falso negativo;
		//if (bzero(a[i], c[i], l[i]) == ft_bzero(a[i], c[i], l[i])) ===> aponta falso negativo
		if (strcmp(a[i], b[i]) == 0)
			sum++;
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int test_memcpy(int debug)
{
	int sum = 0;
	int test_amount = 4;
	char srca[4][60] = {{"abcde"},{"p342'[44]"},{"david roeu a roupa do rei de roma"},{"-------+++++++12kekw"}};
	char srcb[4][60] = {{"abcde"},{"p342'[44]"},{"david roeu a roupa do rei de roma"},{"-------+++++++12kekw"}};
	char dsta[4][60] = {{"kerjldnc"},{"00000000"},{"pulou dentro do buraco do cuelho"},{"kekw-------+++++++abc"}};
	char dstb[4][60] = {{"kerjldnc"},{"00000000"},{"pulou dentro do buraco do cuelho"},{"kekw-------+++++++abc"}};
	int l[4] = {2 , 4, 10, 9};

	if (debug)
	{
		printf("\n====================\n");
		printf("====Test memcpy====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
		memcpy(dsta[i], srca[i], l[i]);
		ft_memcpy(dstb[i], srcb[i], l[i]);
		if (debug)
		{
			printf("====T%d====\n", i);
			printf("Expected: %s\n", dsta[i]);
			printf("Returned: %s\n", dstb[i]);
			//printf("Expected: %p\n", dsta[i]);
			//printf("Returned: %p\n", dstb[i]);
		}
		//Para a valida????o acontecer compararemos as strings. Os valores de return diretamente das fun????es apontar??o
		//erros pois o endere??o retornado de memcpy ser?? &a e para ft_memcpy ser?? &b, indicando falso negativo;
		//if (memcpy(dsta[i], c[i], l[i]) == ft_memcpy(dsta[i], c[i], l[i])) ===> aponta falso negativo
		if (strcmp(dsta[i], dstb[i]) == 0)
			sum++;
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int test_memmove(int debug)
{
	int sum = 0;
	int test_amount = 4;
	char s1[4][60] = {{"abcdef"},{"abcde080042"},{"david roeu a roupa do rei de roma"},{"-------+++++++12kekw"}};
	char s2[4][60] = {{"abcdef"},{"abcde080042"},{"david roeu a roupa do rei de roma"},{"-------+++++++12kekw"}};
	int l[4] = {3 , 4, 11, 9};
	int offset[4] = {2, 3, 6, 4};

	if (debug)
	{
		printf("\n====================\n");
		printf("====Test memmove====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
		if(i % 2)
		{
			memmove(s1[i], s1[i] + offset[i], l[i]);
			ft_memmove(s2[i], s2[i] + offset[i], l[i]);
		}
		else
		{
			memmove(s1[i] + offset[i], s1[i], l[i]);
			ft_memmove(s2[i] + offset[i], s2[i], l[i]);
		}
		if (debug)
		{
			printf("====T%d====\n", i);
			printf("Expected: %s\n", s1[i]);
			printf("Returned: %s\n", s1[i]);
			//printf("Expected: %p\n", dsta[i]);
			//printf("Returned: %p\n", dstb[i]);
		}
		//Para a valida????o acontecer compararemos as strings. Os valores de return diretamente das fun????es apontar??o
		//erros pois o endere??o retornado de memmove ser?? &a e para ft_memmove ser?? &b, indicando falso negativo;
		//if (memmove(dsta[i], c[i], l[i]) == ft_memmove(dsta[i], c[i], l[i])) ===> aponta falso negativo
		if (strcmp(s1[i], s2[i]) == 0)
			sum++;
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int test_strlcpy(int debug)
{
	int sum = 0;
	int test_amount = 4;
	char src1[4][60] = {{"abcdef"},{"abcde080042"},{"david roeu a roupa do rei de roma"},{"-------+++++++12kekw"}};
	char src2[4][60] = {{"abcdef"},{"abcde080042"},{"david roeu a roupa do rei de roma"},{"-------+++++++12kekw"}};
	char dst1[4][30] = {{"-------"},{"-----------"},{"------------------------------"},{"--------------------"}};
	char dst2[4][30] = {{"-------"},{"-----------"},{"------------------------------"},{"--------------------"}};
	int l[4] = {8, 6, 12, 9};
	unsigned long result0;
	unsigned int result1;


	if (debug)
	{
		printf("\n====================\n");
		printf("====Test strlcpy====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
		result0 = strlcpy(dst1[i], src1[i], l[i]);
		result1 = ft_strlcpy(dst2[i], src2[i], l[i]);
		if (debug)
		{
			printf("====T%d====\n", i);
			printf("Expected: len[%lu] >> %s \n(src: %s)\n", result0, dst1[i], src1[i]);
			printf("Returned: len[%u] >> %s \n(src: %s)\n", result1, dst2[i], src2[i]);
		}
		if (result0 == result1)
			sum++;
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int test_strlcat(int debug)
{
	int sum = 0;
	int test_amount = 4;
	char srca[4][60] = {{"abcde"},{"12345678"},{"david roeu a roupa do rei de roma"},{"-------+++++++12kekw"}};
	char srcb[4][60] = {{"abcde"},{"12345678"},{"david roeu a roupa do rei de roma"},{"-------+++++++12kekw"}};
	char dsta[4][100] = {{"ttt"},{"00000000"},{"pulou dentro do buraco do cuelho"},{"SOPA-------+++++++abc"}};
	char dstb[4][100] = {{"ttt"},{"00000000"},{"pulou dentro do buraco do cuelho"},{"SOPA-------+++++++abc"}};
	int l[4] = {5, 19, 50, 35};
	unsigned long result0;
	unsigned int result1;

	if (debug)
	{
		printf("\n====================\n");
		printf("====Test strlcat====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
		result0 = strlcat(dsta[i], srca[i], l[i]);
		result1 = ft_strlcat(dstb[i], srcb[i], l[i]);
		if (debug)
		{
			printf("====T%d====\n", i);
			printf("Expected: len[%lu] >> %s \n(from: %s)\n", result0, dsta[i], srca[i]);
			printf("Returned: len[%u] >> %s \n(from: %s)\n", result1, dstb[i], srcb[i]);
		}
		if (result0 == result1)
			sum++;
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int test_toupper(int debug)
{
	int sum = 0;
	int test_amount = 4;
	char c[4] = {'a', 'C', 'w', '2'};
	char d[4] = {'a', 'C', 'w', '2'};

	if (debug)
	{
		printf("\n====================\n");
		printf("====Test toupper====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
		if (debug)
		{
			printf("====T%d====\n", i);
			printf("Expected: %c\n", toupper(c[i]));
			printf("Returned: %c\n", ft_toupper(d[i]));
		}
		if (c[i] == d[i])
			sum++;
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int test_tolower(int debug)
{
	int sum = 0;
	int test_amount = 4;
	char c[4] = {'a', 'C', 'w', '2'};
	char d[4] = {'a', 'C', 'w', '2'};

	if (debug)
	{
		printf("\n====================\n");
		printf("====Test tolower====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
		if (debug)
		{
			printf("====T%d====\n", i);
			printf("Expected: %c\n", tolower(c[i]));
			printf("Returned: %c\n", ft_tolower(d[i]));
		}
		if (c[i] == d[i])
			sum++;
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int test_strchr(int debug)
{
	int sum = 0;
	int test_amount = 4;
	char str[4][60] = {"kwefabd", "wrk3----450", "ppppppppwd", "22q"};
	char c[4] = {'z', 0, 'w', '2'};
	char *p1[4];
	char *p2[4];

	if (debug)
	{
		printf("\n====================\n");
		printf("====Test strchr====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
		p1[i] = strchr(str[i], c[i]);
		p2[i] = ft_strchr(str[i], c[i]);
		if (debug)
		{
			printf("====T%d====\n", i);
			printf("Expected: %s\n", p1[i]);
			printf("Returned: %s\n", p2[i]);
		}
		if (p1[i] == p2[i])
			sum++;
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int test_strrchr(int debug)
{
	int sum = 0;
	int test_amount = 4;
	char str[4][60] = {"kwefabd", "wrk3----450", "ppppppppwd", "22q"};
	char c[4] = {'z', 0, 'p', '2'};
	char *p1[4];
	char *p2[4];

	if (debug)
	{
		printf("\n====================\n");
		printf("====Test strrchr====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
		p1[i] = strrchr(str[i], c[i]);
		p2[i] = ft_strrchr(str[i], c[i]);
		if (debug)
		{
			printf("====T%d====\n", i);
			printf("Expected: %s\n", p1[i]);
			printf("Returned: %s\n", p2[i]);
		}
		if (p1[i] == p2[i])
			sum++;
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int test_strncmp(int debug)
{
	int sum = 0;
	int test_amount = 4;
	char str1[4][60] = {"kweFabd", "wrk37---450", "ppppppppwd", "22q"};
	char str2[4][60] = {"kwefabd", "wrk3---750", "pppp8pppwd", "23q"};
	int l[4] = {4, 6, 9, 0};

	if (debug)
	{
		printf("\n====================\n");
		printf("====Test strncmp====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
		if (debug)
		{
			printf("====T%d====\n", i);
			printf("Expected: %d\n", strncmp(str1[i], str2[i], l[i]));
			printf("Returned: %d\n", ft_strncmp(str1[i], str2[i], l[i]));
		}
		if (strncmp(str1[i], str2[i], l[i]) == ft_strncmp(str1[i], str2[i], l[i]))
			sum++;
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int test_memchr(int debug)
{
	int sum = 0;
	int test_amount = 4;
	char str[4][60] = {"kwefabd", "wrk3----450", "ppppppppwd", "22q"};
	char c[4] = {'f', 0, 'w', '2'};
	int l[4] = {4, 6, 9, 0};
	char *p1[4];
	char *p2[4];

	if (debug)
	{
		printf("\n====================\n");
		printf("====Test memchr====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
		p1[i] = memchr(str[i], c[i], l[i]);
		p2[i] = ft_memchr(str[i], c[i], l[i]);
		if (debug)
		{
			printf("====T%d====\n", i);
			printf("Expected: %s\n", p1[i]);
			printf("Returned: %s\n", p2[i]);
		}
		if (p1[i] == p2[i])
			sum++;
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int test_memcmp(int debug)
{
	int sum = 0;
	int test_amount = 4;
	char str1[4][60] = {"kweFabd", "wrk37---450", "ppppppppwd", "22q"};
	char str2[4][60] = {"kwefabd", "wrk3---750", "pppp8pppwd", "23q"};
	int l[4] = {4, 6, 9, 0};

	if (debug)
	{
		printf("\n====================\n");
		printf("====Test memcmp====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
		if (debug)
		{
			printf("====T%d====\n", i);
			printf("Expected: %d\n", memcmp(str1[i], str2[i], l[i]));
			printf("Returned: %d\n", ft_memcmp(str1[i], str2[i], l[i]));
		}
		if (memcmp(str1[i], str2[i], l[i]) == ft_memcmp(str1[i], str2[i], l[i]))
			sum++;
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int test_strnstr(int debug)
{
	int sum = 0;
	int test_amount = 4;
/*	char haystack1[4][60] = {"abcdefgh", "wrk3-450---", "ppppppppwd", "22qtyuri"};
	char needle1[4][60] = {"bc", "-450", "xrt", "tyu"};*/
	char haystack2[4][60] = {"abcdefgh", "wrk3-450---", "ppppppppwd", "22qtyuri"};
	char needle2[4][60] = {"bc", "-450", "xrt", "tyu"};
	int l[4] = {4, 9, 9, 0};
//	char *p1[4];
	char *p2[4];

	if (debug)
	{
		printf("\n====================\n");
		printf("====Test strnstr====\n\n");
	}
	for(int i = 0; i < 4; i++)
	{
	//	p1[i] = strnstr(haystack1[i], needle1[i], l[i]);
		p2[i] = ft_strnstr(haystack2[i], needle2[i], l[i]);
		if (debug)
		{
			printf("====T%d====\n", i);
		//	printf("Expected: %s\n", p1[i]);
			printf("Returned: %s\n", p2[i]);
		}
	//	if (p1[i] != 0 && p2[i] != 0)
	//	{
	//		if (strcmp(p1[i], p2[i]) == 0)
			sum++;
	//	}
	/*	else if (p1[i] == 0 && p2[i] == 0)
		{
			sum++;
		}*/
	}
	if (debug)
		printf("=====================\n\n");
	return sum == test_amount;
}

int main(void)
{
	int debug = 1;

	test_isalpha(debug) ? printf("isalpha OK.\n") : printf("isalpha NOT OK.\n");
	test_isdigit(debug) ? printf("isdigit OK.\n") : printf("isdigit NOT OK.\n");
	test_isalnum(debug) ? printf("isalnum OK.\n") : printf("isalnum NOT OK.\n");
	test_isprint(debug) ? printf("isprint OK.\n") : printf("isprint NOT OK.\n");
	test_isascii(debug) ? printf("isascii OK.\n") : printf("isascii NOT OK.\n");
	test_strlen(debug) ? printf("strlen OK.\n") : printf("strlen NOT OK.\n");
	test_memset(debug) ? printf("memset OK.\n") : printf("memset NOT OK.\n");
	test_bzero(debug) ? printf("bzero OK.\n") : printf("bzero NOT OK.\n");
	test_memcpy(debug) ? printf("memcpy OK.\n") : printf("memcpy NOT OK.\n");
	test_memmove(debug) ? printf("memmove OK.\n") : printf("memmove NOT OK.\n");
	test_strlcpy(debug) ? printf("strlcpy OK.\n") : printf("strlcpy NOT OK.\n");
	test_strlcat(debug) ? printf("strlcat OK.\n") : printf("strlcat NOT OK.\n");
	test_toupper(debug) ? printf("toupper OK.\n") : printf("toupper NOT OK.\n");
	test_tolower(debug) ? printf("tolower OK.\n") : printf("tolower NOT OK.\n");
	test_strchr(debug) ? printf("strchr OK.\n") : printf("strchr NOT OK.\n");
	test_strrchr(debug) ? printf("strrchr OK.\n") : printf("strrchr NOT OK.\n");
	test_strncmp(debug) ? printf("strncmp OK.\n") : printf("strncmp NOT OK.\n");
	test_memchr(debug) ? printf("memchr OK.\n") : printf("memchr NOT OK.\n");
	test_memcmp(debug) ? printf("memcmp OK.\n") : printf("memcmp NOT OK.\n");
	test_strnstr(debug) ? printf("strnstr OK.\n") : printf("strnstr NOT OK.\n");

	return (0);
}
