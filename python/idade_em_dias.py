idade_em_dias = int(input())

anos = 0
meses = 0
dias = 0
anos = idade_em_dias // 365
if anos >= 1:
    idade_em_dias = idade_em_dias - (anos * 365)


meses = idade_em_dias // 30

if meses >= 1:
    idade_em_dias = idade_em_dias - (meses * 30)

dias = idade_em_dias

print("{} ano(s)".format(anos))
print("{} mes(es)".format(meses))
print("{} dia(s)".format(dias))
