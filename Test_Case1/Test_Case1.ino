const int sp=55;
//0=black
//white=1
int ar[8];
void setup() {
  // put your setup code here, to run once:
pinMode(A0, INPUT);//D0
pinMode(A1, INPUT);//D1
pinMode(2, INPUT);//D2
pinMode(3, INPUT);//D3
pinMode(4, INPUT);//D4
pinMode(5, INPUT);//D5
pinMode(7, INPUT);//D6
pinMode(8, INPUT);//D7

pinMode(6, OUTPUT);
pinMode(9, OUTPUT);  
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);

}

void loop() 
{
  // put your main code here, to run repeatedly:
   ar[0]= digitalRead(A0);
   ar[1]= digitalRead(A1);
   ar[2]= digitalRead(2);
   ar[3]= digitalRead(3);
   ar[4]= digitalRead(4); 
   ar[5]= digitalRead(5);
   ar[6]= digitalRead(7);
   ar[7]= digitalRead(8); 
  if(ar[3]==0 && ar[4]==0)
  {
    if(ar[0]==1 && ar[1]==1 && ar[2]==1 && ar[5]==1 && ar[6]==1 && ar[7]==1)
    {
      myblink();
      test_for();
    }
    analogWrite (6, sp); 
    analogWrite (9, 0);
    analogWrite (10, sp);
    analogWrite (11, 0);
  }
 else if((ar[0]==0 || ar[1]==0 || ar[2]==0) || ar[3]==0) && (ar[4]==1 && ar[5]==1 && ar[6]==1 && ar[7]==1))
 {
    analogWrite (6, 0); 
    analogWrite (9, 0);
    analogWrite (10, sp);
    analogWrite (11, 0);
 }
 else if((ar[0]==1 && ar[1]==1 && ar[2]==1) && ar[3]==1) && (ar[4]==0 || ar[5]==0 || ar[6]==0 || ar[7]==0))
 {
    analogWrite (6, sp); 
    analogWrite (9, 0);
    analogWrite (10, 0);
    analogWrite (11, 0);
 }
  else if(ar[0]==0 && ar[1]==0 && ar[2]==0 && ar[3]==0 && ar[4]==0 && ar[5]==0 && ar[6]==0 && ar[7]==0)
 {
    analogWrite (6, sp); 
    analogWrite (9, 0);
    analogWrite (10, sp);
    analogWrite (11, 0);
 }
 
}
