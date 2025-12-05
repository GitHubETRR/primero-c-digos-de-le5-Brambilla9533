Algoritmo Ejercicio05
	Escribir "Puedo sumar dos impedancias"
	Escribir 'ingrese el modulo de la tension'
	Leer V_mod
	Escribir 'ingrese el angulo de la tension'
	Leer V_ang
	Escribir 'ingrese el modulo de la corriente'
	Leer I_mod
	Escribir 'ingrese el angulo de la corriente'
	Leer I_ang
	Escribir 'ingrese la frecuencia en Hz:'
	Leer f
	V_ang <- V_ang*PI/180
	I_ang <- I_ang*PI/180
	V_real <- V_mod*cos(V_ang)
	V_imag <- V_mod*sen(V_ang)
	I_real <- I_mod*cos(I_ang)
	I_imag <- I_mod*sen(I_ang)
	Definir conj Como Real
	conj <- I_real^2+I_imag^2
	Z_real <- (V_real*I_real+V_imag*I_imag)/conj
	Z_imag <- (V_imag*I_real-V_real*I_imag)/conj
	R <- Z_real
	X <- Z_imag
	Escribir 'la impedancia Z es de: ', R, ' + j', X
	Escribir 'la resistencia R es de: ', R, ' ohms'
	Si X>0 Entonces
		L <- X/(2*PI*f)
		Escribir 'el circuito tiene reactancia inductiva que vale: ', X
		Escribir 'el inductor vale: ', L, ' henrios'
	SiNo
		Si X<0 Entonces
			C <- -1/(2*PI*f*X)
			Escribir 'el circuito tiene reactancia capacitiva que vale: ', X
			Escribir 'el capacitor vale: ', C, ' faradios'
		SiNo
			Escribir 'el circuito solo es resistivo'
		FinSi
	FinSi
FinAlgoritmo
