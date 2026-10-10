/* Pushpita Chakravorty, 400628313, 2026-10-09 
*This program creates the command line utility named gr and lets users interact with it by using command line flags.
*The flags can be used to greet the world or the user by their name formally or informally. 
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main(int argc, char *argv[]){
	/*defining arguments for users to put in the command line	
	* argc counts all the arguments entered in the command line
	* argv stores and lists the arguments
	*/

	if (argc == 1){
		puts("Usage: gr [-w] [-n <first>] [-n <first last>] [-n <title first last>]");
		puts("Try 'gr --help' for more information.");
		return EXIT_FAILURE; 
	}
}
