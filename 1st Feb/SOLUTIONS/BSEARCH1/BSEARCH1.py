# Author: vinh.nguyenphu
n, m = list(map(int, input().split()))
array1 = list(map(int, input().split()))
array2 = list(map(int, input().split()))

import bisect
res = ""

   
import bisect
  
def binary_search_bisect(arr, x):
    i = bisect.bisect_left(arr, x)
    if i != len(arr) and arr[i] == x:
        return "1"
    else:
        return "0"
    
for num in array2:
    res += binary_search_bisect(array1, num)
print(res)