#include <stdio.h>


int compararCadenas(char *cadenita1, char *cadenita2){
    while (*cadenita1 && *cadenita2 )
    
    {
    	if (*cadenita1 != *cadenita2) {
            return 0;  // Si los caracteres son diferentes, las cadenas no son iguales
        }
        cadenita1++;
        cadenita2++;
    }
    
    
    if (*cadenita1 == *cadenita2) {
        return 1;  
    } else {
        return 0;  // Si la cadenita es más larga que la otra, no son iguales.
    }
	
	
}




int main(){
 
    char cadenita1[] = "Hola";
    char cadenita2[]= "Hola";
    
    
	int Producto = compararCadenas( cadenita1, cadenita2);
	printf ("El resultado de las cadenas es : %d\n", Producto);
	
	return 0;
	
	
}