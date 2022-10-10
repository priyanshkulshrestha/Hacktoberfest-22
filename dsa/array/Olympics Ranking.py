#CodeChef - Olympic Ranking
T = int(input())
for i in range(T):
    m = list(map(int, input().split()))
    if sum(m[:3]) > sum(m[3:]):
        print(1)
    else:
        print(2)