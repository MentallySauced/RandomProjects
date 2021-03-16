.globl main

.data
buffer: .space 400

.text
main:
	la s6, buffer # Sets base address of array A[] to s6
	la s7, buffer # Sets base address of array B[] to s7
	li t0, 0 # sets i = 0
	li t1, 1 # sets j = 1
	li t2, 99 # upper loop constraint for the 2nd loop
	
	li t6, 3 # A mystery mouse-ki-tool that will come in later (2nd loop)
	li t4, 100 # For loop constraint
	
loop: bge t0, t4, reset # once i(t0) is equal or greater than 100(t4), exit the loop
	slli a1, t0, 2 # calculating the shift for A[i]
	add a2, s6, a1 # a2 now has A[i]
	
	li a7, 41 # Makes the random values
	ecall
	sw a0, (a2) # Stores the random values into a2
	
	addi t0, t0, 1 # Looping nonsense
	beq zero, zero, loop # ^
reset:
	add t0, zero, zero # Resets i to zero

loop2: bge t1, t2, exit # once i(t0) is equal or greater than 100(t4), exit the loop

	lw a4, (a2) # Loads A[i] into a4
	lw a5, -4(a2) # Loads A[i-1] into a5
	add a4, a4, a5 # a4 now has A[i] + A[i-1]
	lw a6, 4(a2) # Loads A[i+1] into a6
	add a4, a4, a6 # a4 now has A[i-1] + A[i] + A[i+1]
	div t5, a4, t6 # t5 now has (A[i-1] + A[i] + A[i+1]) / 3
	
	add a3, s7, a1 # a3 now has B[i]
	sw t5, (a3) # stores the value of A[i-1] + A[i] + A[i+1] / 3(t5) to B[i](a3)
	
	
	addi t1, t1, 1 # Looping nonsense
	beq zero, zero, loop2 # ^
exit:
