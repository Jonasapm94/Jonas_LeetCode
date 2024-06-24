nums1 = [1,3,7,8,10,0,0,0,0]
m = 5
nums2 = [3,5,6,7]
n = 4
# puts nums1.length

# nums = nums1.take(m) + nums2
# nums1 = nums.sort

# # puts nums.length

def merge( nums1, m, nums2, n)
  nums = nums1.take(m) + nums2
  nums.sort!
  nums1.replace(nums)
end

merge(nums1, m, nums2, n)

nums1.each{|v| puts v}
