=begin

                            Online Ruby Compiler.
                Code, Compile, Run and Debug Ruby script online.
Write your code in this editor and press "Run" button to execute it.

=end

s = Hash.new 0

s['English'] = 80

s['Social'] = 72

s['Math'] = 95

total_marks = 0

s.each {|key,value|
 total_marks +=value

 } 

puts "Total Marks: "+total_marks.to_s