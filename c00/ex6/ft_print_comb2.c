#include <unistd.h>

void ft_print_comb2(void);
void ft_write(int a, int b);
void print_letter(char c);

int main(){
	ft_print_comb2();
	return 0;
}

void ft_print_comb2(){
	int a, b;
	a = 0;
	while(a <= 99){
		b = a + 1;
		//99 99 won't be printed.
		while(b <= 99){
			ft_write(a, b);
			b++;
		}
		a++;
	}
}

void ft_write(int a, int b){
	
	print_letter(48 + (a / 10));
	print_letter(48 + (a % 10));
	print_letter(' ');
	print_letter(48 + (b / 10));
	print_letter(48 + (b % 10));

	if(a + b != 98 + 99){
		print_letter(',');
		print_letter(' ');
	}
}
void print_letter(char c){
	write(1, &c, 1);
}
