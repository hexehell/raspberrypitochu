#!/bin/sh
echo "Calcular Perimentro Rect"
echo "Largo "

read nLargo

echo "Ancho "

read nAncho


echo 2\*\($nLargo+$nAncho\)| bc -l
 