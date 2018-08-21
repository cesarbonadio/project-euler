#solo sumar y luego agarrar los ultimos 10 num del string

print(str(sum( (i**i) for i in range(1, 1001)))[-10::])	