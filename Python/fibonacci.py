num_of_terms = 20

# use an iterative appraoch to run the fibonacci sequence
# so the sequence needs to add the previous two terms to get the following term

sequence = [0, 1]

while not len(sequence) == num_of_terms:
    i = 1
    for i in sequence:
        next_term = sequence[i - 1] + sequence[i - 2]
        sequence.append(next_term)
        break

for term in sequence:
    print(term, end=' ')

print('\n')

