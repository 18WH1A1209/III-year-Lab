=begin

                            Online Ruby Compiler.
                Code, Compile, Run and Debug Ruby script online.
Write your code in this editor and press "Run" button to execute it.

=end
def check(a, b)
    return (a > 100 && b < 0) || (a < 0 && b > 100)
end
    
puts check(-78, 100)