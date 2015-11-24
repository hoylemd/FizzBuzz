# FizzBuzz
Various FizzBuzz implementations

FizzBuzz is a common programming interview question.  I've done it many, many times, so I'm collecting by best implementaions here.

The problem is generally posed like this:

Write a program that prints all integers between 1 and 100, inclusive.  However, if the number is divisible by 3, print "Fizz" instead.  If the number is divisible by 5, print "Buzz" instead.  If the number is divisible by both, print "FizzBuzz".

It seems straightforward, and to a good programmer it is, but there are a few pitfalls that inexperienced programmers may fall into:

* You might index the numbers incorrectly, printing 0-99 instead of 1-100
* You might use if/else to decide between Fizz and Buzz, missing the FizzBuzz case.
* You might over-engineer the problem

My approach is generally the same: Set up an empty string buffer, check for all Fizz/Buzz/FizzBuzz cases, appending 'Fizz' and/or 'Buzz' to the buffer in separate if statements, so that I don't need an extra 'FizzBuzz' case, and print out the buffer or the number if buffer is empty.

I've also put in some 'generalized' versions. These are definitely overengineered, but they were fun to write.
