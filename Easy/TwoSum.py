'''
  @author Ines Cabrera Betancor
  @date 07 NOV 2025
  @brief Given an array of integers and a target, return indices of the two numbers such as
  that they add up to the value of target. We assume that each input has exactly one solution
'''

def twoSum(nums, target):
  hashMap = {} # value -> index
  for i, num in enumerate(nums):
    complement = target - num
    if complement in hashMap:
      return [hashMap[complement], i]
    hashMap[num] = i

print("Testing TwoSum problem.\nInput: nums = [2, 7, 11, 15], target = 9.")
print("Result -> ", twoSum([2,7,11,15], 9))