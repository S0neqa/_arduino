#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
#define PONTO 9


int Tempo = 1000;

int SeteSeg[] = {A,B,C,D,E,F,G,PONTO};


void setup(){
  for(int i = 0; i<7; i++){
    pinMode(SeteSeg[i], OUTPUT);
  }
  
}




void loop(){
  
  for(int i = 9; i <= 9; i--){
    
    switch(i){
      
        case 0:
      
        NUMERO(1,1,1,1,1,1,0);
        delay(500);
        NUMERO(0,0,0,0,0,0,0);
        delay(500);
        NUMERO(1,1,1,1,1,1,0);
        delay(500);
        NUMERO(0,0,0,0,0,0,0);
        delay(500);
        NUMERO(1,1,1,1,1,1,0);
        delay(500);
        NUMERO(0,0,0,0,0,0,0);
        delay(500);
    
      break;
      
      case 1:
      
        NUMERO(0,1,1,0,0,0,0);
        delay(Tempo);
    
      break;
    
      case 2:
      
        NUMERO(1,1,0,1,1,0,1);
        delay(Tempo);
    
      break;
        
        case 3:
      
        NUMERO(1,1,1,1,0,0,1);
        delay(Tempo);
    
      break;
    
      case 4:
      
        NUMERO(0,1,1,0,0,1,1);
        delay(Tempo);
    
      break;
      
        case 5:
      
        NUMERO(1,0,1,1,0,1,1);
        delay(Tempo);
    
      break;
      
        case 6:
      
        NUMERO(1,0,1,1,1,1,1);
        delay(Tempo);
    
      break;
      
        case 7:
      
        NUMERO(1,1,1,0,0,0,0);
        delay(Tempo);
    
      break;
      
        case 8:
      
        NUMERO(1,1,1,1,1,1,1);
        delay(Tempo);
    
      break;
      
        case 9:
      
        NUMERO(1,1,1,1,0,1,1);
        delay(Tempo);
    
      break;
      
    }
  }
  
}






void NUMERO(bool a, bool b, bool c, bool d, bool e, bool f, bool g){
  
  digitalWrite(A, a);
  digitalWrite(B, b);
  digitalWrite(C, c);
  digitalWrite(D, d);
  digitalWrite(E, e);
  digitalWrite(F, f);
  digitalWrite(G, g);
  
  delay(15);
  
}

