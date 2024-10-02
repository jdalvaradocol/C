
// Tipos de Datos en PSEINT
// Entero 		(Entero): 		
// Este tipo de dato se utiliza para almacenar números enteros, es decir, números sin parte decimal.
// Real 		(Real): 			
// Se utiliza para almacenar números con parte decimal.
// Carácter 	(Caracter): 	
// Se utiliza para almacenar una secuencia de caracteres, como una palabra o una frase. 
// Lógico 		(Logico): 		
// Se utiliza para almacenar valores booleanos, es decir, Verdadero o Falso. 

// Estructuras basicas

// Escribir Mostrar  mensajes en la pantalla.
// Definir	Declarar variables.	  
// Leer     Leer los datos desde el teclado. 

// Operadores basicos
// + suma
// - resta
// * multiplicacion
// / division
// MOD modulo residuo de la division

// Operadores condicionales
// = igual
// <> diferente
// > mayor
// < menor
// <= menor o igual
// >= mayor o igual

Algoritmo mi_primer_codigo
	
	Definir variable Como Entero
	Definir variable1 Como Entero
	Definir variable2 Como Entero
	Definir variablef Como Real
	
	Escribir "Mi primer pseudocodigo"
	
	Escribir "Ingrese un numero entero"
	Leer  variable1
	Escribir "Ingrese un numero entero"
	Leer variable2
	
	variable <- variable1 + variable2 
	Escribir variable1 " + " variable2 " = " variable
	
	variable <- variable1 - variable2 
	Escribir variable1 " - " variable2 " = " variable
	
	variable <- variable1 * variable2 
	Escribir variable1 " * " variable2 " = " variable
	
	variablef <-  variable1 / variable2 
	Escribir variable1 " / " variable2 " = " variablef
	
	variable <-  trunc(variable1 / variable2) 
	Escribir variable1 " / " variable2 " = " variable
	
	variable <- variable1 MOD variable2 
	Escribir variable1 " MOD " variable2 " = " variable
	
FinAlgoritmo
