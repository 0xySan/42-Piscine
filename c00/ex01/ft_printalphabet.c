#include <unistd.h>

void ft_printalphabet(void){
	const char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	for(int i = 0; i<26 ; i++, alphabet++){
		write(1,alphabet,1);
	} 
}

int main(){
	ft_printalphabet();
	return 0;
}
