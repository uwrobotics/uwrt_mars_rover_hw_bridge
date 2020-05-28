CONFIG_PATH  = config
HEADER_FILE  = $(CONFIG_PATH)/hw_bridge.h
SRC_FILE     = $(CONFIG_PATH)/hw_bridge.cpp
OUTPUT	     = hw_bridge.o
CPP          = arm-none-eabi-g++
hw_bridge: $(HEADER_FILE) $(SRC_FILE)
	$(CPP) $(SRC_FILE) -c -o $(OUTPUT)
	#arm-none-eabi-g++ /config/hw_bridge.cpp -c -o hw_bridge
clean:
	rm -f $(OUTPUT)