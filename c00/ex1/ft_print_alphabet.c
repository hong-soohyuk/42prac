#include <unistd.h>

void ft_print_alphabet(void);

int main () {
	ft_print_alphabet();
	return 0;
}

void ft_print_alphabet(){
	char c;
	c = 'a';

	while(c <= 'z'){
		write(1, &c, 1);
		c++;
	}
}
