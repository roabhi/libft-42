/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:31:25 by rabril-h          #+#    #+#             */
/*   Updated: 2022/02/08 15:28:36 by rabril-h         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"
#include "ft_isascii.c"
#include "ft_isprint.c"
#include "ft_strlen.c"
#include "ft_tolower.c"
#include "ft_toupper.c"
#include "ft_strlcpy.c"
#include "ft_strlcat.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_strncmp.c"
#include "ft_strnstr.c"
#include "ft_memset.c"
#include "ft_bzero.c"
#include "ft_memcpy.c"
#include "ft_memmove.c"
#include "ft_memchr.c"
#include "ft_memcmp.c"
#include "ft_atoi.c"
#include "ft_calloc.c"
#include "ft_strdup.c"
#include "ft_substr.c"
#include "ft_strjoin.c"
#include "ft_strtrim.c"
#include "ft_split.c"
#include "ft_itoa.c"
#include "ft_strmapi.c"
#include "ft_striteri.c"
#include "ft_putchar_fd.c"
#include "ft_putstr_fd.c"
#include "ft_putendl_fd.c"
#include "ft_putnbr_fd.c"
#include "ft_lstnew.c"
#include "ft_lstadd_front.c"
#include "ft_lstsize.c"
#include "ft_lstlast.c"
#include "ft_lstadd_back.c"
#include "ft_lstdelone.c"
#include "ft_lstclear.c"
#include "ft_lstiter.c"




// Funciones de apoyo a los ejercicios adicionales

char	f_mapi(unsigned int i, char c)
{
	char chr;
	chr = c + (i - i + 1);
	return (chr);
}

void	f_stri(unsigned int i, char *c)
{
	ft_putchar_fd(*c, 1);
	ft_putchar_fd('{', 1);
	ft_putnbr_fd(i, 1);
	ft_putchar_fd('}', 1);
}

void	ft_delone(void *p)
{
	printf("La direccion e mi puntero es %p y el contenido de mi puntero es %s \n", p, (char *)p );
	ft_bzero(p,ft_strlen(p));
	p = NULL;
	//printf("La direccion e mi puntero es %p y el contenido de mi puntero es %s \n\n", p, (char *)p );
}

void	ft_clear(void *p)
{
	printf("ft_clear -> La direccion de mi puntero es %p y el contenido de mi puntero es %s y tiene %d caracteres \n\n", p, (char *)p, (int)ft_strlen(p));
	ft_bzero(p,ft_strlen(p));
	p = NULL;
	//printf("ft_clear -> La direccion de mi puntero es %p y el contenido de mi puntero es %s y tiene %d caracteres  \n\n", p, (char *)p, (int)ft_strlen(p));
}

void	ft_iter(void *p)
{
	//t_list *el;
	//el = p;	
	//printf("La direccion del puntero de mi lista es %p y contenido del item de mi lista es %s \n", el, (char *)el->content);)
	printf("La direccion del puntero de mi lista es %p y contenido del item de mi lista es %s \n", p, (char *)p);

}

// main


int	main(void)
{
	printf("El caracter es alphanumerico %d \n", ft_isalpha('t'));
	printf("El caracter es numerico %d\n", ft_isdigit('2'));
	printf("El caracter es numerico o alphanumerico  %d\n", ft_isalnum('6'));
	printf("El caracter es ascii %d\n", ft_isascii('@'));
	printf("El caracter es printable %d\n", ft_isprint('\t'));
	printf("La longitud del string es %zu\n", ft_strlen("soy un string"));
	printf("Mayusculas a minusculas --> La letra que envio es %c y lo que devulvo es %c\n", 'X', ft_tolower('X'));
	printf("Munisculas a Mayusculas --> La letra que envio es %c y lo que devulvo es %c\n", 't', ft_toupper('t'));

	printf("========= strlcpy ==========\n\n");

	char dst[4];
	const char src[] = "foo";

	char	dst2[4];
	const char	src2[] = "foo";
	
	printf("El resultado final es  %s, que quiero sumar desde %s y quiero copiar la longitud %zu\n",dst, src, ft_strlcpy(dst, src, sizeof(dst)));
	printf("El resultado de la funcion original es %s, que quiero sumar desde %s y quiero copiar la longitud %zu\n", dst2, src2, strlcpy(dst2,src2,sizeof(dst2)));

	printf("========= strlcat ==========\n\n");

	char	dstcat[] = "hola que";
	const char srccat[] = "tal";

	char dstcat2[] = "hola que";
	const char	srccat2[] = "tal";

	printf("El resultado de la funcion original es %zu \n", strlcat(dstcat2, srccat2, sizeof(dstcat2)));
	printf("El resultado de mi funcion es %zu\n\n", ft_strlcat(dstcat, srccat, sizeof(dstcat)));

	printf("========= strchr ==========\n\n");

	char	string[] = "teste";
	char	locate = '\0';

	char	string2[] = "teste";
	char	locate2 = '\0';
	
	printf("El resultado de la funcion original es %s \n", strchr(string, locate));
	printf("El resultado de mi funcion es %s \n\n", ft_strchr(string2, locate2));

	printf("========= strrchr  ==========\n\n");

	char	string3[] = "hola mundo";
	char	locate3 = 'm';

	char	string4[] = "hola mundo";
	char	locate4 = 'm';

	printf("El resultado de la funcion original es %s\n", strrchr(string3, locate3));
	printf("El resultado de mi funcion es %s\n\n", ft_strrchr(string4, locate4));

	printf("========= strncmp ==========\n\n");

	char	string5[] = "compare this";
	char	string6[] = "compare that";

	char	string7[] = "compare this";
	char	string8[] = "compare that";

	size_t	until = 11;

	printf("El resultado de la funcion original es %d\n", strncmp(string5, string6, until));
	printf("El resultado de mi funcion es %d\n\n", ft_strncmp(string7, string8, until));

	printf("========= strnstr  ==========\n\n");

	char	string9[] = "Foo Bar Hey";
	char	string10[] = "He";

	char	string11[] = "Foo Bar Hey";
	char	string12[] = "He";

	size_t until2 = 11;

	printf("el resultado de la funcion nativa es %s\n", strnstr(string9, string10, until2));
	printf("El resultado de mi funcion es %s\n\n", ft_strnstr(string11, string12, until2));

	printf("========= memset ==========\n\n");

	char	string13[] = "Hello World";
	char	string14[] = "Hello World";

	printf("El resultado de la funcion original es %s\n", memset(string13, 'x', 3));
	printf("El resultado de la mi funcion es %s \n\n", ft_memset(string14, 'x', 3));

	printf("========= bzero ==========\n\n");

	char	string15[] = "abcdefgh";
	char	string16[] = "abcdefgh";

	bzero(string15, 4);
	
	printf("sistema --> el primer caracter es %c \n", string15[0]);
	printf("sistema --> el segundo caracter es %c \n", string15[1]);
	printf("sistema --> el tercer caracter es %c \n", string15[2]);
	printf("sistema --> el cuarto caracter es %c \n", string15[3]);
	printf("sistema --> el quinto caracter es %c \n", string15[4]);
	printf("sistema --> el sexto caracter es %c \n", string15[5]);
	printf("sistema --> el septimo caracter es %c \n", string15[6]);
	printf("sistema --> el octavo caracter es %c \n\n", string15[7]);

	ft_bzero(string16, 4);

	printf("ft  --> el primer caracter es %c \n", string16[0]);
	printf("ft  --> el segundo caracter es %c \n", string16[1]);
	printf("ft  --> el tercer caracter es %c \n", string16[2]);
	printf("ft  --> el cuarto caracter es %c \n", string16[3]);
	printf("ft  --> el quinto caracter es %c \n", string16[4]);
	printf("ft  --> el sexto caracter es %c \n", string16[5]);
	printf("ft  --> el septimo caracter es %c \n", string16[6]);
	printf("ft  --> el octavo caracter es %c \n\n", string16[7]);


	printf("========= memcpy ==========\n\n");

	
	char string17[] = "This is an example";
	char string18[] = "This is an example";
	printf("El resultado de la funcion original es %s\n", memcpy(string17 + 7, string17, 10));
	printf("El resultado de mi funcion es %s\n\n", ft_memcpy(string18 + 7, string18, 10));

	printf("========= memmove ==========\n\n");

	//char	dest19[] = "Hello";
	//char	src20[] = "World123";

	char	dest21[] = "Hello";
	char	src22[] = "World12345";

	//printf("El resultado del sistema es %s \n", memmove(dest19, src20, 7));
	printf("El resultado de mi funcion es %s \n\n", ft_memmove(dest21, src22, 8));

	printf("========= memchr ==========\n\n");

	char	str23[] = "This is a string";
	char	to_find = 'r';
	size_t	until3 = 10;

	char	str24[] = "This is a string";
	char	to_find2 = 'r';
	size_t	until4 = 10;

	printf("sistema --> El caracter %c se encuentra en %s \n", to_find, memchr(str23, to_find, until3));
	printf("ft --> El caracter %c se encuentra en %s \n\n", to_find2, ft_memchr(str24, to_find2, until4));

	printf("========= memcmp ==========\n\n");

	char	str25[] = "This is x string";
	char	str26[] = "This is a string";
	size_t	until5 = 9;

	char	str27[] = "This is x string";
	char	str28[] = "This is a string";
	size_t	until6 = 9;

	printf("sistema --> La comparacion de strings en memoria es %d \n", memcmp(str25, str26, until5));
	printf("ft --> La comparacion de strings en memoria es %d \n\n", ft_memcmp(str27, str28, until6));

	printf("========= atoi =============\n\n");

	char	str29[] = " -5647916"; //99999999999999999999999999
	char	str30[] = " -5647916"; //99999999999999999999999999

	printf("sistema --> El atoi del sistema da %d\n", atoi(str29));
	printf("ft --> mi atoi da %d\n\n", ft_atoi(str30));

	printf("========= sizeof(int) ==========\n\n");

	int	num;

	printf("El valor maximo de int es %lu\n\n", sizeof(num));

	printf("========= calloc ==========\n\n");

	size_t	count_obj = 1;
	size_t	size_each = 5;
	char	*test = "12345";

	printf("sistema --> test antes de calloc es %c \n", test[4]);

	test = calloc(count_obj, size_each);

	printf("sistema --> El calloc del sistema es %c\n\n", test[4]);

	
	size_t	count_obj2 = 1;
	size_t	size_each2 = 5;
	char	*test2 = "12345";

	printf("ft_calloc --> test antes de calloc es %c \n", test2[4]);

	test2 = calloc(count_obj2, size_each2);

	printf("ft_calloc --> test de calloc es %c\n\n", test2[4]);

	printf("========= strdup ==========\n\n");

	char	str31[] = "This is a string";
	char	str32[] = "This is a string";

	printf("sistema --> El strdup del sistema devuelve %s\n", strdup(str31));
	printf("ft_strdup --> Mi funcion devuelve %s\n\n", ft_strdup(str32));

	printf("========= substr ==========\n\n");

	char str33[] = "0123456789";
	unsigned int	st = 0;
	size_t	lng = 0;

	printf("El nuevo string pasando %s y queriendo empezar por %d hasta %zu es %s \n\n", str33, st, lng, ft_substr(str33, st, lng));

	printf("========= strjoin ==========\n\n");

	char str34[] = "0123";
	char str35[] = "4567";

	printf("El string resultante de %s + %s es %s", str34, str35, ft_strjoin(str34, str35));

	printf("========= strtrim ==========\n\n");

	char	str36[] = "   \n\n  \t \t zz  This is the long string \n \n\t  zz   ";
	char	str37[] = "\n \t z";

	printf("El string largo es -->%s<-- quiero encontrar -->%s<-- y el resultado de ft_strtrim es -->%s<-- \n\n", str36, str37, ft_strtrim(str36, str37));

	printf("========= ft_split ==========\n\n");

	char	str39[] = "This is the string to split";
	char	str40 = ' ';
	char	**splitted = ft_split(str39, str40);

	while (*splitted != NULL)
		printf("%s\n", *splitted++);
	printf("\n");

	printf("========= ft_itoa ==========\n\n");	

	int	n = 456;

	printf("El valor de mi itoa pasando %d es %s\n\n", n, ft_itoa(n));

	printf("========= ft_strmapi ==========\n\n");

	char str_1[] = "abcdefghijk";
	char* str_2;
	printf("El resultado de mi ft_strmapi_fd es \n\n");
	str_2 = ft_strmapi(str_1, *f_mapi);
	printf("%s", str_2);
	printf("\n\n");

	printf("========= ft_striteri ==========\n\n");

	char	str_3[] = "abcdefg";
	printf("El resultado de mi ft_striteri_fd es \n\n");
	ft_striteri(str_3, f_stri);
	printf("\n\n");
	

	printf("========= ft_putchar_fd ==========\n\n");

	char	str41 = 'h';

	printf("el resultdo de ft_putchar_fd es:\n\n");
	ft_putchar_fd(str41, 1);
	printf("\n\n");

	printf("========= ft_putstr_fd ==========\n\n");

	char	str42[] = "hello world";

	printf("el resultdo de ft_putstr_fd es:\n\n");
	ft_putstr_fd(str42, 1);
	printf("\n\n");

	printf("========= ft_putendl_fd ==========\n\n");

	char	str43[] = "hello world with new line";

	printf("el resultdo de ft_putendl_fd es:\n\n");
	ft_putendl_fd(str43, 1);
	printf("\n");

	printf("========= ft_putnbr_fd ==========\n\n");

	int	num2 = -567894661;

	printf("el resultdo de ft_putnbr_fd es:\n\n");
	ft_putnbr_fd(num2, 1);
	printf("\n\n");

	printf("========= ft_lstnew ==========\n\n");

	char	str44[] = "soy un string";
	printf("El resultado de mi lista es -->  %s\n\n", (char *)ft_lstnew(str44)->content);

	printf("========= ft_lstadd_front ==========\n\n");

	t_list *ptr_lst;

	t_list lista_1;
	
	lista_1.content = "hello";
	lista_1.next = NULL;

	ptr_lst = &lista_1;

	t_list	lista_2;

	lista_2.content = "world";
	lista_2.next = NULL;

	printf("El resultado de mi lista antes de lstadd es %s \n", ptr_lst->content);

	ft_lstadd_front(&ptr_lst, &lista_2);

	printf("El resultado de mi despues de lstadd lista es %s \n", ptr_lst->content);

	printf("========= ft_lstsize ==========\n\n");

	t_list *ptr_lst_2;
	t_list lista_3;
	t_list lista_4;
	t_list lista_5;

	ptr_lst_2 = &lista_3;
	lista_3.next = &lista_4;
	lista_4.next = &lista_5;
	lista_5.next = NULL; //0

	printf("Mi lista anidada tiene tiene una longitud de %d\n", ft_lstsize(ptr_lst_2));

	printf("========= ft_lstlast ==========\n\n");

	t_list *ptr_lst_3;
	t_list lista_6;
	t_list lista_7;
	t_list lista_8;

	ptr_lst_3 = &lista_6;
	lista_6.next = &lista_7;
	lista_7.next = &lista_8;
	lista_8.content = "last";
	lista_8.next = NULL;

	printf("El ultimo item de mi lista anidada es %s\n", (char *)ft_lstlast(ptr_lst_3)->content);

	printf("========= ft_lstadd_back ==========\n\n");

	t_list *ptr_lst_4;

	t_list lista_9;
	t_list lista_10;
	t_list lista_11;
	t_list lista_12; //Nuevo elemento

	ptr_lst_4 = &lista_9;
	lista_9.next = &lista_10;
	lista_10.next = &lista_11;
	
	lista_9.content = "first";
	lista_10.content = "second";
	lista_11.content = "third";
	lista_11.next = NULL;
	lista_12.content = "needs to be latest";
	
	
	printf("El contenido de mi ultimo elemento de mi lista antes de lstadd_back es %s \n", ptr_lst_4->next->next->content);

	ft_lstadd_back(&ptr_lst_4, &lista_12);

    printf("El resultado de mi despues de lstadd lista es %s \n", ptr_lst_4->next->next->next->content);

	printf("========= ft_lstdelone ==========\n\n");

	char	str45[] = "first";
	char	str46[] = "second";
	char	str47[] = "third";

	
	t_list	*lista_16 = ft_lstnew(&str45);	
	t_list	*lista_17 = ft_lstnew(&str46);
	t_list	*lista_18 = ft_lstnew(&str47);


	ft_lstadd_back(&lista_16, lista_17);
	ft_lstadd_back(&lista_16, lista_18);
	printf("la longitud de mi lista es %d y el contenido del elemento a eliminar es  %s \n\n", ft_lstsize(lista_16), lista_16->next->next->content);
	
	ft_lstdelone(lista_18, ft_delone);
	lista_17->next = NULL;

	printf("la longitud de mi lista es %d y su contenido del elemento a eliminar es %s \n\n", ft_lstsize(lista_16), lista_16->next->content);

	printf("========= ft_lstclear ==========\n\n");

	char	str48[] = "first";
	char	str49[] = "second";
	char	str50[] = "third";

	t_list *lista_19 = ft_lstnew(&str48);
	t_list *lista_20 = ft_lstnew(&str49);
	t_list *lista_21 = ft_lstnew(&str50);


	ft_lstadd_back(&lista_19, lista_20);
	ft_lstadd_back(&lista_19, lista_21);

	//printf("la longitud de mi lista es %d y el contenido del elemento a eliminar es  %s \n\n", ft_lstsize(ptr_lst_5), lista_19->next->next->content);

	ft_lstclear(&lista_19, ft_clear);

	printf("========= ft_lstiter ==========\n\n");

	char	str51[] = "first";
	char	str52[] = "second";
	char	str53[] = "third";
	char	str54[] = "last";

	t_list *lista_22 = ft_lstnew(&str51);
	t_list *lista_23 = ft_lstnew(&str52);
	t_list *lista_24 = ft_lstnew(&str53);
	t_list *lista_25 = ft_lstnew(&str54);


	ft_lstadd_back(&lista_22, lista_23);
	ft_lstadd_back(&lista_22, lista_24);
	ft_lstadd_back(&lista_22, lista_25);

	ft_lstiter(lista_22, ft_iter);
	

	return (0);
}
