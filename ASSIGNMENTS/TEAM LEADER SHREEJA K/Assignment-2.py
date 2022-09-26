'''Temperature and Humidity is gernerated Randomly,if it is above the required temperature
and Humidity then an alarm is set to detect and gives message as high temperature and more
Humidity is detected'''


import random
import time

while(1):
    time.sleep(2) #2 seconds delay
    temperature = random.randrange(0,100)
    humidity = random.randrange(0,100)
    
    print("Temperature =",temperature)
    print("Humidity =",humidity)
    
    if(temperature>40 or humidity>60):
        if(temperature>40 and humidity>60):   #Detection of High temperature and humdity
            print("High temperature and More Humidity is Detected")
        elif(humidity>60 and temperature<40): #Detection of High humdity
            print("More Humidity is Detected")
        else:                                 #Detection of High temperature
            print("High temperature is Detected")
