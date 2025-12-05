Algoritmo Ejercicio_1
	Escribir 'Ingrese un numero real'
	Leer R
	Escribir 'Ingrese un número Imaginario'
	Leer Imaginario
	K <- Raiz(R^2+Imaginaro^2)
	Si R<0 Entonces
		Si Imaginario<0 Entonces
			Angulo <- Atan(R/Imaginario)*(-1)+90
		SiNo
			Angulo <- Atan(Imaginario/R)+180
		FinSi
	SiNo
		Si R=0 Entonces
			Si Imaginario<0 Entonces
				Angulo <- 270
			SiNo
				Angulo <- 90
			FinSi
		SiNo
			Si Imaginario<0 Entonces
				Angulo <- Atan(R/Imaginario)*(-1)+270
			SiNo
				Angulo <- Atan(Imaginario/R)
			FinSi
		FinSi
	FinSi
	Angulofinal = Angulo*180/PI
	Escribir 'Tu modulo es ', R, ' y tu angulo es ', Angulofinal
FinAlgoritmo
