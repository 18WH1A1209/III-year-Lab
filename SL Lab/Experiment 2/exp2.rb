=begin

                            Online Ruby Compiler.
                Code, Compile, Run and Debug Ruby script online.
Write your code in this editor and press "Run" button to execute it.

=end

#perimeter = 2*pi*r
#area = pi*r^2
puts "Enter the value of radius"
radius = gets.chomp.to_f
perimeter = 2 * 3.14 * radius
area = 3.14 * radius * radius
puts "The perimeter of a circle is #{perimeter}"
puts "The Area of a circle is #{area}"
