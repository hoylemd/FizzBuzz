for (i = 1; i <= 100; i += 1) {
  buffer = '';

  if (i % 3 == 0) {
    buffer += 'Fizz';
  }

  if (i % 5 == 0) {
    buffer += 'Buzz';
  }

  console.log(buffer || i);
}
