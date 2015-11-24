for num in 1..100
  buffer = ''

  buffer += "Fizz" if num % 3 == 0
  buffer += "Buzz" if num % 5 == 0

  if buffer.length > 0
    puts buffer
  else
    puts num
  end
end
