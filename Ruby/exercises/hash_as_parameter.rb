# According to LaunchSchool you can use an empty hash as an option parameter in methods

def greeting(name, options = {})
  if options.empty?
    puts "Hi, my name is #{name}."
  else
    puts "Hi my name is #{name}. I am #{options[:age]} years old and I'm from #{options[:place]}.
    My favorite food is #{options[:food]}."
  end
end

greeting('Emporer Shaddam Corinno IV')
greeting('Paul Atreides', { age: 22, place: 'the Planet Kaladan', food: 'the spice melange'})
greeting('Aragorn, son of Arathorn', age: 348, place: 'Minas Tirith, City of Kings', food: 'lambas bread')
