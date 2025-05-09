from gpiozero import PWMLED
from time import sleep

led = PWMLED(17)

led.pulse()  # Automatic fade loop
sleep(10)    # Let it run 10 seconds
led.off()

