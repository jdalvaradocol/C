Algoritmo edad_persona
	
	Definir dd_nacimiento, mm_nacimiento , aaaa_nacimiento Como Entero
	Definir aaaa_actual, mm_actual , dd_actual Como Entero
	Definir aaa_edad, mm_edad, dd_edad Como Entero
	
	Escribir "Ingrese el dia de nacimiento"
	Leer dd_nacimiento
	
	Escribir "Ingrese el mes de nacimiento"
	Leer mm_nacimiento
	
	Escribir "Ingrese el año de nacimiento"
	Leer aaaa_nacimiento
	
	Escribir "Fecha nacimiento = " dd_nacimiento "/" mm_nacimiento "/" aaaa_nacimiento 
	
	aaaa_actual = 2024
	mm_actual 	= 	 2
	dd_actual 	= 	26
	
	aaa_edad 	= aaaa_actual - aaaa_nacimiento
	mm_edad		= mm_actual - mm_nacimiento
	
	Si mm_edad < 0 Entonces
		aaa_edad = aaa_edad - 1
		mm_edad = mm_edad * (-1)
	SiNo
		aaa_edad = aaa_edad 
		mm_edad = mm_edad 	
	Fin Si
	
	Escribir "Edad de la persona = Años " aaa_edad " meses =" mm_edad 

FinAlgoritmo
