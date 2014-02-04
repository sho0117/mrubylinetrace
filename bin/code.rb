HIGH = 1
LOW = 0

cputs "mruby code started"

loop do 
	cdigitalWrite(7, HIGH);
	cdelay(500);
	cdigitalWrite(7, LOW);
	cdelay(500);
end
