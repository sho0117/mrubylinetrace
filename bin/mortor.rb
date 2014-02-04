HIGH = 1
LOW = 0

cputs "mruby code started"

loop do
  cdigitalWrite(12,HIGH);
  cdigitalWrite(13,LOW);
  cdelay(1000);
  cdigitalWrite(12,LOW);
  cdigitalWrite(13,HIGH);
  cdelay(1000);
end

