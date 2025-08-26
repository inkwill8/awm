family = {
  uncles: ["bob", "joe", "steve"],
  sisters: ["jane", "jill", "beth"],
  brothers: ["frank", "rob", "david"],
  aunts: ["mary", "sally", "susan"]
}

# Gather only siblings' names into a new array

siblings = family.select { |k, v| (k == :sisters) || (k == :brothers)}
puts siblings
puts siblings.values
puts siblings.values.length
