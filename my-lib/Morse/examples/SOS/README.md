

- How to compile ?

```
    arduino-cli compile --fqbn esp32:esp32:m5stack-core-esp32 --library ../../src/
```
`OR`

```
    arduino-cli compile --fqbn esp32:esp32:m5stack-core-esp32 --libraries ../../ --build-path ./build/
```

- How to upload ?
```
    arduino-cli upload --fqbn esp32:esp32:m5stack-core-esp32 --port /dev/ttyUSB0
```

