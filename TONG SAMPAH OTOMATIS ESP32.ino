#declare pin
TRIG = Pin(12, Pin.IN)
ECHO = Pin(14, Pin.OUT)
servo_pin Pin(27, Pin.OUT)

#create object name for sensor with library library name.classnam
Ultra_sensor = library_ultrasonic.HCSR04(trigger_pin=TRIG, echo_pin=ECHO)
Tiang_gate = library_servo.Servo (pin=servo_pin)

#main program
while True:

#ultrasonic part
print("\n=jom cek incoming distance")
distance_inmm = ultra_sensor.distance_mm()
print("an incoming object is at", distance_inmm, "mm")
distance_incm = ultra_sensor.distance_cm()

print("an incoming object is at", distance_inem, "cm")

if distance_incm <= 100:

#servomotor part
tiang_gate.move(0)
sleep(0.2)
tiang_gate.move(90)
sleep(5)
tiang_gate.move(0)
sleep(1)
sleep(2) #in every 2 second, sensor will sense new incoming distance