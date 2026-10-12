from PyQt5.ui import loadUi
from PyQt5.QtWidgets import QApplication
def verifier(m,n):
      ch = str(m)+str(n)
      taille = len(ch)
      #tri a bulle
      for i in range (taille):
          for j in range(0,taille-i-1):
              if ch[j] > ch[j+1]:
                  aux = ch[j]
                  ch[j] = ch[j+1]
                  ch[j+1]=aux
    test = True
    i=0
    while test and i <taille-1:
        if not( ch[i]+1=ch[i+1]):
            test = False
        else:
            i = i+1
    return test
def play():
    m = win.m.text()
    m = int(m)
    n = win.n.text()
    n = int(n)
    if verifier(m,n):
        win.r.setText("les nombre formant succesion parfaite")
    else:
        win.r.setText("les nombre ne  forme pas succesion parfaite")
app = QApplication([])
win = loadUi("path mte3ik mt3 interface.ui")
win.show()
win.pb.clicked.connect(play)
app.exec_()
        