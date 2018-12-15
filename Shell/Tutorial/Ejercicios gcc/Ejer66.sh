echo "Horas Trabajadas?"
read nHorasTrabajadas

echo "Paga x Hora"
read nPagaxHora

if [ $nHorasTrabajadas -gt 40 ]
then

	echo "entra"

	nHorasTrabajadas=$(((40+ ($nHorasTrabajadas - 40)*2)))

fi

echo "La Paga es de: $(($nHorasTrabajadas*$nPagaxHora)) " 
