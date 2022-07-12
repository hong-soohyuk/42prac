#include <unistd.h>

void ft_putchar(char c);

int main () {
	ft_putchar('a');
	return 0;
}
void ft_putchar(char c){
	write(1, &c, 1);
	// file descriptor, *buffer, count_bytes
	// fd 0: std input, 1 : std output, 2, std error
} 
