nums = [1,1,1,2,2,3]

def remove_duplicates(nums)
  hash = Hash.new {0}
  nums.each{|v| hash[v] = hash[v] + 1}
  nums2 = []
  hash.each{|key,val| if val>=2
    2.times do
       nums2 << key
    end
  else nums2 << key
  end}
  nums.replace(nums2)
  nums.length
end

puts remove_duplicates(nums)
