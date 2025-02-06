import chess

def print_board(board):
    print(board)

def get_move():
    move = input("Gib deinen Zug ein (z.B. e2e4): ")
    return move

def main():
    board = chess.Board()
    print("Willkommen beim Schach!")
    
    while not board.is_game_over():
        print_board(board)
        
        # Hole den nächsten Zug
        move = get_move()
        
        # Prüfe, ob der Zug gültig ist
        move_obj = chess.Move.from_uci(move)
        if move_obj in board.legal_moves:
            board.push(move_obj)
        else:
            print("Ungültiger Zug! Versuche es nochmal.")
    
    print("Spiel beendet!")
    print("Ergebnis: " + board.result())

if __name__ == "__main__":
    main()
