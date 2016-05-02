# Fdf
This project will create a graphical schematic representation (in " Fil de fer" ) a plot by connecting different points (x, y, z) by segments. The coordinates of the field will be stored in a file passed as parameter.


# Summary
 1. [Makefile](#makefile)
 2. [Usage](#usage)
 3. [Example](#exemple)

# <a name="makefile">Makefile</a>

| Commande       	|  Actions 	|
|----------------	|----------	|
| `make`      	  | Compile all .c and create an executable "fdf"  	|
| `make clean`    | Delete all .o.  	|
| `make flcean`  	| Delete all .o and executable 'fdf'.  	|
| `make re` 	 	| Execute fclean and make.  	|

# <a name="usage">Usage</a>

[42.fdf](https://github.com/eml-trm/fdf/blob/master/42.fdf)

    ./fdf 42.fdf

# <a name="exemple">Example</a>

![fdf](https://github.com/eml-trm/fdf/blob/master/fdf.png?raw=true)
