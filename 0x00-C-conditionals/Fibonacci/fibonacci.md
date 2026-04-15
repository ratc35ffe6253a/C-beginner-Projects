Step 1: Understand the Problem
    You need the first n Fibonacci numbers.
    Fibonacci starts: 0, 1
    Each next number = sum of previous two
    Must handle the edge cases: n = 1 and n = 2
    Only loops, no recursion
    Output should be clean

Step 2: Plan Variables
Think about what variables you will need. For example:
    first: stores the first number in the pair
    second: stores the second number
    next: stores the sum of the two previous numbers
    count or loop variable: track how many numbers have been printed

Step 3: Think about the loop
    How many times will the loop run?
    What happens inside each iteration?
    How do you update your variables so the sequence progresses?

Step 4: Edge Cases
    if n = 1, print only 0
    if n = 2, print 0 1
    Loop should run only when n > 2




PSEUDO CODE:
START
Initialize n, first, second, next, count
READ n
IF n = 1 THEN:
    PRINT 0
    STOP
ELSEIF n = 2
    PRINT 0 1
    STOP
ENDIF

SET first = 0
SET second = 1
SET count = 2
WHILE count < n DO:
    SET next = first + second
    PRINT next
    first = second
    second = next

    Increment count
ENDWHILE

END
