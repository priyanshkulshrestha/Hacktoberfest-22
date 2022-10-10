#CodeChef - Maximum Production
t=int(input())
for i in range(t):
    dxyz = list(map(int, input().split()))
    print(max(dxyz[1]*7, dxyz[2]*dxyz[0]+dxyz[3]*(7-dxyz[0])))