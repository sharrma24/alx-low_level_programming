global   main
	  extern
print f
main:  eax, eax
	  call  printf
	  mov   eax, 0
	  ret  mov   edi, format
	  xor
format: db `Hello, Holberton\n`,0
