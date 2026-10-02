# BubblesAndPointers

main():
  input: none
  create array [7, 3, 9, 4, 6, 1, 2, 8, 5]
  print array
  set x = 3 and y = 5
  print x and y
  swap their values using their addresses
  print x and y
  swap their values using their addresses
  print x and y again
  sort array
  print sorted array
  return 0

printValues(values):
  input: integer pointer to array
  print [
  loop through array:
    print each number and a space
  print ] and a new line
  return nothing

swap(a, b):
  input: two integer pointers
  save value at a in temp
  put value at b into a
  put temp into b
  return nothing

sort(values):
  input: integer pointer to array
  repeat 8 times:
    check each neighboring pair:
      if left number > right number:
        swap them using their addresses
        print array
  return nothing
