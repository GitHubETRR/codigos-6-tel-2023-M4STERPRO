import random

def adivina_el_numero():
    while True:
        numsecreto = random.randint(1, 100)
        intentos = 0

        while True:
            num = int(input("Adivina el número (entre 1 y 100): "))
            intentos += 1

            if num == numsecreto:
                print(f"Haz acertado! Tardaste {intentos} intentos.")
                break
            elif num < numsecreto:
                print("El número es bajo, intenta de nuevo.")
            else:
                print("El número es alto, intenta de nuevo.")
    
        rejugar = input("Te interesa adivinar otro número? (s/n): ")
            if rejugar.lower() != 's':
                print("Gracias por jugar! Se finaliza el programa")
                break

adivina_el_numero()
