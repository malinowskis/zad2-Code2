#include "prostokat.h"
#include "prostopadloscian.h"

int main(int argc, char *argv[]){
	float a=atoi(argv[1]);
	float b=atoi(argv[2]);
	float c=atoi(argv[3]);

	if(c==0){
		prostokatPole(a,b);
	}
	else{
		prostopadloscianObjetosc(a,b,c);
	}
	
	return 0;
}