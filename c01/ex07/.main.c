#include <unistd.h>
void ft_rev_int_tab(int *tab, int size);

void ft_print(int *tab, int size){
	char temp;
	int i;
	
	i = 0;
	while (i < size){
		temp = tab[i] + '0';
		write(1, &temp, 1);	
		i++;
	}
}

int main(){
	int tab[6] = {1,2,3,4,5,6};

	ft_rev_int_tab(tab, 6);
	ft_print(tab, 6);
	return 0;
} 

