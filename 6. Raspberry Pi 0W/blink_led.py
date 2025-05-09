import RPi.GPIO as GPIO
import time

# Use BCM numbering
GPIO.setmode(GPIO.BCM)

# Set up GPIO 17 as output
LED_PIN = 17
GPIO.setup(LED_PIN, GPIO.OUT)

print("Blinking LED. Press Ctrl+C to stop.")

try:
    while True:
        GPIO.output(LED_PIN, GPIO.HIGH)  # Turn on
        time.sleep(1)
        GPIO.output(LED_PIN, GPIO.LOW)   # Turn off
        time.sleep(1)
except KeyboardInterrupt:
    print("Stopping...")
finally:
    GPIO.cleanup()

