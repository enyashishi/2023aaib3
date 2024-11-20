#week11-2.py LeedCode 2461
nums = [1,1,1,2,3]

from collections import Counter
counter = Counter()
for num in nums:
  counter[num] += 1

print(counter)