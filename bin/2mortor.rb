HIGH = 1
LOW = 0

cputs "mruby code started"

loop do
  cdigitalWrite(13,HIGH);
  cdigitalWrite(10,HIGH);
  cdigitalWrite(12,HIGH);
  cdigitalWrite(11,LOW);
  cdigitalWrite(9,HIGH);
  cdigitalWrite(8,LOW);
  cdelay(1000);
end
