#!/usr/bin/env bash



LIMIT=20
i=0

for ((a=1; a <=LIMIT ; a++)) ; do  # c loop
    echo "$a"
done

until [ $i -eq 10 ] ; do # bash until loop
    echo -n $i
    let i=$i+1
done

if [ $LIMIT -eq 20 ] ; then
    echo -n " you hit the limit "
    echo " " #dummy echo for shell run. so [/usrn/@comp] returns to normal postion
fi
