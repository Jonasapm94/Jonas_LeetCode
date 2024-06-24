nums = [1,5,-2,-4,3,7, 3, 10, 1]

val = 3

def remove_element(nums, val)
   nums.delete(val)
   return nums.length

end

puts nums.length

remove_element(nums, val)

puts nums.length
