import sys

contador = 0

for line in sys.stdin:
	Salida = ""
	s = line
	for letra in line:
		if letra == '"':
			if contador % 2 == 0:
				Salida += '``'
				contador += 1
			else:
				Salida += "''"
				contador += 1
		else:
			Salida += letra

	print(Salida, end='')