// Operadores condicionales
// = igual
// <> diferente
// > mayor
// < menor
// <= menor o igual
// >= mayor o igual

//  Operadores logicos
//  A  			Y	B   		= 	X
//  Falso 			Falso 		= Falso
//  Falso 			Verdadero 	= Falso
//  Verdadero 		Falso 		= Falso
//  Verdadero 		Verdadero 	= Verdadero

//  A  			O	B   		= 	X
//  Falso 			Falso 		= Falso
//  Falso 			Verdadero 	= Verdadero
//  Verdadero 		Falso 		= Verdadero
//  Verdadero 		Verdadero 	= Verdadero

Algoritmo condicionales
	Definir categoria Como Entero
	Definir num_ejes Como Entero
	Definir valor Como Entero
	Escribir 'Ingrese la categoria del vehiculo'
	Leer categoria
	Escribir 'Ingrese el numero de ejes del vehiculo'
	Leer num_ejes
	
	si (categoria) <= 3 Y (num_ejes > 0) Entonces
		
		
		
	FinSi
	
	Si num_ejes <= 0 Entonces
		
		Si categoria=1 Entonces
			Escribir 'El vehiculo debe pagar $ 10.800'
		SiNo
			Si categoria=2 Entonces
				Escribir 'El vehiculo debe pagar $ 16.900'
			SiNo
				Si categoria=3 Entonces
					Escribir 'El vehiculo debe pagar $ 28.400'
				FinSi
			FinSi
		FinSi
		
	SiNo
		
		Si num_ejes=1 Entonces
			Escribir 'El vehiculo categoria IV debe pagar $ 41.800'
		SiNo
			Si num_ejes=2 Entonces
				Escribir 'El vehiculo categoria V debe pagar $ 57.300'
			SiNo
				Si num_ejes>=3 Entonces
					valor <- 57600+2200*(3-num_ejes)
					Escribir 'El vehiculo categoria VI debe pagar $', valor
				FinSi
			FinSi
		FinSi
		
	FinSi
	
	


FinAlgoritmo
