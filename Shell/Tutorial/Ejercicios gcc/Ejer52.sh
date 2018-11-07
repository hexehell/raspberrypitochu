#!/bin/sh
echo "Calcular volumen de esfera "
echo "Radio "

read nRad

PI=3.1416

echo $PI \* 4 \/ 3  \*$nRad\*$nRad\*$nRad| bc -l
 