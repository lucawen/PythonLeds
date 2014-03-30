# encoding: latin-1
import serial

port = "COM3"
commom = 9600
connect = serial.Serial(port, commom);
select = 0
msg = 0

print('Opções:\n(1)Para ligar/desligar led 1\n(2)Para ligar/desligar led 2\n(3)Para ligar/desligar led 3\n(4)Exibir status dos leds ao ligar/desligar-los\n(5)Sair')
while select <= '4':
    select = raw_input('Opção:')

    if select <= '4':
        if select == '1':
            connect.write('a')
        elif select == '2':
            connect.write('b')
        elif select == '3':
            connect.write('c')
        elif select == '4' and msg == 0:
            msg = 1
        elif select == '4' and msg == 1:
            msg = 0
    if msg != 0:
        read = connect.readline()
        print read
        
connect.close()


