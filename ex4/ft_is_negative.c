#include <unistd.h>

void ft_is_negative(int n);

int main(){
	int n;
	n = -1;
	
	ft_is_negative(n);
	return 0;
}
void ft_is_negative(int n){
	char result;
	if(n < 0)
		result = 'N';
	else
		result = 'P';

	write(1, &result, 1);
}
