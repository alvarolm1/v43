# Laboratorio 1: Toma de contacto con el entorno
El objetivo de esta práctica es que os familiaricéis con las herramientas con las que trabajaremos durante los laboratorios
de la asignatura.

# Tareas
1. Compila y ejecuta el programa matmul.cpp guardando el resultado de ejecución en results/task1/task1.txt. Para realizar la
   compilación utiliza el compilador g++ y añade las opciones del compilador -g, -O0 y -fopenmp. La opción -g añade información de depuración y es recomendable que la uséis siempre
   que vayáis a analizar el rendimiento de un programa con Intel Advisor. La opción -fopenmp enlaza las bibliotecas de OpenMP para programación paralela. La opción -O0 desactiva las optimizaciones por defecto.
2. Realiza un análisis **con los tipos Survey y Characterization (Trip Counts y FLOP)** del programa en tu PC haciendo uso de la interfaz gráfica de Intel Advisor:
    * Una vez realizado el análisis, en la parte de arriba debería observarse un warning con el siguiente mensaje 
    *"Some target modules are not compiled with optmization enabled and with version 15.0 or higher of the Intel compiler"* ¿Qué es lo que indica
      este aviso? ¿Como solucionarías este problema de modo que el warning desaparezca (es posible que no se eliminen todos los warnings)? 
      (**pista**: tiene que ver con el compilador usado, revisa los compiladores que dispones con intel oneAPI, una vez encuentres el
      adecuado será el que **debas usar para todas las prácticas, incluidas las tareas restantes de esta prática**). Guarda los resultados del análisis
      con el warning realizando un snapshot de intel advisor (importante no confundir con una captura de pantalla) con el nombre **warning** en 
      [results/task2](results/task2).
    * Recompila el código con el compilador apropiado. Guarda los resultados del análisis sin el warning realizando un snapshot de intel advisor. 
    Este snapshot se debe subir al repositorio en [results/task2](results/task2) con el nombre **snapshot**.
3. Compara y **analiza** los resultados haciendo énfasis en las medidas de tiempo, rendimiento y memoria
    * El informe se debe subir a la carpeta [results/task3](results/task3) con el nombre comparacion.md
    * El informe tiene que estar en formato markdown
4. Identifica las características clave de los sistemas sobre los que has ejecutado los análisis (procesador, memoria, caché...)
y relaciónalos con los resultados analizados
    * El informe se debe subir a la carpeta [results/task4](results/task4) con el nombre caracteristicas.md

# Participantes
Álvaro López Megía