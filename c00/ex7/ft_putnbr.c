#include <unistd.h>

void ft_putnbr(int nb);
int digit(int a);
void print_output(char num[], int j);
void print_letter(char c);

int main(){
	ft_putnbr(42);
	ft_putnbr(-2147483648);

	return 0;
}

void ft_putnbr(int nb){
	int i, j;

	char num[12];

	if(nb == -2147483648){
		print_letter('-');
		ft_putnbr(214748364);
		print_letter('8');
	//	write(1, "-2147483648", 11);
		return;
	}else if(nb == 0){
		print_letter('0');
	}else if(nb < 0){
		nb *= -1;
		print_letter('-');
	}

	i = digit(nb)-1;
	j = digit(nb)-1;

	while(i >= 0){
		num[i] = nb % 10;
		nb /= 10;
		i--;
	}
	print_output(num, j);
}
int digit(int a){
int digit = 0;
	if(a == 0) digit++;
	while(a > 0){
		a = a / 10;
		digit++;
	}
	return digit;
}

void print_output(char num[], int j){
	int i;
	i = 0;

	while(i <= j){
		print_letter(num[i] + '0');
		i++;
	}	
}
void print_letter(char c){
	write(1, &c, 1);
}
