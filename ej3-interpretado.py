import random

num_sucursales = 25

sucursales = []
ventas = []


for i in range(num_sucursales):
    nombre_sucursal = f"Sucursal {i+1}"
    sucursales.append(nombre_sucursal)

for j in range(num_sucursales):
    numero_aleatorio = random.randint(500, 5000)
    ventas.append(numero_aleatorio)

promedio_ventas = sum(ventas) / num_sucursales

print(f"Promedio de ventas general: ${promedio_ventas:,.2f}")
print("")
print("Sucursales con ventas mayores al promedio:")

for i in range(num_sucursales):
    if ventas[i] > promedio_ventas:
        print(f"{sucursales[i]}: ${ventas[i]:,.2f}")
