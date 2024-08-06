#include <unistd.h>

void ft_is_negative(int n){
	char result;
	if(n>0){
		result = 'P';
		write(1,&result,1);
	}
	else{
		result = 'N';
		write(1,&result,1);
	}
}

void main(){
	ft_is_negative(1);
	ft_is_negative(-25);
	ft_is_negative(10055123);
}
