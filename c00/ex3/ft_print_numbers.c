#include <unistd.h>

void ft_print_numbers(void);

int main() {
	ft_print_numbers();
	return 0;
}

void ft_print_numbers(){
	char c = '1';

	while(c <= '9'){
		write(1, &c, 1);
		c++;
	}
}
