# Hash Tables

## A fuction  that creates a hash table
	* To run it 
		* $  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a
		* $./a
	* to check the memory usage
		* valgrind ./a
## A fuction implementing the djb2 algorithm
 	* to run it
 		* $gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-djb2.c -o b
 		* $./b

## a function that gives you the index of a key.
	* to run it
		* $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 1-djb2.c 2-key_index.c -o c
		* $./c
## a function that adds an element to the hash table.
	 * to run it
	 	* $gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c -o d
	 	* $./d
## a function that retrieves a value associated with a key.
	* to run it
		* gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c -o e
		* $./e
##  a function that prints a hash table.
	* $gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c -o f
	* $./f 
##  a function that deletes a hash table.

	* To run it
		* $gcc -Wall -pedantic -Werror -Wextra 6-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c -o g
		* $./g

## Hash tables in php are sorted ???/
	* gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-sorted_hash_table.c 1-djb2.c 2-key_index.c -o sht  