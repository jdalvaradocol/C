
Algoritmo tabla
	
	Definir dato 				Como Entero
	Definir indice_columnas		Como Entero
	Definir indice_filas 		Como Entero
	
	dato <- 0
	
	Repetir
		Escribir  "Ingrese el numero de la tabla que desea relizar"
		Leer dato
	Hasta Que (dato > 0) Y (dato < 50)
	
	
	Para indice_columnas<-1 Hasta dato Con Paso 1 Hacer
	
		Para indice_filas<-1 Hasta indice_columnas Con Paso 1 Hacer
		
			//Escribir  "[" indice_columnas "," indice_filas "]"  
			Escribir "*" Sin Saltar
			
		Fin Para
		
		Escribir "" 

	Fin Para
	
FinAlgoritmo
