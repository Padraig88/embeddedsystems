
//Lab 1
//Fib - sample 0,1, [1, 2], 3, 5 8, 13....

int max_term = 100;

void funcFib(int max_term){
  Serial.print("funcFib: 0, 1, ");

  int prev1 = 0;
  int prev2 = 1;
  int next_term = 0;

  for(int i=2; i<max_term; i++){
    next_term = prev1 + prev2;
    prev1 = prev2;
    prev2 = next_term;
    Serial.print(next_term);
    Serial.print(", ");
  }
    Serial.println("!!!"); 
}


int fib(int curr_term){
  if(curr_term == 0){
    return 0;
  }else if (curr_term == 1) {
    return 1;
  }else{
    return(fib(curr_term - 1) + fib(curr_term - 2));
  }
}
  
  void recuvFib(int max_term) {
    Serial.print("recuvFib: ");
  
    for(int i=0; i<max_term; i++){
      int res = fib(i);
      Serial.print(res);
      Serial.print(", ");
    }
    Serial.println("!!!");
    }
  
  
    void setup()  {
      // put your setup code here, to run once;
      delay(3000);
      Serial.print("global max_term is ");
      Serial.println(max_term);
      funcFib(15);
      recuvFib(15);

    }
      void loop () {
        // put your main code here, to run repeatedly;
      }
      

      
    

  
  



    
     










