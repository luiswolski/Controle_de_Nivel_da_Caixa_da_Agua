int displayA = 32, displayB = 33, displayC = 25, displayD = 26, display1 = 21, display2 = 22, display3 = 23, echoPin = 12, trigPin = 13;
int ledProg = 18, ledDist = 19, butData = 4, butSel = 27, butUp = 15, outBomba = 5;

float dist[10], litros, distanceCm, speedOfSound, soma;
unsigned long maxDurationMicrosec, durationMicrosec;
float distMin = 12.0;
float distMax = 50.0;
float area = 1.0;
float altura = 10.0;
float volume;


float Ultrassonico(float temp) {
    speedOfSound = 0.03313 + 0.0000606 * temp;

    maxDurationMicrosec = 1000 / speedOfSound;
  
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    delayMicroseconds(5);
  
    durationMicrosec = pulseIn(echoPin, HIGH, maxDurationMicrosec);

    distanceCm = durationMicrosec / 2.0 * speedOfSound;

    if (distanceCm == 0) {
        return 400.0;
    }
    else {
        return distanceCm;
    }
}
void decimal(int num) {
    digitalWrite(display1, 0);
    if(num == 0) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 0);
        digitalWrite(displayB, 0);
        digitalWrite(displayA, 0);
    }
    else if(num == 1) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 0);
        digitalWrite(displayB, 0);
        digitalWrite(displayA, 1);
    }
    else if(num == 2) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 0);
        digitalWrite(displayB, 1);
        digitalWrite(displayA, 0);
    }
    else if(num == 3) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 0);
        digitalWrite(displayB, 1);
        digitalWrite(displayA, 1);
    }
    else if(num == 4) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 1);
        digitalWrite(displayB, 0);
        digitalWrite(displayA, 0);
    }
    else if(num == 5) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 1);
        digitalWrite(displayB, 0);
        digitalWrite(displayA, 1);
    }
    else if(num == 6) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 1);
        digitalWrite(displayB, 1);
        digitalWrite(displayA, 0);
    }
    else if(num == 7) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 1);
        digitalWrite(displayB, 1);
        digitalWrite(displayA, 1);
    }
    else if(num == 8) {
        digitalWrite(displayD, 1);
        digitalWrite(displayC, 0);
        digitalWrite(displayB, 0);
        digitalWrite(displayA, 0);
    }
    else if(num == 9) {
        digitalWrite(displayD, 1);
        digitalWrite(displayC, 0);
        digitalWrite(displayB, 0);
        digitalWrite(displayA, 1);
    }
    else {
        digitalWrite(displayD, 1);
        digitalWrite(displayC, 1);
        digitalWrite(displayB, 1);
        digitalWrite(displayA, 1);
    }

    delay(1);
    digitalWrite(display1, 1);
    digitalWrite(displayD, 1);
    digitalWrite(displayC, 1);
    digitalWrite(displayB, 1);
    digitalWrite(displayA, 1);
}

void unidade(int num) {
    digitalWrite(display2, 0);
    if(num == 0) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 0);
        digitalWrite(displayB, 0);
        digitalWrite(displayA, 0);
    }
    else if(num == 1) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 0);
        digitalWrite(displayB, 0);
        digitalWrite(displayA, 1);
    }
    else if(num == 2) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 0);
        digitalWrite(displayB, 1);
        digitalWrite(displayA, 0);
    }
    else if(num == 3) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 0);
        digitalWrite(displayB, 1);
        digitalWrite(displayA, 1);
    }
    else if(num == 4) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 1);
        digitalWrite(displayB, 0);
        digitalWrite(displayA, 0);
    }
    else if(num == 5) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 1);
        digitalWrite(displayB, 0);
        digitalWrite(displayA, 1);
    }
    else if(num == 6) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 1);
        digitalWrite(displayB, 1);
        digitalWrite(displayA, 0);
    }
    else if(num == 7) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 1);
        digitalWrite(displayB, 1);
        digitalWrite(displayA, 1);
    }
    else if(num == 8) {
        digitalWrite(displayD, 1);
        digitalWrite(displayC, 0);
        digitalWrite(displayB, 0);
        digitalWrite(displayA, 0);
    }
    else if(num == 9) {
        digitalWrite(displayD, 1);
        digitalWrite(displayC, 0);
        digitalWrite(displayB, 0);
        digitalWrite(displayA, 1);
    }
    else {
        digitalWrite(displayD, 1);
        digitalWrite(displayC, 1);
        digitalWrite(displayB, 1);
        digitalWrite(displayA, 1);
    }

    delay(1);
    digitalWrite(display2, 1);
    digitalWrite(displayD, 1);
    digitalWrite(displayC, 1);
    digitalWrite(displayB, 1);
    digitalWrite(displayA, 1);
}

