nums = [2,2,1,1,1,2,2]

def majority_element(nums)
   hash = Hash.new {0}
   nums.each{|n| hash[n] = hash[n] + 1}
   max = 0
   valor = 0
   hash.each{|key,val|
    if val > max
      max = val
      valor = key
    end
      }
    valor
end

puts majority_element(nums)
