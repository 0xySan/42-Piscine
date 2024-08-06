#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
	write(1,&c,1);
}

int main(){
	char test = 'a';
	ft_putchar(test);
	return 0;
}
