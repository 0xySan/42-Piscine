#include <unistd.h>

void ft_print_reverse_alphabet(void){
	char test;
	for(int i=0 ; i<26 ; i++){
		test = 'z'-i;
		write(1,&test,1);
	}
}

int main(){
	ft_print_reverse_alphabet();
	return 0;
}
