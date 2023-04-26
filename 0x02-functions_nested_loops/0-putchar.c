/* main function - print a string */

int main(void){
	char str[] = {'S', 't', 'r', 'i', 'n', 'g', '\0'};
	int i = 0;
    
    // looping till the null character is encountered
    while(str[i] != '\0')
    {
        putchar("%c", str[i]);
        i++;
    }
	return 0;
}
