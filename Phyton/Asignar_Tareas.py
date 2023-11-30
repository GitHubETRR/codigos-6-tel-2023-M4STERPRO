print("Bienvenido al programa de asignación de tareas.")

def mostrar_tareas(tareas):
    print("Lista de tareas:")
    for i, tarea in enumerate(tareas, 1):
        print(f"{i}. {tarea}")
        
def gestionar_tareas():
    tareas = []

    while True:
        print("\n1. Añadir tarea")
        print("2. Mostrar tareas")
        print("3. Eliminar tarea")
        print("4. Salir")

        opcion = input("Seleccione una opción (1/2/3/4): ")

        if opcion == '1':
            nueva_tarea = input("Ingrese la nueva tarea: ")
            tareas.append(nueva_tarea)
            print(f"Tarea '{nueva_tarea}' añadida.")
        elif opcion == '2':
            if not tareas:
                print("No figura ninguna tarea en la lista.")
            else:
                mostrar_tareas(tareas)
        elif opcion == '3':
            if not tareas:
                print("No figura ninguna tarea en la lista.")
            else:
                mostrar_tareas(tareas)
                eliminar_tarea = input("Ingrese la tarea a eliminar: ")
                if eliminar_tarea in tareas:
                    tareas.remove(eliminar_tarea)
                    print(f"Tarea '{eliminar_tarea}' eliminada.")
                else:
                    print("La tarea no ha sido encontrada.")
        elif opcion == '4':
            print("Gracias por usar el programa!")
            break
        else:
            print("La opción es inválida, vuelve a intentarlo.")

gestionar_tareas()