void dezena(int num) {
    digitalWrite(display3, 0);
    if(num == 0) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 0);
        digitalWrite(displayB, 0);
        digitalWrite(displayA, 0);
    }
    else if(num == 1) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 0);
        digitalWrite(displayB, 0);
        digitalWrite(displayA, 1);
    }
    else if(num == 2) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 0);
        digitalWrite(displayB, 1);
        digitalWrite(displayA, 0);
    }
    else if(num == 3) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 0);
        digitalWrite(displayB, 1);
        digitalWrite(displayA, 1);
    }
    else if(num == 4) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 1);
        digitalWrite(displayB, 0);
        digitalWrite(displayA, 0);
    }
    else if(num == 5) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 1);
        digitalWrite(displayB, 0);
        digitalWrite(displayA, 1);
    }
    else if(num == 6) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 1);
        digitalWrite(displayB, 1);
        digitalWrite(displayA, 0);
    }
    else if(num == 7) {
        digitalWrite(displayD, 0);
        digitalWrite(displayC, 1);
        digitalWrite(displayB, 1);
        digitalWrite(displayA, 1);
    }
    else if(num == 8) {
        digitalWrite(displayD, 1);
        digitalWrite(displayC, 0);
        digitalWrite(displayB, 0);
        digitalWrite(displayA, 0);
    }
    else if(num == 9) {
        digitalWrite(displayD, 1);
        digitalWrite(displayC, 0);
        digitalWrite(displayB, 0);
        digitalWrite(displayA, 1);
    }
    else {
        digitalWrite(displayD, 1);
        digitalWrite(displayC, 1);
        digitalWrite(displayB, 1);
        digitalWrite(displayA, 1);
    }

    delay(1);
    digitalWrite(display3, 1);
    digitalWrite(displayD, 1);
    digitalWrite(displayC, 1);
    digitalWrite(displayB, 1);
    digitalWrite(displayA, 1);
}

void programming(){
    int cont = 0;
    while(digitalRead(butSel) == 0) {
        digitalWrite(outBomba, 0);
        Serial.println("Modo Programação");
        Serial.println(cont);
        digitalWrite(ledProg, 1);
        digitalWrite(ledDist, 0);
        dezena(0);
        unidade(cont);
        if(digitalRead(butUp) == 0 && digitalRead(butData) == 1) {
            delay(200);
            if(digitalRead(butUp) == 0 && cont != 0) {
                cont--;
                unidade(cont);
                delay(500);
            }
            else if(digitalRead(butUp) == 0 && cont == 0) {
                cont = 8;
                unidade(cont);
                delay(500);
            }
            else if(digitalRead(butUp) == 1 && cont == 8) {
                cont = 0;
            }
            else if(digitalRead(butUp) == 1 && cont != 8) {
                cont++;
            }
        }
        else if(digitalRead(butData) == 0) {
            delay(300);
            for(int i = 0; i < 300; i++) {
                dezena(0);
                unidade(cont);
            }
            delay(300);
            for(int i = 0; i < 300; i++) {
                dezena(0);
                unidade(cont);
            }
            delay(200);
            if(cont == 0){
                while(digitalRead(butData) == 0) { //Programação Distância Mínima (a que desliga a bomba)
                    dezena(int(distMin) / 10);
                    unidade(int(distMin) % 10);
                    decimal(int(distMin * 10) % 10);
                    if(digitalRead(butUp) == 0) {
                        delay(200);
                        if(digitalRead(butUp) == 1 && distMin < (distMax - 0.5) && distMin < (altura * 10 - 1.0)) {
                            distMin += 0.1;
                        }
                        else if(digitalRead(butUp) == 0 && distMin > 0.1) {
                            distMin -= 0.1;
                            dezena(int(distMin) / 10);
                            unidade(int(distMin) % 10);
                            decimal(int(distMin * 10) % 10);
                            delay(500);
                        }
                    }
                    Serial.print("DistMin = ");
                    Serial.println(distMin);
                }
            }
            else if(cont == 1){ //Programação Distância Máxima (a que liga a bomba)
                while(digitalRead(butData) == 0) {
                    dezena(int(distMax) / 10);
                    unidade(int(distMax) % 10);
                    decimal(int(distMax * 10) % 10);
                    if(digitalRead(butUp) == 0) {
                        delay(200);
                        if(digitalRead(butUp) == 1 && distMax < 99.9) {
                            distMax += 0.1;
                        }
                        else if(digitalRead(butUp) == 0 && distMax > (distMin + 0.5) && distMax < (altura * 10 - 0.5)) {
                            distMax -= 0.1;
                            dezena(int(distMax) / 10);
                            unidade(int(distMax) % 10);
                            decimal(int(distMax * 10) % 10);
                            delay(500);
                        }
                    }
                    Serial.print("DistMax = ");
                    Serial.println(distMax);
                }
            }
            else if(cont == 2){ //Programação Área (em dm²)
                while(digitalRead(butData) == 0) {
                    dezena(int(area) / 10);
                    unidade(int(area) % 10);
                    decimal(int(area * 10) % 10);
                    if(digitalRead(butUp) == 0) {
                        delay(200);
                        if(digitalRead(butUp) == 1 && area < 99.9) {
                            area += 0.1;
                        }
                        else if(digitalRead(butUp) == 0 && area > 0.1) {
                            area -= 0.1;
                            dezena(int(area) / 10);
                            unidade(int(area) % 10);
                            decimal(int(area * 10) % 10);
                            delay(500);
                        }
                        volume = area * (altura - distMin);
                    }
                    Serial.print("Area = ");
                    Serial.println(area);
                }
            }
            else if(cont == 3){ //Programação Altura de Fixação do Sensor em Relação ao Fundo da Caixa d`Água (em dm)
                while(digitalRead(butData) == 0) {
                    dezena(int(altura) / 10);
                    unidade(int(altura) % 10);
                    decimal(int(altura * 10) % 10);
                    if(digitalRead(butUp) == 0) {
                        delay(200);
                        if(digitalRead(butUp) == 1 && altura < 99.9) {
                            altura += 0.1;
                        }
                        else if(digitalRead(butUp) == 0 && altura > 0.1) {
                            altura -= 0.1;
                            dezena(int(altura) / 10);
                            unidade(int(altura) % 10);
                            decimal(int(altura * 10) % 10);
                            delay(500);
                        }
                        volume = area * (altura - distMin);
                    }
                    Serial.print("Altura = ");
                    Serial.println(altura);
                }
            }
            else if(cont == 4){ //Mostra volume máximo da Caixa d`Água
                while(digitalRead(butData) == 0) {
                    dezena(int(volume) / 10);
                    unidade(int(volume) % 10);
                    decimal(int(volume * 10.0) % 10);
                }
            }
            else if(cont == 5){ //Mostra distancia atual do sensor
                while(digitalRead(butData) == 0) {
                    soma = 0;
                    for(int i = 0; i < 10; i++){
                        dist[i] = Ultrassonico(25.0);
                        soma += dist[i];
                    }
                    dezena(int(soma / 10.0) / 10);
                    unidade(int(soma / 10.0) % 10);
                    decimal(int(soma) % 10);
                }
            }
            else if(cont == 6){ //Mostra Volume atual da Caixa d`Água
                while(digitalRead(butData) == 0) {
                    soma = 0;
                    for(int i = 0; i < 10; i++){
                        dist[i] = Ultrassonico(25.0);
                        soma += dist[i];
                    }
                    litros = area * (altura - soma / 10.0);
                    dezena(int(litros) / 10);
                    unidade(int(litros) % 10);
                    decimal(int(litros * 10.0) % 10);
                }
            }
        }
    }
    digitalWrite(ledProg, 0);
    digitalWrite(ledDist, 1);
}

