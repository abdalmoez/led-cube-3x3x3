int cols[]={0,1,2,3,4,5,6,7,8};
int etages[] = {9,10,11};


void setup() {
  int i;
  for(i=0;i<12;i++)
    pinMode(i,OUTPUT);
  for(i=0;i<12;i++)
    digitalWrite(i,LOW);
while(1){
  for(int j=9;j<12;j++)
  {
    digitalWrite(j,HIGH);
    for(int i = 0;i<9;i++)
    {
      digitalWrite(i,HIGH);
      delay(500);
      digitalWrite(i,LOW);
    }
    digitalWrite(j,LOW);
  }}
  
}
byte c[10],r[10];
void loop() {
  
  for(int i = 0;i<10;i++)
    c[i]=random(0,8);
  for(int i = 0;i<10;i++)
    r[i]=random(9,11);

  for(int i = 0;i<10;i++)
    digitalWrite(c[i],HIGH);
  for(int i = 0;i<10;i++)
    digitalWrite(r[i],HIGH);

  
  delay(20);
  
  for(int i = 0;i<10;i++)
    digitalWrite(c[i],LOW);
  for(int i = 0;i<10;i++)
    digitalWrite(r[i],LOW);  

}
void anim(){
  
}
