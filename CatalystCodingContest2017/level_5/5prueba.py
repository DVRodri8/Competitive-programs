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

def nearest_city(lista_ciudades, inicio, posibles):
	marca = 0
	for i,name_city in enumerate(posibles):
		city = locate_ciudad(lista_ciudades, name_city)
		d = distancia(city, inicio)
		if d < marca or i == 0:
			marca = d
			ciudad_ganadora = [city, i]
	return ciudad_ganadora 

fichero = open('level5-4.txt', 'r')
lectura = fichero.read()
lectura = lectura.split('\n')
lectura.remove('')
ultima_linea = lectura.pop()
tramo_hlp = ultima_linea.split(' ')
tramo_hlp.pop(0)
num = int(lectura.pop(0))
lista_ciudades = []
for i in range(num):
	lista_ciudades.append(lectura.pop(0).split(' '))

viaje = lectura.pop(0)
viaje = viaje.split(' ')
inicio = locate_ciudad(lista_ciudades, viaje[0])
fin = locate_ciudad(lista_ciudades, viaje[1])
del viaje

cercana = nearest_city(lista_ciudades, inicio, tramo_hlp)
mejor_direccion = nearest_city(lista_ciudades, fin, tramo_hlp)
time = tiempo_en_coche(distancia(cercana[0], inicio))

a_recorrer = list(range(min(cercana[1],mejor_direccion[1]),max(cercana[1],mejor_direccion[1])+1 ))
tam = len(a_recorrer)
for i, cit in enumerate(a_recorrer):
	if i < tam-1:
		time += tiempo_en_hyperloop(distancia(locate_ciudad(lista_ciudades,tramo_hlp[cit]), locate_ciudad(lista_ciudades,tramo_hlp[cit+1])))
time += tiempo_en_coche(distancia(mejor_direccion[0], fin))

print(round(time))