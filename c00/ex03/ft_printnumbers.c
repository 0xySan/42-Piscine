#include <unistd.h>
#include <stdio.h>

void ft_print_numbers(void){
	for(char digit='0' ; digit<= '9' ; digit++){
		write(1,&digit,1);
	}
}

int main(){
	ft_print_numbers();
	return 0;
}
