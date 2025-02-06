import os
import time

fifo_path = "/tmp/Pipe_Chessboard"

# Falls die Pipe nicht existiert, erstelle sie
if not os.path.exists(fifo_path):
    os.mkfifo(fifo_path)

with open(fifo_path, "a") as fifo:
    while True:
        fifo.write("e2\n")
        fifo.flush()
        time.sleep(1.5)
        
        fifo.write("e4\n")
        fifo.flush()  
        time.sleep(1.5)