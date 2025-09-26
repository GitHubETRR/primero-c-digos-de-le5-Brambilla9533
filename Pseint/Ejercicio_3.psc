Algoritmo Ejercicio_3
	Escribir 'Ingrese el modulo real'
	Leer R1
	Escribir 'Ingrese el modulo imaginario'
	Leer Imaginario1
	Escribir 'Ingrese otro modulo real'
	Leer R2
	Escribir 'Escriba otro modulo imaginario'
	Leer Imaginario2
	Escribir 'Escriba 1 si quieres que el resultado se vea en polar y cualquier otra cosa si lo quiere en cartesiana'
	Leer Respuesta
	Si Respuesta=1 Entonces
		R <- R1+R2
		Imaginario <- Imaginario1+Imaginario2
		k <- Raiz(R^2+Imaginario^2)
		Si R<0 Entonces
			Si Imaginario<0 Entonces
				Angulo <- Atan(R/Imaginario)
			SiNo
				Angulo <- Atan(Imaginario/R)
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
					Angulo <- Atan(R/Imaginario)
				SiNo
					Angulo <- Atan(Imaginario/R)
				FinSi
			FinSi
		FinSi
		Angulofinal <- Angulo*180/PI
		Escribir 'Tu modulo es ', k, ' y tu Angulo es ', Angulofinal
	SiNo
		R <- R1+R2
		Imaginario <- Imaginario1+Imaginario2
		Escribir 'Tu modulo real es ', R, ' y tu modulo imaginario es ', Imaginario
	FinSi
FinAlgoritmo
