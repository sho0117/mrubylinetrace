HIGH = 1
LOW = 0

loop do

  val1 = canalogRead(1)
  val2 = canalogRead(2)
  val3 = canalogRead(3)
  black = 45
  cprint(val1)
  cprint(val2)
  cprint(val3)
  cdigitalWrite(13,HIGH)
  cdigitalWrite(7,HIGH)
  canalogWrite(10,250)
  canalogWrite(9,150)
  canalogWrite(6,250)
  canalogWrite(5,150)


  if val1>black
    canalogWrite(10,HIGH)
    canalogWrite(9,HIGH)
  end
  if val3>black
    canalogWrite(6,HIGH)
    canalogWrite(5,HIGH)
  end

  cdelay(50)

end
