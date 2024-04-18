[Guide](https://dev.to/stepanvrany/esp32-with-arduino-cli-36mh)

- Loaction of `Arduino.h`: `[platform installation folder]/cores/[core]`

- List all known boards and their corresponding FQBN.
```
    arduino-cli board listall esp32
```

- Lists all connected broads (contains the PORT information):
```
    arduino-cli board list
```

- Compile:
```
    arduino-cli compile --fqbn esp32:esp32:esp32doit-devkit-v1 --library ../../src/
```

- Upload:
```
    arduino-cli upload --fqbn esp32:esp32:esp32doit-devkit-v1 --port /dev/ttyUSB0
```

- Monitor
```
    arduino-cli monitor --port /dev/ttyUSB0 --timestamp 

```