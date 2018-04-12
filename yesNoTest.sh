#! /bin/bash
 
#Adding a yes or no condition to $cript
 
read -r -p "yes or no [y/N]" response #using read ~> then creating variable
case "$response" in     #case in variable response, covers all possibilities of characters.
    [y/Y][e/E][s/S] | [y/N])
        echo "this is yes"      #first condition always "true" or "yes"
        ;;
*)                          #reading if conditon above is !true -> then prints
    echo "this is no"       # the second condition
    ;;
esac  # ending the 'case'
