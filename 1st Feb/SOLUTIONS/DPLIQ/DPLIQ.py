# Author: dat.nguyentuan
n= int(input())
nums= list(map(int, input().strip().split(" ")))
dp = [0] * n
dp[0]=1
for i in range(1,n):
    x=0
    for j in range(i):
        if (nums[j]<nums[i]):
            if dp[j]>x:
                x = dp[j]
    dp[i] = x + 1
print(max(dp))