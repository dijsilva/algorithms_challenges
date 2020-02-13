#1234
while True:
    try:
        sentence = str(input())
        final_sentence = ''
        last = 'lower'
        for letter in sentence:
            if (letter != ' '):
                if last == 'lower':
                    final_sentence += letter.upper()
                    last = 'upper'
                else:
                    final_sentence += letter.lower()
                    last = 'lower'
            else:
                final_sentence += ' '

        print(final_sentence) 
    except EOFError:
        break
