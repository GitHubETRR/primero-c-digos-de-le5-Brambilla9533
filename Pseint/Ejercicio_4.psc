Algoritmo Ejercicio_4
	Escribir "Voy a calcular la impedancia que vos quieras"
	Escribir 'ingrese parte real de la impedancia'
	Leer R
	Escribir 'ingrese parte imaginaria de la impedancia'
	Leer X
	Escribir 'ingrese la frecuencia en Hz:'
	Leer f
	Escribir 'la resistencia R es: ', R, ' ohms'
	Si X>0 Entonces
		L <- X/(2*PI*f)
		Escribir 'la impedancia es inductiva'
		Escribir 'el valor del inductor L es de: ', L, ' henrios'
	SiNo
		Si X<0 Entonces
			C <- -1/(2*PI*f*X)
			Escribir 'la impedancia es capacitiva'
			Escribir 'el valor del capacitor C es de: ', C, ' faradios'
		SiNo
			Escribir 'solo hay resistencia en el circuito'
		FinSi
	FinSi
FinAlgoritmo
