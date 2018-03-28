cell=[]
for i in range(0,9):
     cell.append(str(i+1))

def grid():
    print('\n -----')
    print('|' + cell[0] + '|' + cell[1] + '|' + cell[2] + '|' )
    print(' -----')
    print('|' + cell[3] + '|' + cell[4] + '|' + cell[5] + '|' )
    print(' -----')
    print('|' + cell[6] + '|' + cell[7] + '|' + cell[8] + '|' )
    print(' -----\n')
    

oneturn=True
winner=False

while not winner :
    grid()
    if oneturn :
        print("Player X: ")
    else:
        print("Player O: ")
    try:
        c=int(input("=>"))
    except:
        print("An error occured..Try again")
        continue
    if cell[c - 1] == 'X' or cell [c-1] == 'O':
        print("Wrong choice..try again")
        continue
    if oneturn :
        cell[c-1]='X'     
    
    else:
        cell[c-1]='O'
    oneturn = not oneturn
    
    if (((cell[0]=='X') or (cell[0]=='O')) and
            ((cell[1]=='X') or (cell[1]=='O')) and
            ((cell[2]=='X') or (cell[2]=='O')) and
            ((cell[3]=='X') or (cell[3]=='O')) and
            ((cell[4]=='X') or (cell[4]=='O')) and
            ((cell[5]=='X') or (cell[5]=='O')) and
            ((cell[6]=='X') or (cell[6]=='O')) and
            ((cell[7]=='X') or (cell[7]=='O')) and
            ((cell[8]=='X') or (cell[8]=='O'))):
             print("\nA DRAW!")
             print("Play again ^_^")      
             break

    for x in range (0, 3) :
        y = x * 3
        if ((cell[y] == cell[(y + 1)] == cell[(y + 2)]=='X') or
           (cell[x] == cell[(x + 3)] == cell[(x + 6)]== 'X') or
           (cell[0] == cell[4] == cell[8] == 'X')or
           (cell[2] == cell[4] == cell[6]=='X')):
                                 
             winner = True
             grid()
             print("X is winner..CONGRATULATIONS!")
             print("Play again ^_^")
             break
       
        elif ((cell[y] == cell[(y + 1)] == cell[(y + 2)]=='O') or
             (cell[x] == cell[(x + 3)] == cell[(x + 6)]=='O') or
             (cell[0] == cell[4] == cell[8] =='O') or
             (cell[2] == cell[4] == cell[6] =='O')):
                           
                  winner = True
                  grid()
                  print("O is winner..CONGRATULATIONS!")
                  print("Play again ^_^")
                  break



        

    
       

        
        
    
 
