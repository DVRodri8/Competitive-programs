def distancia(ciu_A, ciu_B):
	restaX = int(ciu_A[1]) - int(ciu_B[1])
	restaY = int(ciu_A[2]) - int(ciu_B[2])
	dis = (restaX*restaX + restaY*restaY)**0.5
	return dis

def tiempo_en_coche(distancia):
	return distancia/15.0
	
def tiempo_en_hyperloop(distancia):
	return distancia/250.0 +200

def locate_ciudad(lista_ciudades, ciudad):
	for c in lista_ciudades:
		if ciudad == c[0]:
			return c
def algoritmo(ciudad_1,ciudad_2,ciudad_3,ciudad_4):
	
	distancia_1 = distancia(ciudad_1, ciudad_3)
	distancia_2 = distancia(ciudad_1, ciudad_4)

	minimo = min(distancia_1, distancia_2)
	maximo = max(distancia_1, distancia_2)

	if minimo ==distancia_1:
		ciudad_coche_2=ciudad_4
	else:
		ciudad_coche_2=ciudad_3	

	del distancia_1
	del distancia_2

	t1 = tiempo_en_coche(minimo)
	t2 = tiempo_en_hyperloop(distancia(ciudad_3, ciudad_4))
	t3 = tiempo_en_coche(distancia(ciudad_coche_2, ciudad_2))

	time = round(t1+t2+t3)
	return time
	
fichero = open('level4-4.txt', 'r')
lectura = fichero.read()
lectura = lectura.split('\n')
lectura.remove('')
ultima_linea = int(lectura.pop())
num = int(lectura.pop(0))
lista_ciudades = []
for i in range(num):
	lista_ciudades.append(lectura.pop(0).split(' '))

num = int(lectura.pop(0))
lista_datos = []
for i in range(num):
	lista_datos.append(lectura.pop(0).split(' '))

contador = 0
flag = True
for posible_ciudad in lista_ciudades:
	if flag:
		for ciudad_posible in lista_ciudades:
			if ciudad_posible == posible_ciudad: continue
			for ciu in lista_datos:
				ciudad_1 = locate_ciudad(lista_ciudades , ciu[0])
				ciudad_2 = locate_ciudad(lista_ciudades , ciu[1])
				ciudad_3 = posible_ciudad
				ciudad_4 = ciudad_posible

				time = algoritmo(ciudad_1,ciudad_2,ciudad_3,ciudad_4)
				if time < int(ciu[2]): contador += 1
			if contador == int(ultima_linea): 
				print(ciudad_3[0], ciudad_4[0])
				flag = False
			else: contador = 0 
