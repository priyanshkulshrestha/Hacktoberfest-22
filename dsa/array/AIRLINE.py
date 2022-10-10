#CodeChef - Airline Restrictions

T = int(input())
for i in range(T):
    A, B, C, D, E = map(int, input().split())
    if (A+B <= D and C <= E) or (B+C <= D and A <= E) or (A+C <= D and B <= E):
        print("YES")
    else:
        print("No")