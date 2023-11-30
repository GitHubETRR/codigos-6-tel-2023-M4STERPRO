temperatura = float(input("Ingrese la temperatura: "))
escala = input("La unidad es Celsius(C) o Fahrenheit(F)?: ")

if escala.upper() == 'F':
    celcius = (temperatura * 9/5) + 32
    print(f"{temperatura} grados Fahrenheit son {celcius} grados Celsius.")
elif unidad.upper() == 'C':
    fahrenheit = (temperatura - 32) * 5/9
    print(f"{temperatura} grados Celsius son {fahrenheit} grados Fahrenheit.") 
else:
    print("La escala es incorrecta, use C o F.")
