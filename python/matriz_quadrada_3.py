
list_of_inputs = []
while True:
  user_input = int(input())
  if user_input == 0:
    break
  else:
    list_of_inputs.append(user_input)

for user_input in list_of_inputs:
  spaces = len(str(4 ** (user_input - 1)))
  for value in range(0, user_input):
    if value == 0:
      init = 1
    elif value == 1:
      init = 2
    else:
      init = init * 2
    
    row = [str(init)]
    while len(row) < user_input:
      row.append(str(int(row[-1]) * 2))
    row = [x.rjust(spaces) for x in row]
    print(" ".join(row))
  print("")
