# Setting up the Arduino isp (ES24_Software_Installation.pdf)

### in command
`C:\Program Files (x86)\Arduino\hardware\tools\avr\bin\avrdude.exe`

### in arguments
`-C "C:\Program Files (x86)\Arduino\hardware\tools\avr\etc\avrdude.conf" -p atmega328p -c arduino -P COM3 -b 115200 -U flash:w:"$(ProjectDir)Debug\$(TargetName).hex":i`

- NOTE: COM3 should be changed to reflect PORT of arduino uno device found in **_Device Manager_**