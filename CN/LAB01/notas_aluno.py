# ===== Computação Numérica =====
# Laboratório 01
# introdução ao python.ipynb
# Notas do aluno
# nota > 3 em todas a unidades
# media >= 5

n1=float(input())
n2=float(input())
n3=float(input())

# Mensagens
m_aluno=("Média do aluno: ")
n_menor=("Aluno tirou nota inferior a 3 em uma das unidades.")
rec=("Aluno em recuperação.")
apm=("Aluno aprovado por média.")
rpm=("Aluno reprovado por média.")

media=round(float((n1 + n2 + n3)/3), 1)

if(media>=5 and media<7):
    if((n1 and n2 and n3) > 3):
        print(m_aluno + str(media))
        print(apm)
    else:
        print(n_menor)
        print(rec)
        
elif(media>=7):
    print(m_aluno + str(media))
    print(apm)
    
else:
    if(media<=5):
        print(m_aluno + str(media))
        print(rec)
        
    else:
        print(m_aluno + str(media))
        print(rpm)
        
        


