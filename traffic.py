from gpiozero import LED
import time

red = LED(16)
green = LED(17)
yellow = LED(18)

red.on()
red.sleep(5)
red.off()

yellow.on()
yellow.sleep(2)
yellow.off()

green.on()
green.sleep(5)
green.off()
