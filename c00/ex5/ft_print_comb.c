#include <unistd.h>

void ft_print_comb(void);

int main(){
	ft_print_comb();
	return 0;
}

void ft_print_comb(){
	char arr[5];
	arr[0] = '0';
	arr[3] = ',';
	arr[4] = ' ';
	while(arr[0] <= '6'){
		arr[1] = arr[0] + 1;
		while(arr[1] <= '8'){
			arr[2] = arr[1] + 1;
			while(arr[2] <= '9'){
				write(1, arr, 5);
				arr[2]++;
			}
			arr[1]++;
		}
		arr[0]++;
	}
	write(1, "789", 3);
}
