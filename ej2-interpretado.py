import random

pares = 0
impares = 0

for i in range (500):
    number = random.randint(50,100)
    if number % 2 == 0:
       pares += 1
    else:
       impares += 1

print ("Pares: ", pares)
print ("Impares: ", impares)