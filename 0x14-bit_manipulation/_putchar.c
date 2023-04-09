#include "main.h"
#include <unistd.h>
/**
 * _putchar:writes the character c to stdout
 * return:success 1 and 'c' is the character will be printed
 * error: -1 is returned, errno is set appeopriately
 */

int _putchar(char c){
	return (write(1,&c,1));
}
