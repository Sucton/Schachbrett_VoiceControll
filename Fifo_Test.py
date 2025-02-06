import os
import time

fifo_path = "/tmp/Pipe_Chessboard"

# Falls die Pipe nicht existiert, erstelle sie
if not os.path.exists(fifo_path):
    os.mkfifo(fifo_path)

with open(fifo_path, "w") as fifo:
    while True:
        fifo.write("Hallo aus Python!\n")
        fifo.flush()  # Stellt sicher, dass die Daten direkt geschrieben werden
        time.sleep(1)  # Warte 1 Sekunde, dann neue Daten
