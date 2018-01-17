#include <>

const int ac_mode 2;//digital,mode
const int id_mode 3;//digital,mode
const int ij_pin 5;//digital,injector
const int pl_pin 0;//Analog,pulse generator

void setup() {
  pinMode(ac_mode,INPUT);
  pinMode(id_mode,INPUT);
  pinMode(ij_pin,OUTPUT);
  pinMode(pl_pin,OUTPUT);



}

void loop() {
  if(id_mode==HIGH)
  {

  }else{
    
  }

}
