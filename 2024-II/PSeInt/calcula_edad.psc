Algoritmo calcula_edad
	Escribir "Ingrese año de nacimiento"
	Leer dato_a
	Escribir "Dato del año nacimiento ingresado = " dato_a
	
	Escribir "Ingrese mes de nacimiento"
	Leer dato_mes
	Escribir "Dato del mes nacimiento ingresado = " dato_mes
	
	Escribir "Ingrese dia de nacimiento"
	Leer dato_dia
	Escribir "Dato del dia nacimiento ingresado = " dato_dia
	
	edad = 2024 - dato_a
	
	mes = 02 - dato_mes
	
	dia = 27 - dato_dia
	
	Si mes > 0 Entonces
		edad = edad
	SiNo
		edad = edad - 1
		mes = 12 + mes
	Fin Si
	
	Si dia > 0 Entonces
		mes = mes
	SiNo
		mes = mes - 1
		dia = 30 + dia
	Fin Si
	
	Escribir "Años = " edad " mes = " mes " dia = " dia 

	
	
FinAlgoritmo
