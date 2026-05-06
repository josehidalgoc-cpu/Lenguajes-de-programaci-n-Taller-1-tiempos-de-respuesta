import time

inicio_reloj = time.time()
suma = 0

for i in range (10):
    numero = int(input("Ingresa un numero: "))
    suma += numero

promedio = suma / 10

print ("Suma: ", suma)
print ("Promedio: ", promedio)

fin_reloj = time.time()
tiempo_total = fin_reloj - inicio_reloj
print ("Tiempo total: ", tiempo_total)