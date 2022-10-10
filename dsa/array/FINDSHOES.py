# CodeCHef - Finding Shoes

T = int(input())
for i in range(T):
    N, M = map(int, input().split())
    if (M <= N):
        print(N*2 - M)
    else:
        print(N)