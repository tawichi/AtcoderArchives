n = int(input())
string_list=[input() for i in range(n)]

AC=string_list.count('AC')
WA=string_list.count('WA')
TLE=string_list.count('TLE')
RE=string_list.count('RE')
print('AC x '+str(AC))
print('WA x '+str(WA))
print('TLE x '+str(TLE))
print('RE x '+str(RE))