void setup() {
    Serial.begin(9600);
  
    pinMode(displayA, OUTPUT);
    pinMode(displayB, OUTPUT);
    pinMode(displayC, OUTPUT);
    pinMode(displayD, OUTPUT);
    pinMode(display1, OUTPUT);
    pinMode(display2, OUTPUT);
    pinMode(display3, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(trigPin, OUTPUT);
    pinMode(ledProg, OUTPUT);
    pinMode(ledDist, OUTPUT);
    pinMode(butData, INPUT_PULLUP);
    pinMode(butSel, INPUT_PULLUP);
    pinMode(butUp, INPUT_PULLUP);
    pinMode(outBomba, OUTPUT);
    
    digitalWrite(displayA, 0);
    digitalWrite(displayB, 0);
    digitalWrite(displayC, 0);
    digitalWrite(displayD, 0);
    digitalWrite(display1, 1);
    digitalWrite(display2, 1);
    digitalWrite(display3, 1);

    digitalWrite(ledDist, 1);
    digitalWrite(ledProg, 0);

    volume = area * (altura - distMin);
}

void loop() {
    programming();
    soma = 0;
    for(int i = 0; i < 10; i++){
        dist[i] = Ultrassonico(25.0);
        soma += dist[i];
    }
    dezena(int(soma / 10.0) / 10);
    unidade(int(soma / 10.0) % 10);
    decimal(int(soma) % 10);
    delay(50);
    dezena(int(soma / 10.0) / 10);
    unidade(int(soma / 10.0) % 10);
    decimal(int(soma) % 10);
    delay(50);
    dezena(int(soma / 10.0) / 10);
    unidade(int(soma / 10.0) % 10);
    decimal(int(soma) % 10);
    Serial.println(soma / 10.0);
    if((soma / 10.0) > (1.2 * distMin)) {
        digitalWrite(outBomba, 1);
        Serial.println("Bomba Ligada");
    }
    else if((soma / 10.0) < (1.1 * distMin)) {
        digitalWrite(outBomba, 0);
    }
}
