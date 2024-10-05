# Task 2:

-- **Una vez realizado el survey en la parte de arriba debería observarse un warning, ¿Qué es lo que indica este aviso? ¿Como solucionarías este problema de modo que el warning desaparezca?**

El error mostrado es:

![](/home/ubuntu/Desktop/PrácticasArco/higherisa.png)

Lo que causa este error es el compilador que hemos usado (g++):

 `g++ -g -fopenmp -O0 matmul.cpp`
 
 La solución sería utilizar un compilador de Intel, como es:

`{icx|icpx} [options] file1 [file2...]  ` 
