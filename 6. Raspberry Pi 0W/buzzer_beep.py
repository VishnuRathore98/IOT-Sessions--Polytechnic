import RPi.GPIO as GPIO
import time

BUZZER = 17

GPIO.setmode(GPIO.BCM)
GPIO.setup(BUZZER, GPIO.OUT)

try:
    for _ in range(5):
        GPIO.output(BUZZER, True)
        time.sleep(0.2)
        GPIO.output(BUZZER, False)
        time.sleep(0.2)
except KeyboardInterrupt:
    GPIO.cleanup()

