=begin

                            Online Ruby Compiler.
                Code, Compile, Run and Debug Ruby script online.
Write your code in this editor and press "Run" button to execute it.

=end

student = {
    "tel" => 70,
    "eng" => 97
}
#puts student["eng"]
sum=0
student.each { |key,value| 
  sum+=value
}
puts "total:"+sum.to_s